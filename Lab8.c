#include <stdio.h>
#include <math.h>

float employee(int ,float ,int );
float employer(int , float , int );

int main(){

    int empStatus,empAge,checking;
    float empSalary,totalPercent,totalPrice;

    do{
        printf("\nEnter employee status (1-Malaysian, 2-Permanent Resident, 3-Non-Malaysians (registered as member before 1 August 1998), 4- Non-Malaysians (registered as member from 1 August 1998)): ");
        checking = scanf("%d",&empStatus);
        fflush(stdin);
        if(checking != 1)
            puts("\nPlease enter a valid input !");
        else if(empStatus < 1 || empStatus > 4)
            puts("\nPlease enter a valid number !");
    }while(checking != 1 || empStatus < 1 || empStatus > 4);

    do{
        printf("Enter employee salary: ");
        checking = scanf("%f",&empSalary);
        fflush(stdin);
        if(checking != 1)
            puts("\nPlease enter a valid input !");
        else if(empSalary < 0)
            puts("\nPlease enter a valid number !");
    }while(checking != 1 || empSalary < 0);

    do{
        printf("Enter employee age: ");
        checking = scanf("%d",&empAge);
        fflush(stdin);
        if(checking != 1)
            puts("\nPlease enter a valid input !");
        else if(empAge <= 0)
            puts("\nPlease enter a valid number !");
    }while(checking != 1 || empAge <= 0);

    totalPercent =  (100/empSalary)*(employer(empStatus,empSalary,empAge) + employee(empStatus,empSalary,empAge));
    totalPrice = ceil(employee(empStatus,empSalary,empAge)) + ceil(employer(empStatus,empSalary,empAge));

    printf("\nEmployer contribution: %.1f%%, RM %.2f",(employer(empStatus,empSalary,empAge)*100)/empSalary,ceil(employer(empStatus,empSalary,empAge)));
    printf("\nEmployee contribution: %.1f%%, RM %.2f",(employee(empStatus,empSalary,empAge)*100)/empSalary,ceil(employee(empStatus,empSalary,empAge)));
    printf("\nTotal contribution: %.1f%%, RM %.2f",totalPercent,totalPrice);
	
    return 0;
}

float employee(int a,float b,int c){
    if(a == 1 && c >= 60)
        return 0;
    else
        return c < 60? b*0.09 : b*0.055;
}

float employer(int e, float f, int g){
    if(e == 1 && g >= 60)
        return f*0.04;
    else if(e == 1 || e == 2 || e == 3 && g < 60)
        return f <= 5000? f*0.13:f*0.12;
    else if(e == 2 || e == 3 && g >= 60)
        return f <= 5000? f*0.065:f*0.06;
    else
        return f*0.05;
}
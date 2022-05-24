#include <stdio.h>

int main(){

    float hours;
    puts("Parking duration\tparking rate (RM)");
    
    puts("First hour  \t\t 2.50");
    puts("next 3 hours \t\t 1.50/hour");
    puts("next 2 hours  \t\t 1.00/hour");
    puts("next hour \t\t 0.50/hour");

    printf("Enter the total hours : ");
    scanf("%f",&hours);

    if(hours <= 1){
        printf("Parking rate : RM %.2f",hours*2.5);
    }else if(hours <= 4){
        printf("Parking rate : RM %.2f",2.5 + (hours - 1) * 1.5);
    }else if(hours <= 6){
        printf("Parking rate : RM %.2f",7 + (hours - 4));
    }else{
        printf("Parking rate : RM %.2f",9 + (hours - 6) * 0.5);
    }
    
}
#include <stdio.h>

int main(){

    int no,checking, countOdd = 0, countNeg = 0, countDiv10 = 0;
    float number;

    printf("How many number do you want to insert : ");
    scanf("%d",&no);
    for(int i = 0; i < no; i++){
        do{
            printf("Enter an integer number [%d] : ",i+1);
            checking = scanf("%f",&number);
            fflush(stdin);
        }while(checking != 1);
        if((int)number % 2 == 1){
            countOdd++;
        }else if(number < 0){
            countNeg++;
        }else if((int)countDiv10 % 10 == 0){
            countDiv10++;
        }
    }
    printf("Odd : Negative : Divisible by 10 = %d : %d : %d ",countOdd,countNeg,countDiv10); 
}

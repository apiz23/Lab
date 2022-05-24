#include <stdio.h>

int main(){

    float num1,num2,num3;

    printf("Enter 3 number [seperate by spacing] : ");
    scanf("%f%f%f",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3){
        printf("Number in Descending order");
    }else if(num1 < num2 && num1 < num3){
        printf("Number in Ascending order");
    }else{
        printf("Not in order");
    }

    return 0;
}
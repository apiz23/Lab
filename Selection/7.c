#include <stdio.h>

float checking(float a, float b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){

    float num1,num2;

    printf("Enter 2 number [Seperate by spacing] : ");
    scanf("%f%f",&num1,&num2);

    printf("The largest number : %.2f",checking(num1,num2));
}
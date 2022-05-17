#include <stdio.h>

int main(){

    float score;

    do{
        printf("Enter the exam score : ");
        scanf("%f",&score);
        if(score >= 60 && score <= 100){
            printf("%.2f : Pass\n",score);
        }else if(score >= 0 && score <= 100){
            printf("%.2f : Fail\n",score);
        }else{
            break;
        }
    }while(score >= 0 && score <= 100);
    
}
#include <stdio.h>

int main(){

    int num1,num2,num3,num4;
    printf("Enter 4 number [Seperate by spacing] : ");
    scanf("%d%d%d%d", &num1,&num2,&num3,&num4);

    if(num1 > num2 && num1 > num3 && num1 > num4){
        printf("%d",num1);
    }else if(num2 > num3 && num2 > num4){
        printf("%d",num2);
    }else if(num3 > num4){
        printf("%d",num3);
    }else{
        printf("%d", num4);
    }

}
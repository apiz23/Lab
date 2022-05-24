#include <stdio.h>

int main(){

    int answ;

    printf("Enter a number : ");
    scanf("%d",&answ);

    if(answ >= 10 && answ <= 15){
        printf("%d",answ);
    }

    return 0;
}
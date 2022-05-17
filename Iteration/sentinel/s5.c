#include <stdio.h>

int main(){
    int age;
    do{
        printf("Enter the age : ");
        scanf("%d",&age);
        if(age >= 100){puts("You have lived a century");}
        else if(age >= 55){puts("AARP here I come");}
        else if(age >= 1){puts("You are still a spring chicken");}
    }while(age != 0);
}
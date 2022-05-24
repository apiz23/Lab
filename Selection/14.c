#include <stdio.h>
#define max 100

int main(){

    char name[max], fatherName[max], gender;

    printf("Enter your first and last name : ");
    gets(name);

    printf("Enter your father name : ");
    gets(fatherName);

    printf("Enter your gender [f/m] : ");
    gender = getc(stdin);

    printf("Welcome %s %s",name,fatherName);


}
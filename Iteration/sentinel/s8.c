#include <stdio.h>

int main(){

    int age;
    do{
        printf("Enter age : ");\
        scanf(" %d", &age);
        if(age < 0){
            break;
        }
        else if(age >= 0 && age <= 11){
            puts("Stage : Childhood");
        }else if(age <= 20){
            puts("Stage : Adolescence");
        }else if(age <= 59){
            puts("Stage : Adult");
        }else {
            puts("Stage : Elder");
        }
    }while(age >= 0 || age <= 120);
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    char pass []= "programming";
    char answ [100];

    do{
        printf("\nPlease enter the password:");
        for(int i=0; i < 11; i++){
            answ[i]=getch();
            printf("*");
        }
    }while(strcmp(pass,answ) != 0);    

    printf("\nAccepted");
}
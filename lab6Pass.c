#include <stdio.h>
#include <string.h>
#include <conio.h>
#define max 100

int main(void){

    char username[] = "aa210000@uthm.edu.my";
    char password[] = "uthm2022";
    char user[max],pass[max];
    int answ = 0;

    do{
        /* This is the code that is used to get the username and password from the user. */
        printf("Enter username : ");
        scanf("%s",user);
        printf("Enter password : ");
        for(int i = 0; i < 8; i++){
            pass[i] = getch();
            printf("*");
        }
        /* Comparing the user input with the username and password. If the user input is the same as
        the username and password, it will return 1. If not, it will return 0. */
        if(strcmp(user,username) == 0 && strcmp(pass,password) == 0){
            answ = 1;
        }else{
            puts("\nPlease enter a valid username or password");
        }
    }while(answ == 0);

    puts("\nLogin succesfully");

    return 0;
}

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
        printf("Enter username : ");
        scanf("%s",user);
        printf("Enter password : ");
        for(int i = 0; i < 8; i++){
            pass[i] = getch();
            printf("*");
        }

        if(strcmp(user,username) == 0 && strcmp(pass,password) == 0){
            answ = 1;
        }else{
            puts("\nPlease enter a valid username or password");
        }
    }while(answ == 0);

    puts("\nLogin succesfully");

    return 0;
}
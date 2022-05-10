#include <stdio.h>
#include <ctype.h>

int main(){

    char answ;
    printf("Enter a character : ");
    scanf("%c",&answ);

    if(isalnum(answ) > 0){
        puts("Character is alphanumeric");
    }else{
        puts("Character is not alphanumeric");

    }

    if(isalpha(answ) > 0){
        puts("Character is an alphabet");
    }else{
        puts("Character is not an alphabet");

    }

    if(iscntrl(answ) > 0){
        puts("Character is  a control character");
    }else{
        puts("Character is not a control character");

    }

    if(islower(answ) > 0){
        puts("Character is in lowercase");
    }else{
        puts("Character is not in lowercase");

    }

    if(isprint(answ) > 0){
        puts("Character is printable");
    }else{
        puts("Character is not printable");
    }

    if(isdigit(answ) > 0){
        puts("Character is a digit");
    }else{
        puts("Character is not a digit");

    }

    if(ispunct(answ) > 0){
        puts("Character is punctuation character");
    }else{
        puts("Character is not a punctuation character");

    }

    if(isspace(answ) > 0){
        puts("Character is a white space");
    }else{
        puts("Character is not a white space");

    }

    if(isupper(answ) > 0){
        puts("Character is in uppercase");
    }else{
        puts("Character is not in uppercase");
    }

    if(isxdigit(answ) > 0){
        puts("Character is in hexadecimal digit");
    }else{
        puts("Character is not in hexadecimal digit");
    }

    return 0;
}
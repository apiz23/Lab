#include <stdio.h>

int main(){

    double side,area,answ;

    printf("Enter a side of the square :");
    scanf("%lf",&side);
    area = side*side;
    printf("Guess the area : ");
    scanf("%lf",&answ);

    while(answ != area){
        printf("Guess again : ");
        scanf(" %lf",&answ);
    }
    printf("Congrats Correct!!!");
}
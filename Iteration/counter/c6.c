#include <stdio.h>

int main(){
    float totalAreaSqu = 0,totalPeriRec = 0,square,recL,recW;

    for(int i = 0; i < 10; i++){
        printf("Enter a side of square[%d] : ",i+1);
        scanf("%f",&square);
        totalAreaSqu += square;
    }
    for(int i = 0; i < 5; i++){
        printf("Enter the length and width of rectangle [%d] by spacing : ",i+1);
        scanf("%f%f",&recL,&recW);
        totalPeriRec += 2*(recL+recW);
    }

    printf("Area of 10 square : %.2f",totalAreaSqu);
    printf("Area of 5 rectangle : %.2f",totalPeriRec);
}
#include <stdio.h>

int main(){

    float totalCom = 0,monthSale;

    /*for(int i = 0; i < 6; i++){
        printf("Enter the month %d monthly sales : ",i+1);
        scanf("%f",&monthSale);
        totalCom += (0.05*monthSale);
    }
    printf("Total Commission  : %.2f", totalCom);*/

    for(int i = 0; i < 6; i++){
        printf("Enter the month %d monthly sales : ",i+1);
        scanf("%f",&monthSale);
        if(monthSale < 1000){
            totalCom += (0.05*monthSale);
        }else if(monthSale < 3000){
            totalCom += (0.09*monthSale);
        }else{
            totalCom += (0.3*monthSale);
        }
    }
    printf("Total Commission  : %.2f", totalCom);
    
}
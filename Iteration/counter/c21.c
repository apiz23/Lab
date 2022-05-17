#include <stdio.h>

int main(){
    float price[4],totalPurchase;
    for(int i = 0; i < 4; i++){
        printf("Enter the price [%d] : ",i+1);
        scanf("%f", &price[i]);
        price[i] *= 0.07;
        totalPurchase += price[i];
    }
    printf("Total purchase of 4 items with 0.07 tax : %.2f",totalPurchase);
}
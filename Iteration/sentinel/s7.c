#include <stdio.h>

int main(){

    float money;
    do{
        printf("Enter the amount : ");
        scanf("%f",&money);
        if(money == -999){
            break;
        }else if((int)money % 20 != 0){
            printf("You must enter multiples of twenty only\n");
        }
        else{
            int countBill = money/20;
            printf("Number of twenty dollar : %d\n",countBill);
        }
    }while(money != -999);
    
    return 0;
}
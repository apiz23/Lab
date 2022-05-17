#include <stdio.h>

int main(){

    int numEgg,rem,dozenCount;
    do{
        printf("Enter the number of eggs : ");
        scanf("%d",&numEgg);
        dozenCount = numEgg/12;
        rem = numEgg%12;
        if(numEgg <= 0){
             break;
        }else if(rem == 0)
            printf("You have %d dozen eggs \n",dozenCount);
        else
            printf("You have %d dozen and %d eggs\n",dozenCount,rem);
        
    }while(numEgg > 0);
}
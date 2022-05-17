#include <stdio.h>

int main(){

    /*int num;
    for(int i = 0; i < 20; i++){
        printf("Enter the number[%d] : ",i+1);
        scanf("%d",&num);
        if(num % 2 == 1 && num % 3 == 0){
            printf("%d is Odd and Divisible by 3\n",num);
        }
        puts("");
    }*/

    int odd3[20];

    for(int i = 0; i < 20; i++){
        printf("Enter number: ");
        scanf(" %d",&odd3[i]);
    }
    for(int j = 0; j < 20; j++){
        if(odd3[j] % 2 == 1 && odd3[j] % 3 ==0){
            printf("%d\n",odd3[j]);
        }
    }
    return 0;
}
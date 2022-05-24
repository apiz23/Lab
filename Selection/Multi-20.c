#include <stdio.h>

int main(){
    
    int number[4];

    for(int i = 0; i < 4; i++){
        printf("Enter a number [%d]: ",i+1);
        scanf("%d",&number[i]);
    }

    int biggest = number[0], smallest = number[0];

    for(int i = 0; i < 4; i++){
        if(number[i] < smallest){
            smallest = number[i];
        }
        if(number[i] > biggest){
            biggest = number[i];
        }
    }

    printf("Biggest : %d, Smallest : %d",biggest,smallest);

    return 0;
    
    
}
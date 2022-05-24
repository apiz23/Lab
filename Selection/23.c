#include <stdio.h>

int main(){

    int num[3],smallest = 0, sum = 0;

    for(int i = 0; i < 3; i++){
        printf("Enter a numbers : ");
        scanf("%d",&num[i]);
    }
    
    if(num[0] < num[1] && num[0] < num[2])
    {
        sum += num[2] + num[1];
    }

    else if(num[1] < num[0] && num[1] < num[2])
    {
        sum += num[0] + num[2];
    }

    else if(num[2] < num[0] && num[2] < num[1])
    {
        sum += num[0] + num[1];
    }

    printf("Average of 2 high number : %.2f", (float)sum/2);

    return 0;
}
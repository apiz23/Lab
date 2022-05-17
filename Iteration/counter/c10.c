#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\nTable of multiple %d : \n",num);
    for(int i = 1; i <= 15; i++){
        printf("%d x %d = %d\n",i,num,i*num);
    }
    return 0;
}
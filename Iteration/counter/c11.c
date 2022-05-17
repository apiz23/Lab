#include <stdio.h>

int main(){
    
    int num,start,end;
    printf("Enter a number, the Starting and End value separate by spacing : ");
    scanf("%d%d%d", &num,&start,&end);
    printf("\nTable of multiple %d : \n",num);
    for(int i = start; i <= end; i++){
        printf("%d x %d = %d\n",i,num,i*num);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    printf("Squared number [2:20] : \n");
    for(int i = 2; i <= 20; i++){
        printf("%d = %.2lf\n",i,pow(i,2));
    }
    return 0;
}
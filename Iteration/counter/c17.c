#include <stdio.h>
#include <math.h>

int main(){
    printf("Area of circle (cm*cm) : \n");
    for(int i = 10; i <= 20; i++){
        printf("%d cm : %.2lf\n",i,M_PI*i*i);
    }
    return 0;
}
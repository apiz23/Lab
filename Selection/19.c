#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,X,Y,Z;
    printf("Enter a, b and c [Seperate by spacing] : ");
    scanf("%f%f%f", &a,&b,&c);

    if(a > b)
        X = 2*a + 2*b;
    else
        X = 2*pow(a,2) + pow(b,2);

    printf("Values of x = %.2f\n",X);
    
    if(c > b){
        Y = 2*a + 3*b;
        printf("Values of Y = %.2f",Y);
    }

    if(b == c){
        X = 2*a - 3*b;
        Y = a - b - c;
        Z = a + b*c;
        printf("X = %.2f\nY = %.2f\nZ = %.2f",X,Y,Z);
    }
    
    return 0;

}
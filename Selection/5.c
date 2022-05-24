#include <stdio.h>

int main(){

    float length,width;

    printf("Enter the length and width [seperate by spacing] : ");
    scanf("%f%f", &length,&width);

    printf("Area : %.2f\n", length*width);
    if(length == width){
        puts("Square not rectangle ");
    }

    return 0;
}
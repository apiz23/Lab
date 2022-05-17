#include <stdio.h>
#include <math.h>

int main(){

    double rad,area,perimeter,maxArea = 0 ,maxPeri = 0;

    for(int i = 0; i < 10; i++){
        printf("Enter the radius of circle %d : ",i+1);
        scanf("%lf",&rad);
        area = M_PI*rad*rad;
        perimeter = 2*rad*M_PI;
        if(perimeter > maxPeri && area > maxArea){
            maxArea = area;
            maxPeri = perimeter;
        }
    }
    printf("The Biggest Area of 10 circle : %.2lf cm*cm\n",maxArea);
    printf("The Biggest Perimeter of 10 circle : %.2lf cm\n",maxPeri);

}
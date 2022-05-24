#include <stdio.h>

int main(){

    double side1,side2,side3;

    printf("\nEnter the 1st, 2nd and 3th sides [seperate by spacing] : ");
    scanf("%lf %lf %lf",&side1,&side2,&side3);

    if(side1 == side2 && side2 == side3){
        printf("Type of triangle : Equilateral");
    }else if(side1 == side2 || side2 == side3 || side3 == side1){
        printf("Type of triangle : Isosceles");
    }else{
        printf("Type of triangle : Scalene");
    }

    return 0;
}
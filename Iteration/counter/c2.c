#include <stdio.h>
#include <math.h>

int main(){
    
    int num,countTri = 0;
    double area,s,a,b,c;

    printf("Enter the number of triangle : ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        printf("Enter the length of 3 side separate by spacing : ");
        scanf("%lf%lf%lf",&a,&b,&c);
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of triangle %d : %.2lf cm*cm\n",i+1,area);
        if(area > 100){countTri++;}
    }

    printf("Number of triangle that have area greater than 100 : %d",countTri);

}
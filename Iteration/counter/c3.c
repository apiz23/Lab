#include <stdio.h>

int main(){

    int numRec;
    double l,w,totalArea = 0 ,totalPeri = 0;

    printf("Enter the number of rectangle : ");
    scanf("%d", &numRec);

    for(int i = 0; i < numRec; i++){
        printf("Enter the length and width of Rectangle %d by spacing : ",i+1);
        scanf("%lf%lf",&l,&w);
        totalArea += l*w;
        totalPeri += 2*(l+w);
    }

    printf("The total Area of %d rectangle : %.2lf cm*cm\n",numRec,totalArea);
    printf("The total Perimeter of %d rectangle : %.2lf cm\n",numRec,totalPeri);

}
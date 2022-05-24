#include <stdio.h>
#include <ctype.h>
#include <math.h>

float circle(float r){
    return pow(r,2)*M_PI;
}

float rectangle(float l, float w){
    return l*w;
}

float triangle(float* s){
    return *s + (*(s+1)) + (*(s+2));
}

float cylinder(float* r, float* h){
    return M_PI * pow(*r,2) * (*h);
}

int main(){

    char answ;
    puts("\nchoice\t\tOperation");
    puts("");
    puts("C\t\tcalculate an area of a circle\nT\t\tcalculate a perimeter of a triangle");
    puts("R\t\tcalculate an area of a rectangle\nS\t\tcalculate a volume of a cylinder");
    puts("");

    printf("Enter ur choice : ");
    answ = getc(stdin);

    if(toupper(answ) == 'C'){
        float rad;
        printf("Enter the radius : ");
        scanf("%f",&rad);
        printf("Area of circle : %.2f",circle(rad));
    }else if(toupper(answ)  == 'R'){
        float length,width;
        printf("Enter the length : ");
        scanf("%f",&length);
        printf("Enter the width : ");
        scanf("%f",&width);
        printf("Area of rectangle : %.2f",rectangle(length,width));
    }else if(toupper(answ)  == 'T'){
        float side[3],perimeter;
        for(int i = 0; i < 3; i++){
            printf("Enter a side : ");
            scanf("%f",&side[i]);
        }
        printf("Perimeter of triangle : %.2f",triangle(side));
    }else if(toupper(answ) == 'S'){
        float rad,height;
        printf("Enter the radius : ");
        scanf("%f",&rad);
        printf("Enter the height : ");
        scanf("%f", &height);
        printf("Volume of cylinder : %.2f", cylinder(&rad,&height));
    }else{
        puts("Enter again based on the choice ! ");
    }

    return 0;
}


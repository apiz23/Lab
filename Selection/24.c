#include <stdio.h>

int main(){

    float temperatureF;

    printf("Enter a temperature [Fahrenheit] :");
    scanf("%f",&temperatureF);

    if(temperatureF >= 80){
        printf("Go play golf ";
    }else if(temperatureF >= 70){
        printf("Put on a jacket");
    }else{
        printf("It is way too cold");
    }
    return 0;
}
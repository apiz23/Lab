//22.Program that count and display the number of male and female students in a class of 30. 

#include <stdio.h>
#include <string.h>
#define max 10

int main(){

    int gendAns,countMale = 0, countFemale = 0;

    int i = 0;
    while(i < 3){
        printf("Enter whether student[%d] is male or female [1 : male, 2 : female] = ",i+1);
        scanf("%d",&gendAns);
        if(gendAns == 1){
            countMale++;
        }else if(gendAns == 2){
            countFemale++;
        }else{
            puts("Enter either 1 or 2 only");
            continue;
        }i++;
    }
    printf("Male : Female = %d : %d ", countMale, countFemale);

    return 0;
}
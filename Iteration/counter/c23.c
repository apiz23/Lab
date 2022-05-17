#include <stdio.h>

int main(){

    float quiz,test,project,carryMark;

    for(int i = 0; i < 2; i++){
        printf("Enter the quiz mark : ");
        scanf("%f",&quiz);
    
        printf("Enter the test mark : ");
        scanf("%f",&test);

        printf("Enter the project mark : ");
        scanf("%f",&project);

        carryMark = (0.06*quiz) + (0.14*test) + (0.4*project);
        printf("The carry mark for student %d : %.2f\n",i+1,carryMark);
    }
}
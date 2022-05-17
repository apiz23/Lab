#include <stdio.h>

int main(){

    float score,sumScore;
    for(int i = 0; i < 10; i++){
        printf("Enter the score for exam %d : ",i+1);
        scanf("%f",&score);
        sumScore += score;
    }
    printf("Average Score Exam by user : %.2f",sumScore/10);
}
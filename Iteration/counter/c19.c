#include <stdio.h>

int main(){

    int numScore;
    float score,sumScore;
    printf("Enter the number of exam scores : ");
    scanf("%d",&numScore);
    for(int i = 0; i < numScore; i++){
        printf("Enter the score for exam %d : ",i+1);
        scanf("%f",&score);
        sumScore += score;
    }
    printf("Average Score Exam by user : %.2f",sumScore/numScore);
}
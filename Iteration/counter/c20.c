#include <stdio.h>

int main(){

    int noPass = 0, noFail = 0;
    double score, sumScore = 0;

    for(int i = 0; i < 10; i++){
        printf("Enter the Exam Score %d : ",i+1);
        scanf("%lf", &score);
        sumScore += score;
        if(score >= 60){
            noPass++;
        }else{
            noFail++;
        }
    }
    printf("The Average Exam Score : %.2lf\n",sumScore/10);
    printf("Number of Score that Pass : Fail = %d : %d ",noPass,noFail);
}
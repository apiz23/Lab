#include <stdio.h>
#define max 2

int main(){

    double markStd[max];
    int checking,countGrade[] = {0,0,0,0,0,0,0,0,0,0,0},totalAchievement[] = {0,0,0,0,0};
    char grade[][3] = {"A+","A","A-","B+","B","B-","C+","C","C-","D","E"};
    char achievement[][20] = {"Excellent","Good","Satisfactory","Weak","Fail"};

    for(int i = 0; i < max; i++){
        do{
            printf("Student [%d]\n",i+1);
            printf("Enter the marks : ");
            checking = scanf("%lf", &markStd[i]);
            fflush(stdin);
            if(checking != 1 || markStd[i] < 0 || markStd[i] > 100){
                puts("\nPlease enter a valid MARK! ");
                puts(" "); 
                fflush(stdin);
            }
        }while(checking != 1 || markStd[i] < 0 || markStd[i] > 100);
    }

    puts("\n--------------------------------------------------");
    puts("Student \tMark \tGrade \tAchievement Level");
    puts("--------------------------------------------------");
    for(int i = 0,j,k; i < max; i++){
        if(markStd[i] >= 85){
            j = 0,k = 0,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 80){
            j = 1,k = 0,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 75){
            j = 2,k = 0,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 70){
            j = 3,k = 1,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 65){
            j = 4,k = 1,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 60){
            j = 5,k = 1,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 55){
            j = 6,k = 2,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 50){
            j = 7,k = 2,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 45){
            j = 8,k = 2,countGrade[j]++,totalAchievement[k]++;
        }else if(markStd[i] >= 40){
            j = 9,k = 3,countGrade[j]++,totalAchievement[k]++;
        }else{
            j = 10,k = 4,countGrade[j]++,totalAchievement[k]++;
        }printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[j],achievement[k]);
    }

    puts("\n--------------------------------------------------");
    puts("Grade \tFrequency \tAchievement \tFrequency");
    puts("--------------------------------------------------");
    for(int i = 0; i < 11; i++){
        if(i == 0 || i == 2){printf("%s \t %d \t\t %s\t %d\n",grade[i],countGrade[i],achievement[i],totalAchievement[i]);}
        else if(i < 5){printf("%s \t %d \t\t %s\t \t %d\n",grade[i],countGrade[i],achievement[i],totalAchievement[i]);}
        else{printf("%s \t %d\n",grade[i],countGrade[i]);}
    }
    return 0;
}

#include <stdio.h>
#define max 182

int main(){

    int checking,countGrade[] = {0,0,0,0,0,0,0,0,0,0,0},totalAchievement[] = {0,0,0,0,0};
    double markStd[max];
    char grade[][3] = {"A+","A","A-","B+","B","B-","C+","C","C-","D","E"},achievement[][20] = {"Excellent","Good","Satisfactory","Weak","Fail"};

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
    for(int i = 0; i < max; i++){
        if(markStd[i] >= 85){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[0],achievement[0]);countGrade[0]++;}
        else if(markStd[i] >= 80){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[1],achievement[0]);countGrade[1]++;}
        else if(markStd[i] >= 75){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[2],achievement[0]);countGrade[2]++;}
        else if(markStd[i] >= 70){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[3],achievement[1]);countGrade[3]++;}
        else if(markStd[i] >= 65){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[4],achievement[1]);countGrade[4]++;}
        else if(markStd[i] >= 60){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[5],achievement[1]);countGrade[5]++;}
        else if(markStd[i] >= 55){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[6],achievement[2]);countGrade[6]++;}
        else if(markStd[i] >= 50){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[7],achievement[2]);countGrade[7]++;}
        else if(markStd[i] >= 45){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[8],achievement[2]);countGrade[8]++;}
        else if(markStd[i] >= 40){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[9],achievement[3]);countGrade[9]++;}
        else{printf("%d \t\t%.2lf \t %s \t %s\n",i+1, markStd[i],grade[10],achievement[4]);countGrade[10]++;}
    }

    totalAchievement[0] = countGrade[0] + countGrade[1] + countGrade[2],totalAchievement[1] = countGrade[3] + countGrade[4] + countGrade[5]; 
    totalAchievement[2] = countGrade[6] + countGrade[7] + countGrade[8],totalAchievement[3] = countGrade[9],totalAchievement[4] = countGrade[10];

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

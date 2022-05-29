#include <stdio.h>
#define max 182
#define totalAchievement t_A

int main(){

    int checking,countGrade[11] = {0,0,0,0,0,0,0,0,0,0,0},t_A[] = {0,0,0,0,0};
    double student_mark[max];
    char grade[11][3] = {"A+","A","A-","B+","B","B-","C+","C","C-","D","E"},achievement[6][20] = {"Excellent","Good","Satisfactory","Weak","Fail"};

    for(int i = 0; i < max; i++){
        do{
            printf("Student [%d]\n",i+1);
            printf("Enter the marks : ");
            checking = scanf("%lf", &student_mark[i]);
            fflush(stdin);
            if(checking != 1 || student_mark[i] < 0 || student_mark[i] > 100){
                puts("\nPlease enter a valid MARK! ");
                puts(" "); 
                fflush(stdin);
            }
        }while(checking != 1 || student_mark[i] < 0 || student_mark[i] > 100);
    }
    puts("\n--------------------------------------------------");
    puts("Student \tMark \tGrade \tAchievement Level");
    puts("--------------------------------------------------");
    for(int i = 0; i < max; i++){
        if(student_mark[i] >= 85){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[0],achievement[0]);countGrade[0]++;}
        else if(student_mark[i] >= 80){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[1],achievement[0]);countGrade[1]++;}
        else if(student_mark[i] >= 75){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[2],achievement[0]);countGrade[2]++;}
        else if(student_mark[i] >= 70){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[3],achievement[1]);countGrade[3]++;}
        else if(student_mark[i] >= 65){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[4],achievement[1]);countGrade[4]++;}
        else if(student_mark[i] >= 60){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[5],achievement[1]);countGrade[5]++;}
        else if(student_mark[i] >= 55){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[6],achievement[2]);countGrade[6]++;}
        else if(student_mark[i] >= 50){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[7],achievement[2]);countGrade[7]++;}
        else if(student_mark[i] >= 45){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[8],achievement[2]);countGrade[8]++;}
        else if(student_mark[i] >= 40){printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[9],achievement[3]);countGrade[9]++;}
        else{printf("%d \t\t%.2lf \t %s \t %s\n",i+1, student_mark[i],grade[10],achievement[4]);countGrade[10]++;}
    }

    t_A[0] = countGrade[0] + countGrade[1] + countGrade[2],t_A[1] = countGrade[3] + countGrade[4] + countGrade[5]; 
    t_A[2] = countGrade[6] + countGrade[7] + countGrade[8],t_A[3] = countGrade[9],t_A[4] = countGrade[10];

    puts("\n--------------------------------------------------");
    puts("Grade \tFrequency \tAchievement \tFrequency");
    puts("--------------------------------------------------");
    for(int i = 0; i < 11; i++){
        if(i == 0 || i == 2){printf("%s \t %d \t\t %s\t %d\n",grade[i],countGrade[i],achievement[i],t_A[i]);}
        else if(i < 5){printf("%s \t %d \t\t %s\t \t %d\n",grade[i],countGrade[i],achievement[i],t_A[i]);}
        else{printf("%s \t %d\n",grade[i],countGrade[i]);}
    }
    return 0;
}

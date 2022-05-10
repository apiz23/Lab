#include <stdio.h>
#include <string.h>
#define max 100

int main(){

    char first[max],last[max],temp1[max],temp2[max];
    
    printf("\nEnter your first name : ");
    scanf("%s",first);
    printf("Enter your last name : ");
    scanf("%s",last);

    //printf("a. %s\n", strcpy(first,last));
    strcpy(temp1, first);
    strcpy(temp2, last);
    printf("a. Copies last name to first name : %s %s\n", temp1,temp2);

    printf("b. Copies the first character of first name and last name : %s\n",strncpy(last,first,1));   

    if(strcmp(first,last) > 0){
        printf("c. The ASCII for first name is bigger than last name : %d\n",strcmp(first,last));
    }else if(strcmp(first,last) == 0){
        printf("c. The ASCII for first name and last name is Equal : %d\n",strcmp(first,last));
    }else{
        printf("c .The ASCII for first name is smaller than last name : %d\n",strcmp(first,last));
    }

    printf("d. Length of the first name : %d\n", strlen(first));
    printf("d. Length of the last name : %d\n",strlen(last));

    printf("e. Full Name : %s\n", strcat(first,last));

    printf("f. %s\n", strlwr(temp1));

    printf("g. %s\n", strupr(last));

    return 0;
}
#include <stdio.h>
#include <math.h>

int longTerm(int a){
    //check hour in a DAY
    if(a <= 24)
        return a <= 5? a * 2: 11;
        
    //check for one WEEK or less
    else if(a <= 168){
        if(a <= 122 && a%24 <= 5)
            return (a/24)*11 + (a%24)*2;
        else if (a%24 >= 6)
            return ((a/24)+1)*11;
	else
	    return 60;
    }
    //more than one WEEK
    else if(a%24 == 1 || a%24 == 2)
        return 60 + (a/24-7)*4 + (a%24)*2;
    else if(a%24 == 0)
        return 60 + (a/24-7)*4;
    else
        return 60 + (a/24-6)*4;
}

float shortTerm(float b){

    //less than 1 hour
    if(b < 1){
        if(b <= ((float)1/3))
            return 0; 
    	else if(b <= (float)2/3)
            return 2;
        else
            return 3;
    }
    // less than 7 hour
    else if(b <= 6)
        return  ceil(b)*3;
        
    //more than ONE day
    else if((int)ceil(b)%24 == 0)
        return (b/24)*18;
    else if((int)ceil(b)%24 <= 6)
        return ((int)b/24)*18 + (int)ceil(b)%24*3;
    else
        return ((int)ceil(b/24))*18;
}

int main(){

    float hours;
    int checking;
    //input validation
    do{
        printf("Enter hours parked : ");
        checking = scanf("%f",&hours);
        fflush(stdin);
        if(checking != 1)
            puts("\nPlease enter a valid number !");
        else if(hours < 0)
            puts("\nPlease enter a valid hours !");
    }while(checking != 1 || hours < 0);

    puts("");
    printf("Long term parking: $ %d\nShort term parking: $ %.f",longTerm(ceil(hours)),shortTerm(hours));
    return 0;
}

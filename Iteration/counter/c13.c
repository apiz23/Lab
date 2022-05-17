#include <stdio.h>

int main(){
    puts("\nTable of multiple 13 : ");
    for(int i = 1; i <= 13; i++){
        puts("");
        printf("%d.\n",i);
        for(int i = 1; i <= 10; i++){
        printf("%d x 13 = %d\n",i,i*13);
        }
    }
}
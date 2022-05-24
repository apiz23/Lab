#include <stdio.h>

int main(){
	
	int month;
	
	printf("Enter month in number : ");
	scanf("%d", &month);
	
	switch(month){
		
		case 1 :
			printf("Month : January");
			break;
		case 2:
			printf("Month : February");
			break;
		case 3:
			printf("Month : March");
			break;
		case 4:
			printf("Month : April");
			break;
		case 5:
			printf("Month : May");
			break;
		case 6:
			printf("Month : June");
			break;
		case 7:
			printf("Month : July");
			break;
		case 8:
			printf("Month : August");
			break;
		case 9:
			printf("Month : September");
			break;
		case 10:
			printf("Month : October");
			break;
		case 11:
			printf("Month : November");
			break;
		case 12:
			printf("Month : December");
			break;
		default:
			puts("Invalid number !");
			break;
	}
	
	return 0;
}

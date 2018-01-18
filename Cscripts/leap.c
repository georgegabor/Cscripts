#include <stdio.h>

int main(){
	
	printf("%s", "Enter year : " );
	long year = getchar();
	if((year%4==0 && year%100!=0) || year%400==0)
		printf("%d is a leap year\n", year );
	else
		printf("%d isn\'t a leap year\n", year);
}
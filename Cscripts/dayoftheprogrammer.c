#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/* If between 1700-1917 leap years %4==0
	if 1918 use year1918
	if between 1919-2700 leap years %400==0 || (%4==0 && %100!=0) 

int main(int argc, char const *argv[])
{
	int year=2017;
	int normalyear[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int leapyear[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year1918[]={31,15,31,30,31,30,31,31,30,31,30,31};
	if(year<1918) */
char* solve(int year)
{
	char* result;
	if(year>1918)
	{
		if((year%400==0) || (year%4==0 && year%100!=0)) result="12.09.";
		else result="13.09.";
	}
	else if (year<1918)
	{
		if( year%4==0 ) result="12.09.";
		else result="13.09.";
	}
	else result="26.09.";
	return result;
}

int main() {
    int year; 
    scanf("%d", &year);
    assert(year>=1700 && year<=2700);
    int result_size;
    char* result = solve(year);
    printf("%s%d\n", result,year);
    return 0;
}
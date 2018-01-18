#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h> 
/*
char* timeConversion(char* s) {
    // Complete this function
	char* result=malloc(sizeof(int)*3);    
	char* p="PM";
	char* hh=malloc(sizeof(int));
	char* mm=malloc(sizeof(int));
	char* ss=malloc(sizeof(int));
	int i=0;
	
	strncpy(hh,s,2);
	strncpy(mm,s+3,2);
	strncpy(ss,s+6,2);

	if(strstr(s,p)==0){
		sprintf(result,"%s:%s:%s",hh,mm,ss);
		return result;
	}
	else{
		i=atoi(hh)+12;
			if(i==24)i=0;
		sprintf(hh,"%d",i);
		sprintf(result,"%s:%s:%s",hh,mm,ss);
		return result;
	}
} */

int main() {
    char* s ="06:09:11PM" ;
    char* hh=malloc(sizeof(int));
	char* mm=malloc(sizeof(int));
	char* ss=malloc(sizeof(int));

	strncpy(hh,s,2);
	strncpy(mm,s+3,2);
	strncpy(ss,s+6,2);
	printf("%s:%s:%s\n", hh,mm,ss);
    return 0;
}
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

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
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
	int result_size;
	char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
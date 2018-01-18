#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* result=malloc(sizeof(char)*3);  
	char* s="06:11:00PM";
	char* p="PM";
	char* hh=malloc(sizeof(char));
	char* mm=malloc(sizeof(char));
	char* ss=malloc(sizeof(char));
	int i=0;
	char* t=malloc(sizeof(char));
	strncpy(hh,s,2);
	strncpy(mm,s+3,2);
	strncpy(ss,s+6,2);
	if(strstr(s,p)==0)
		puts(s);
	else{
		i=atoi(hh)+12;
			if(i==24)i=0;

		sprintf(hh,"%d",i);
		sprintf(result,"%s:%s:%s",hh,mm,ss);
		printf("%s",result);
	}
	return 0;
}

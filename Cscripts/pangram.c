#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    char s[1000];   
    fgets(s,1000,stdin);
	for(int i=0; s[i]!='\0';i++)
    s[i]=tolower(s[i]);
	int counter=0;
	for(int a=97;a<=122;a++)
	    { 
	    	for(int i=0; s[i]!='\0';i++)
	        	if((int)s[i]==a) 
	        		{
	        			counter++;
	        		 	break;
	        		} 

	    }
	if(counter==26) puts("pangram");
	else puts("not pangram");
    return 0;
}

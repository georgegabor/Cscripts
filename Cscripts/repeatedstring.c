#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int repeatedString(char* s, long int n) 
{
	long int result;
	long int count=0;
	long int countstring=0;
	long int len=strlen(s);
	long int m=n/len;
	long int rem=n%len;
	if(len==1)
	{
		if(s[0]=='a')result=n;
		else result=0;
	}
	else
	{
		for (long int i=0 ; i < len; ++i)
		{
			if(s[i]=='a')
				{
					countstring++;
				}
		}
		for (long int i = 0; i < rem; ++i)
			{
				if(s[i]=='a')
				{
					count++;
				}
			}
	result=countstring*m+count;
	}	
	return result;		
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    long int n; 
    scanf("%li", &n);
    long int result = repeatedString(s, n);
    printf("%ld\n", result);
    return 0;
}

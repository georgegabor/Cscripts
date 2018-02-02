#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int marsExploration(char* s) 
{
	int count=0;
	int j=0;
	int len=strlen(s);
	int mul=len%3;
	char mes[4]="SOS";
	for(int i=0; i<len; )
	{
		if(j==3)
		{
			j=0;
			
		}
		else if(mes[j]!=s[i])
		{
			// printf("mes[%d]=%c   s[%d]=%c\n",j,mes[j],i,s[i] );
			count++;
			j++;
			i++;
		}
		else 
			{
				i++;
				j++;
			}

	}
	return count;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = marsExploration(s);
    printf("%d\n", result);
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* super_reduced_string(char* s)
{
	char* result=(char *)malloc(512000 * sizeof(char));
	int m=strlen(s);
	int j=0;
	int count=0;
	for (int i = 0; s[i] !='\0' ; ++i)
	{
		if(s[i]==s[i+1])
		{
			i++;
			count++;
		}
		else if(s[i]!=s[i+1])
		{
			// printf("%c %c\n",s[i],s[i+1] );
			result[j]=s[i];
			j++;
			
		}
	}
	if(count!=0)super_reduced_string(result);
	else 
		{
			if(strlen(result)==0)
			{
				strcpy(result,"Empty String");
			}
			return result;
		}
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = super_reduced_string(s);
    printf("%s\n", result);
    free(s);
    return 0;
}

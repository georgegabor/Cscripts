#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>

int camelcase(char* s) 
{
	int count=1;
	for (int i = 0; s[i]!='\0'; ++i)
	{
		if(isupper(s[i]))
			{
				count++;
			}
	}
	return count;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = camelcase(s);
    printf("%d\n", result);
    return 0;
}

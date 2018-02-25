#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void encryption(char* s) 
{
	// variables for ceiling and floor
	int row=floor(sqrt(strlen(s)));
	int column=ceil(sqrt(strlen(s)));
	printf("%d %d\n",row,column );
	// do the loop without array, simply by getting the indices right 
	for (int i = 0; i < column; ++i)
	{
		for (int j = i; j < strlen(s) ; j+=column)
		{
			printf("%c",s[j] );
		}
		printf(" ");
	}
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
	encryption(s);
    return 0;
}

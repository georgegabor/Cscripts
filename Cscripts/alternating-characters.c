#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int alternatingCharacters(char* s)
{
	int count=0;
	for (int i = 0; s[i] !='\0' ; ++i)
	{
		for (int j = i+1; s[j]!='\0' ; ++j)
			{
			if(s[i]==s[j])
			{
				// printf("s[%d]=%c s[%d]=%c \n",i,s[i],j,s[j] );
				count++;
				i++;
			}
			else break;
		}
	}
	return count;
		
}

int main() {
    int q; 
    scanf("%i", &q);
    assert(q>=1 && q<=10);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int m=strlen(s);
	    assert(m>=1 && q<=100000);
        int result = alternatingCharacters(s);
        printf("%d\n", result);
    }
    return 0;
}

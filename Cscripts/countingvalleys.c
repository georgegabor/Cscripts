#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int countingValleys(int n, char* s)
 {
 	int counter=0;
 	int total=0;
 	for (int i = 0; i < n; i++) 
 	{
            char c = 'U';
            if (c==s[i]) counter++;
            else
            {
            	counter--;
                if (counter == -1) total++;
			}
    }
	return total;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=2 && n<=1000000);
    char* s = (char *)malloc(512000 * sizeof(int));
    scanf("%s", s);
    int result = countingValleys(n, s);
    printf("%d\n", result);
    return 0;
}
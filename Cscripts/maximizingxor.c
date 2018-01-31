#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int maximizingXor(int l, int r) 
{
	int i=l;
	int max=0;
	for (; i <= r; ++i)
	{
		for (int j = i; j <= r; ++j)
			{
				if((i^j)>max)max=i^j;
			}
	}
	return max;
}

int main() {
    int l; 
    scanf("%i", &l);
    assert(l>=1 && l<=1000);
    int r; 
    scanf("%i", &r);
    assert(r>=1 && r<=1000);
    int result = maximizingXor(l, r);
    printf("%d\n", result);
    return 0;
}

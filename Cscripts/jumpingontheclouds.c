#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int jumpingOnClouds(int c_size, int* c) 
{
    int count=0;
    int i=0;
    while(i<c_size-1)
    {
        if(c[i+2]==0)
        {
            count++;
            i+=2;
            printf("If: count=%d i=%d\n",count,i );
        }
        else
           {
            count++;
            i++;
            printf("Else: count=%d i=%d\n",count,i );
           } 
    }
    printf("count at the end=%d\n",count );
    return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=2 && n<=100);
    int *c = malloc(sizeof(int) * n);
    for (int c_i = 0; c_i < n; c_i++) {
       scanf("%i",&c[c_i]);
        assert(c[c_i]>=0 && c[c_i]<=1);
        assert(c[0]==0 && c[n-1]==0);
    }
    int result = jumpingOnClouds(n, c);
    printf("%d\n", result);
    return 0;
}

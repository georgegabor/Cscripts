#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int flatlandSpaceStations(int n, int c_size, int* c) 
{
    int max=0;
    int max1=0;
    int max2=0;
    qsort(c,c_size,sizeof(int),cmpfunc);
    if(n==c_size)max=0;
    else
    {
        for (int i = 0; i < c_size-1; ++i)
        {
            if(c[i+1]-c[i]>max1)
                {
                    max1=c[i+1]-c[i];
                }    
        }
        // printf("max1=%d\n",max1 );
        max=max1+/2;
        if((n-1)-c[c_size-1]>max)
            {
                max=(n-1)-c[c_size-1];
                // printf("if1 max=%d\n",max );
            }
        if(c[0]>max)
        {
            max=c[0]; 
           // printf("if2 max=%d\n",max );
        }
    }
 return max;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *c = malloc(sizeof(int) * m);
    for (int c_i = 0; c_i < m; c_i++) {
       scanf("%i",&c[c_i]);
    }
    int result = flatlandSpaceStations(n, m, c);
    printf("%d\n", result);
    return 0;
}

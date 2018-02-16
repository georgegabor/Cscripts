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

void stones(int n, int a, int b) 
{
    int* result=malloc(sizeof(int)*n);
    for (int i = n-1; i >=0 ; --i)
    {
        int total=0;
        total=(i*a)+((n-i-1)*b);
        result[n-i-1]=total;
    }
    qsort(result,n,sizeof(int),cmpfunc);
    printf("%d ",result[0] );
    for (int i = 1; i < n; ++i)
    {
        if(result[i]!=result[i-1])printf("%d ",result[i] );
    }
}

int main() {
    int T; 
    scanf("%i", &T);
    for(int a0 = 0; a0 < T; a0++){
        int n; 
        scanf("%i", &n);
        int a; 
        scanf("%i", &a);
        int b; 
        scanf("%i", &b);
        stones(n, a, b);
        printf("\n");
    }
    return 0;
}

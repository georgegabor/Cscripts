#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int bonAppetit(int n, int k, int b, int ar_size, int* ar) 
{
    
    int sum=0;
    for (int i = 0; i < ar_size; ++i)
    {
        sum+=ar[i];
    }
    assert(b>=0 && b<=sum);

    int sumAnna=(sum-ar[k])/2;
    int result=((sumAnna-b)==0) ? 0 : abs(sumAnna-b);

return result;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    assert(n>=2 && n<=100000);
    assert(k>=0 && k<n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
        assert(ar[ar_i]>=0 && ar[ar_i]<=10000);

    }
    int b; 
    scanf("%i", &b);
    int result = bonAppetit(n, k, b, n, ar);
    if (result==0)printf("%s\n","Bon Appetit" );
    else printf("%d\n", result);
    free(ar);
    return 0;
}

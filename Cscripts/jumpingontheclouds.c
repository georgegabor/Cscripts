#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int jumpingOnClouds(int c_size, int* c, int k) 
{
    int e=100;
    for (int i = 0; i < c_size; i+=k)
    {
        (c[i]==0)?(e-=1):(e-=3);

    }
    return e;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    assert(n>=2 && n<=25);
    assert(k>=1 && k<=n);
    assert(n%k==0);
    int *c = malloc(sizeof(int) * n);
    for (int c_i = 0; c_i < n; c_i++) {
       scanf("%i",&c[c_i]);
       assert(c[c_i]==0 || c[c_i]==1);
    }
    int result = jumpingOnClouds(n, c, k);
    printf("%d\n", result);
    free(c);
    return 0;
}

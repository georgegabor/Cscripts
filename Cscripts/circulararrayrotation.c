#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT(x) assert(x>=1 && n<=100000)

int* circularArrayRotation(int a_size, int* a, int m_size, int* m,int k) 
{
    int* res=malloc(sizeof(int)*m_size);
    int mod=k%a_size;
    int startidx=a_size-mod;
    for(int i=0;i<m_size;i++)
    {
        res[i]=a[(m[i]+startidx)%a_size];
    }
    
    return res;
}

int main() {
    int n; 
    int k; 
    int q; 
    scanf("%i %i %i", &n, &k, &q);
    ASSERT(n);
    ASSERT(k);
    assert(q>=1 && q<=500);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
       ASSERT(a[a_i]);
    }
    int *m = malloc(sizeof(int) * q);
    for (int m_i = 0; m_i < q; m_i++) {
       scanf("%i",&m[m_i]);
       assert(m[m_i]>=0 && m[m_i]<=n-1);
    }
    int* result = circularArrayRotation(n, a, q, m,k);
    for(int result_i = 0; result_i < q; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    free(a);
    free(m);
    free(result);
    return 0;
}

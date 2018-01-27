#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* permutationEquation(int p_size, int* p, int *result_size) 
{
    int count=0;
    int* result=malloc(sizeof(int)*p_size);
    for (int i = 1; i <= p_size; ++i)
    {
        for (int j = 0; j < p_size; ++j)
        {
            /*printf("i=%d j=%d\n",i,j );*/
            if(i==p[j])
            {
                /*printf("i=%d j=%d p[j]=%d \n",i,j,p[j] );*/
                for (int k = 0; k < p_size; ++k)
                {
                    if((j+1)==p[k])
                    {
                        result[i-1]=k+1;
                        count++;    
                        /*printf("i=%d j=%d count=%d k=%d p[k]=%d\n",i,j,count,k,p[k] );*/
                    }
                }
            }
        }
    }
    *result_size=count;
    /*printf("result_size=%d count=%d\n",*result_size,count );*/
    return result_size, result;
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=50);
    int *p = malloc(sizeof(int) * n);
    for (int p_i = 0; p_i < n; p_i++) {
       scanf("%i",&p[p_i]);
        assert(p[p_i]>=1 && p[p_i]<=50 && p[p_i]<=n);
    }
    int result_size;
    int* result = permutationEquation(n, p, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}

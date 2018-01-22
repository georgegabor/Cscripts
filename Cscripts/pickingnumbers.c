#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int pickingNumbers(int a_size, int* a)
{
    int numbers[100]={0};
    int max=0;
    int maxN=0;
    for (int i = 0; i < a_size; ++i)
    {
        numbers[a[i]]++;
        if(a[i]>max)max=a[i];
    }
        for (int i = 0; i <= max; ++i)
    {
        int sum=numbers[i]+numbers[i+1];
            if(sum>maxN)maxN=sum;
            printf("maxN=%d sum=%d\n",maxN, sum );
    }
    return maxN;
}

int main()
{
    int n; 
    scanf("%i", &n);
    assert(n>=2 && n<=100);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) 
    {
       scanf("%i",&a[a_i]);
       assert(a[a_i]>0 && a[a_i]<100);
    }
    int result = pickingNumbers(n, a);
    printf("%d\n", result);
    free(a);
    return 0;
}

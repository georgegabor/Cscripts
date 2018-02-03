#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

void marcsCakewalk(int calorie_size, int* calorie) 
{
    unsigned long long int result;
    unsigned long long int sum=0;;
    qsort(calorie,calorie_size,sizeof(int),cmpfunc);
    for (int i = 0; i <calorie_size; ++i)
    {
        sum+=(unsigned long long int)(calorie[i]*pow(2.0,i));
    }
    printf("%lld\n",sum );
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=40);
    int *calorie = malloc(sizeof(int) * n);
    for (int calorie_i = 0; calorie_i < n; calorie_i++) {
       scanf("%i",&calorie[calorie_i]);
        assert(calorie[calorie_i]>=1 && calorie[calorie_i]<=1000);
    }
    marcsCakewalk(n, calorie);
    return 0;
}

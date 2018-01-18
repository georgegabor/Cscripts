#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long int min,max,sum=0;
    unsigned long long int *arr = malloc(sizeof(unsigned long long int) * 5);
    scanf("%lld",&arr[0]);
    sum=arr[0]+sum;
    min=arr[0];
    max=arr[0]; 
    for(int i = 1; i < 5; i++){
       scanf("%lld",&arr[i]);
        sum=sum+arr[i];
        if(arr[i]<=min)min=arr[i];
        if(arr[i]>max)max=arr[i];
    }
    printf("%lld %lld ", sum-max,sum-min);
    return 0;
}
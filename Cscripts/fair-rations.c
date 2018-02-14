#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int N; 
    int sum=0;
    int count=0;
    scanf("%i", &N);
    int *B = malloc(sizeof(int) * N);
    for (int B_i = 0; B_i < N; B_i++) {
       scanf("%i",&B[B_i]);
       sum+=B[B_i];
       if(sum%2==1)count+=2;
    }
    (sum%2==0)?printf("%d\n",count ):puts("NO");
    return 0;
}

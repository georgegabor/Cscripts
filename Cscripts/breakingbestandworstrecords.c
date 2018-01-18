#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* breakingRecords(int score_size, int* score, int *result_size) {
    int *result=malloc(sizeof(int)*(*result_size));
    int min=score[0];
    int max=score[0];
    int countermin=0;
    int countermax=0;

    for (int i = 1; i < score_size; ++i)
    {
        int current=score[i];
        printf("\nmin = %2d max = %2d current = %2d\n",min,max,current );
        if(current>max)
        {
            max=current;
            countermax++;
            printf("max = %2d countermax = %2d\n",max,countermax );
        }
        else if(current<min)
        {
            min=current;
            countermin++;
            printf("min = %2d countermin = %2d\n",min,countermin );
        }
    }
    result[0]=countermax;
    result[1]=countermin;
return result;
}

int main() {
    int n=9; 
    scanf("%i", &n);
    assert(n>=1 && n<=1000);
    int *score = malloc(sizeof(int) * n);
    for (int score_i = 0; score_i < n; score_i++) {
       scanf("%i",&score[score_i]);
       assert(score[score_i]>=0 && score[score_i]<=100000000);
    }
    int result_size=2;
    int* result = breakingRecords(n, score, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}

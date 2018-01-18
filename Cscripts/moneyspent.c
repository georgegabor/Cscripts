#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int s; 
    int n; 
    int m; 
    scanf("%d %d %d", &s, &n, &m);
    assert(s>=1 && s<=1000000);
    assert(n>=1 && n<=1000);
    assert(m>=1 && m<=1000);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *drives = malloc(sizeof(int) * m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       scanf("%d",&drives[drives_i]);
    }
    printf("\n");
    int currentprice = 0;
    int currentmax = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            currentprice=keyboards[i]+drives[j];
            if(currentprice<=s && currentprice>currentmax)currentmax=currentprice;
            printf("Currentprice: %d Currentmax: %d\n", currentprice, currentmax);
        }
    printf("\n");
    }
    printf("Currentprice: %d Currentmax: %d\n", currentprice, currentmax);
    (currentmax == 0)? puts("-1") : printf("%d\n", currentmax );
    printf("\n");
    free(keyboards);
    free(drives);
    return 0;
}
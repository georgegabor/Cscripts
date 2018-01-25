#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* angryProfessor(int k, int a_size, int* a) 
{
    int count=0;
    char* result=malloc(sizeof(int)*4);
    for (int i = 0; i < a_size; ++i)
    {
        if(a[i]<=0)count++;
    }
    (count<k)?strcpy(result,"YES"):strcpy(result,"NO");
    return result;
}

int main() {
    int t; 
    scanf("%i", &t);
    assert(t>=1 && t<=10);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%i %i", &n, &k);
        assert(n>=1 && t<=1000);
        assert(k>=1 && k<=n);

        int *a = malloc(sizeof(int) * n);
        for (int a_i = 0; a_i < n; a_i++) {
           scanf("%i",&a[a_i]);
            assert(a[a_i]>=-100 && a[a_i]<=100);

        }
        int result_size;
        char* result = angryProfessor(k, n, a);
        printf("%s\n", result);
    }
    return 0;
}

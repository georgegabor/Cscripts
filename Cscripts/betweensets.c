#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ASSERT1(x)  assert(x>=1 && x<=10);
#define ASSERT2(x)  assert(x>=1 && x<=100);

int getTotalX(int a_size, int* a, int b_size, int* b) 
    {
        int result;
        int count3=0;
        for (int i = 1; i <= 100; ++i)
        {
            int count1=0;
            printf("\x1b[31m" "\ni=%d\n" "\x1b[0m", i);
            printf("count1=%d\n",count1);
            for (int j = 0; j < a_size; ++j)
            {                            
                printf("j=%d count1=%d\n",j,count1);
                if(i%a[j]==0)
                {                
                    int count2=0;
                    count1++;
                    printf("a[j]=%d count1=%d count2=%d\n",a[j],count1,count2);
                    if(count1==a_size)
                    {
                        for (int z = 0; z < b_size; ++z)
                        {
                            printf("z=%d \n",z );
                            if (b[z]%i==0)
                                {
                                    count2++;
                                    printf("b[z]=%d count1=%d count2=%d \n",b[z],count1,count2 );
                                    if(count2==b_size && result!=i)
                                        {
                                            result=i;
                                            count3++;
                                            printf("result= " "\x1b[31m" "%d" "\x1b[0m" "count1=%d count2=%d " "\x1b[31m" "count3=%d \n" "\x1b[0m",result,count1,count2,count3 );
                                        }
                                }                                                
                        }    
                    }       
                }
                        
            }    
                
        }
        
    return count3;
    }

int main() {
    int n=1; 
    int m=2; 
    scanf("%i %i", &n, &m);
    ASSERT1(n);
    ASSERT1(m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
       ASSERT2(a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
       ASSERT2(b[b_i]);

    }
    int total = getTotalX(n, a, m, b);
    printf("\x1b[31m" "total=%d\n" "\x1b[0m", total);
    free(a);
    free(b);
    return 0;
}

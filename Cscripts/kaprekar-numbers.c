#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void kaprekarNumbers(int p, int q) 
{
    int found=0;
    for (unsigned long long int i = p; i <= q; ++i)
    {
        unsigned long long int number=i*i;    
        // printf("number=%d\n",number );
        unsigned long long int count = 0;
        unsigned long long int n=number;
        while ( n != 0) {
            n /= 10;
            count++;
        }
        // printf("count=%lld\n",count );
        unsigned long long int power=count-(count/2);
        unsigned long long int left=pow(10,power);
        unsigned long long int leftNumber=number/left;
        unsigned long long int rightNumber=number%left;
        // printf("power=%lld left=%lld  leftNumber=%lld rightNumber=%lld\n",power,left,leftNumber,rightNumber );
        unsigned long long result=leftNumber+rightNumber;
        if(result==i)
            {
                printf("%lld ",result);
                found=1;
            }
    }
    if(found==0)printf("INVALID RANGE\n");
}

int main() {
    int p; 
    scanf("%i", &p);
    int q; 
    scanf("%i", &q);
    kaprekarNumbers(p, q);
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    unsigned long long int len=strlen(s);
    unsigned long long int* num=malloc(sizeof(unsigned long long int)*len);
    int count=1;

    for (int i = 0; i < len; ++i)
    {
        // printf("i=%d ",i );
        if(s[i]==s[i-1])
            {
                count++;
                num[i]+=(s[i]-96)*count;
            // printf(" if=%d\n",s[i]-96 );
            }    
                
        else 
            {
                num[i]=s[i]-96;
                // printf("else=%d\n",s[i]-96 );
                count=1;
            }
    }
    qsort(num,len,sizeof(unsigned long long int),cmpfunc);
    /*for (int i = 0; i < len; ++i)
    {
        printf("num=%lld\n",num[i] );
    }*/
    int n; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int x; 
        scanf("%d",&x);
        int count=0;
        if(x>=num[len/2])
        {
            for (int i = len/2; i < len; ++i)
                {
                    if(x==num[i])
                        {
                            puts("Yes");
                            count++;
                            break;
                        }
                }            
                if(count==0)puts("No");
        }
        else
        {
            for (int i = 0; i < len/2; ++i)
                {
                    if(x==num[i])
                        {
                            puts("Yes");
                            count++;
                            break;
                        }
                }            
                if(count==0)puts("No");    
        }        
    }
    free(num);
    return 0;
}

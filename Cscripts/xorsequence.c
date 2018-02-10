#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void xor(long L,long R)
{

unsigned long long int sum=0;
unsigned long long int temp=0;
unsigned long long int m=(L-1)%8;
unsigned long long int r=R%8;


if (m==0 || m==1)sum=L-1;
if (m==2 || m==3)sum=2;
if (m==4 || m==5)sum=L+1;
if (m==6 || m==7)sum=0;	

if (r==0 || r==1)temp=R;
if (r==2 || r==3)temp=2;
if (r==4 || r==5)temp=R+2;
if (r==6 || r==7)temp=0;	


// printf("sum=%lld temp=%lld\n",sum,temp );
sum^=temp;
printf("%lld\n",sum );
}

int main(){
    int Q; 
    scanf("%d",&Q);
    for(int a0 = 0; a0 < Q; a0++){
        long L; 
        long R; 
        scanf("%ld %ld",&L,&R);
        xor(L,R);
    }
    return 0;
}

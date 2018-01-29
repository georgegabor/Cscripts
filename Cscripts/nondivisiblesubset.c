#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    
    int count[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d",&a);
        count[a % k]++;
    }
    
    int max = 0;
    for (int i = 0; i <= k/2; i++) {
        if (i == 0 || i == k - i) {
            if (count[i] >= 1) {
                max += 1;
            }
        } else {
            max += count[i] > count[k-i] ? count[i] : count[k-i];
        }
    }
    printf("%d\n",max);
    
    return 0;
}
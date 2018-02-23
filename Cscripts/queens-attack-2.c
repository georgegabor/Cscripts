#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void queensAttack(int n, int k, int r_q, int c_q, int obstacles_size_rows, int obstacles_size_cols, int obstacles[k][2])
{
    int queen=c_q+(r_q-1)*n;
    
    int upmax=n-r_q ;
    int downmax=r_q-1;
    int leftmax=c_q-1;
    int rightmax=n-c_q;

    int upleftmax=(leftmax<=upmax)?leftmax:upmax;
    int uprightmax=(rightmax<=upmax)?rightmax:upmax;
    int downleftmax=(leftmax<=downmax)?leftmax:downmax;
    int downrightmax=(rightmax<=downmax)?rightmax:downmax;
    unsigned int* array=malloc(sizeof(int)*k);
    for (int i = 0; i < k; ++i)
    {
        array[i]=obstacles[i][1]+(obstacles[i][0]-1)*n;
    }
    for (int i = 0; i < k; ++i)
    {
        // printf("obstacles=%d\n",array[i] );
        // up
        if(array[i]>queen && (array[i]-queen)%n==0)
        {
            int diff=((array[i]-queen)/n)-1;
            upmax=(upmax>diff)?diff:upmax;
        }
        // down
        else if(array[i]<queen && (queen-array[i])%n==0)
        {
            int diff=((queen-array[i])/n)-1;
            downmax=(downmax>diff)?diff:downmax;
        }
        // left
        else if(leftmax!=0 && array[i]<queen && array[i]>=((r_q-1)*n)+1)
        {
            int diff=(queen-array[i])-1;
            leftmax=(leftmax>diff)?diff:leftmax;
        }
        // right
        else if(rightmax!=0 && array[i]>queen && array[i]<=r_q*n)
        {
            int diff=(array[i]-queen)-1;
            rightmax=(rightmax>diff)?diff:rightmax;   
        }
        // upleft
        else if(array[i]>queen && (array[i]-queen)%(n-1)==0)
        {
            int diff=((array[i]-queen)/(n-1))-1;
            upleftmax=(upleftmax>diff)?diff:upleftmax;
        }
        // upright
        else if(array[i]>queen && (array[i]-queen)%(n+1)==0)
        {
            int diff=((array[i]-queen)/(n+1))-1;
            uprightmax=(uprightmax>diff)?diff:uprightmax;   
        }
        // downleft
        else if(array[i]<queen && (queen-array[i])%(n+1)==0)
        {
            int diff=((queen-array[i])/(n+1))-1;
            downleftmax=(downleftmax>diff)?diff:downleftmax;
        }
        // downright
        else if(array[i]<queen && (queen-array[i])%(n-1)==0)
        {
            int diff=((queen-array[i])/(n-1))-1;
            downrightmax=(downrightmax>diff)?diff:downrightmax;   
        }
    }

    // printf("queen=%d\n",queen );
    int max=upmax+downmax+leftmax+rightmax+upleftmax+uprightmax+downleftmax+downrightmax;
    printf("%d\n",max );
    // printf("upmax=%d\ndownmax=%d\nleftmax=%d\nrightmax=%d\nupleftmax=%d\nuprightmax=%d\ndownleftmax=%d\ndownrightmax=%d\n",upmax,downmax,leftmax,rightmax,upleftmax,uprightmax,downleftmax,downrightmax);
    free(array);
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int r_q; 
    int c_q; 
    scanf("%i %i", &r_q, &c_q);
    int obstacles[k][2];
    for (int obstacles_i = 0; obstacles_i < k; obstacles_i++) {
       for (int obstacles_j = 0; obstacles_j < 2; obstacles_j++) {
      
          scanf("%i",&obstacles[obstacles_i][obstacles_j]);
       }
    }
    queensAttack(n, k, r_q, c_q, k, 2, obstacles);
    return 0;
}

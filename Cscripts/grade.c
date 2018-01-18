#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
int main()
{
	
	int n;
	printf("Give me the number : ");
	scanf("%d",&n);
	assert(0<=n && n<=100);
	int m=((n/5)+1)*5;
	int result=(m-n<3) ? m : n;
	printf("Actual grade is: %d\n",result );
	return 0;
} 

*/

int* solve(int grades_size, int* grades){
    // Complete this function
    static int result[60];
    for(int i=0;i<grades_size;i++)
    	{
    		if (grades[i]<38)
    		{
    			result[i]=grades[i];
    		}
    		else
    		{
    			int m=((grades[i]/5)+1)*5;
				int n=(m-grades[i]<3) ? m : grades[i];
				result[i]=n;
				
			}
			
    	}
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    assert(0<=n && n<=60);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
       assert(0<=grades[grades_i] && grades[grades_i]<=100);
    }
    int* result = solve(n, grades);
    printf("\n");
    for(int result_i = 0; result_i < n; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
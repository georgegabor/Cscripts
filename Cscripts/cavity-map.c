#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char** cavityMap(int grid_size, char** grid, int *result_size) 
{
    for (int i = 1; i < grid_size-1; ++i)
    {
        for (int j = 1; j < grid_size-1; ++j)
        {
            if(grid[i][j]>1)
            {
                if(grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i+1][j] && grid[i][j]>grid[i][j-1] && grid[i][j]>grid[i][j+1])grid[i][j]='X';
            }
        }
    }
    return grid;
}

int main() {
    int n; 
    scanf("%i", &n);
    char* *grid = malloc(sizeof(char*) * n);
    for (int grid_i = 0; grid_i < n; grid_i++) {
       grid[grid_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",grid[grid_i]);
    }
    int result_size=n;
    char** result = cavityMap(n, grid, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%s", result[result_i]);
    }
    puts("");


    return 0;
}

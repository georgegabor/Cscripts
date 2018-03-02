/* This is the one that i wrote, but failed a few test cases
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
     
void inverz(int n, int grid_size, int c, char** grid ) 
{

	char* *grid2 = malloc(sizeof(char*) * grid_size);
	for (int i = 0; i < grid_size; ++i)
	{
		grid2[i]=malloc(c*sizeof(char));
	}
	for (int i = 0; i < grid_size; i++) 
	{
		for (int j = 0; j < c; ++j)
		{
			grid2[i][j]='O';
		}
	}
	for (int i = 0; i < grid_size; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(grid[i][j] == 'O')
			{
				grid2[i][j] = '.';
				if(i<grid_size-1) grid2[i+1][j] = '.';
				if(j<c-1) grid2[i][j+1] = '.';
				if(i>0) grid2[i-1][j] = '.';
				if(j>0) grid2[i][j-1] = '.';
			}
		}
	}
	for (int i = 0; i < grid_size; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("%c",grid2[i][j] );
		}
		printf("\n");
	}
}


void bomberMan(int n, int grid_size, int c, char** grid ) 
{
	if(n==1)
	{
		// 1
		for (int i = 0; i < grid_size; ++i)
		{
			printf("%s\n",grid[i] );
		}

	}
	else if (n%2==0)
	{
		// Full
		for (int i = 0; i < grid_size; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				printf("O");
			}
			printf("\n");
		}
	}
	else if (n%4==3)
	{
		// 2
    inverz(n, grid_size, c,grid);
	}
	else if (n%4==1)
	{
		for (int i = 0; i < grid_size; ++i)
		{
			printf("%s\n",grid[i] );
		}
	}
}

int main() {
    int r; 
    int c; 
    int n; 
    scanf("%i %i %i", &r, &c, &n);
    char* *grid = malloc(sizeof(char*) * r);
    for (int grid_i = 0; grid_i < r; grid_i++) {
       grid[grid_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",grid[grid_i]);
    }
    bomberMan(n, r, c,grid);
    


    return 0;
} */  
// This one passed all the testcases
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void print_board(char *bombs, int len, int C) {
    for(int i = 0; i < len; i++) {
        if(i && !(i%C))
            printf("\n");
        if(bombs != NULL) {
            if(bombs[i] == 0)
                printf(".");
            else
                printf("O");
        }
        else
            printf("O");
    }
}

void detonate(char *bombs1, char *bombs2, int len, int C) {
    for(int i = 0; i < len; i++) {        
        if(bombs1[i] == 1) {
            bombs2[i] = 0;
            if((i+1) % C) 
                bombs2[i+1] = 0;
            if(i%C)
                bombs2[i-1] = 0;
            if(i-C >= 0) 
                bombs2[i-C] = 0;
            if(i+C < len) 
                bombs2[i+C] = 0;
        }
    }
}

int main() {
    int R, C, N;
    scanf("%d %d %d", &R, &C, &N);
    int len = R*C;
    char *bombs1 = (char*)calloc(len, sizeof(char));
    char *bombs2 = (char*)calloc(len, sizeof(char));
    char c;
    
    if(!(N % 2)) {
        print_board(NULL, len, C);
        return 0;
    }
    
    for(int i = 0; i < len; i++) {
        scanf(" %c", &c);
        if(c == 'O')
            bombs1[i] = 1;
        else if(c == '.')
            bombs2[i] = 1;    
    }
    
    if(N == 1) {
        print_board(bombs1, len, C);
        return 0;
    }
    
    detonate(bombs1, bombs2, len, C);
    memset(bombs1, 1, len);
    detonate(bombs2, bombs1, len, C);
    
    if (N%4 == 3)
        print_board(bombs2, len, C);
    else
        print_board(bombs1, len, C);
    return 0;
}

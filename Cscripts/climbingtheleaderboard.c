#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* climbingLeaderboard(int scores_size, int* scores, int alice_size, int* alice, int *result_size) {
    // Complete this function
}

int main() {
    int n; 
    scanf("%i", &n);
    assert(n>=1 && n<=200000);
    int *scores = malloc(sizeof(int) * n);
    for (int scores_i = 0; scores_i < n; scores_i++) {
       scanf("%i",&scores[scores_i]);
       assert(scores[scores_i]>=0 && scores[scores_i]<=1000000000);
       assert(scores_i>=0 && scores_i<n)
    }
    int m; 
    scanf("%i", &m);
    assert(m>=1 && m<=200000);
    int *alice = malloc(sizeof(int) * m);
    for (int alice_i = 0; alice_i < m; alice_i++) {
       scanf("%i",&alice[alice_i]);
       assert(alice[alice_i]>=0 && alice[alice_i]<=1000000000);
       assert(alice_i>=0 && alice_i<m)
    }
    int result_size;
    int* result = climbingLeaderboard(n, scores, m, alice, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    free(scores);
    free(alice);

    return 0;
}

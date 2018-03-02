#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    char **g = malloc(sizeof(char*) * r);
    for (int i = 0; i < r; i++) {
        g[i] = malloc(sizeof(char) * (c+1));
        scanf("%s", g[i]);
    }


    int **a = malloc(sizeof(int*) * 1000);
    int len = -1;
    int min;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (g[i][j] == 'G') {
                len++;
                a[len] = malloc(sizeof(int) * 100);
                a[len][0] = 3;
                a[len][1] = i;
                a[len][2] = j;
                int t;
                min = i;
                min = (r-i-1 < min) ? r-i-1 : min;
                min = (j < min) ? j : min;
                min = (c-j-1 < min) ? c-j-1 : min;
                for (int k = 1; k <= min; k++) {
                    if (g[i-k][j] == 'G' && g[i+k][j] == 'G' && g[i][j-k] == 'G' && g[i][j+k] == 'G') {
                        a[len+1] = malloc(sizeof(int) * 100);
                        for (int x = 0; x < a[len][0]; x++) {
                            a[len+1][x] = a[len][x];
                        }
                        len++;
                        t = a[len][0];
                        a[len][t] = i-k;
                        a[len][t+1] = j;
                        a[len][t+2] = i+k;
                        a[len][t+3] = j;
                        a[len][t+4] = i;
                        a[len][t+5] = j-k;
                        a[len][t+6] = i;
                        a[len][t+7] = j+k;
                        a[len][0] += 8;
                    } else {
                        break;
                    }
                }
            }
        }
    }
    int max = 0;
    int maxIndex = 0;
    int lenSort = 0;
    bool next;
    int *sort = malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (a[j][0] >= max) {
                next = false;
                for (int k = 0; k < lenSort; k++) {
                    if (j == sort[k]) {
                        next = true;
                        break;
                    }
                }
                if (next == true) {
                    continue;
                }
                max = a[j][0];
                maxIndex = j;
            }
        }
        sort[i] = maxIndex;
        lenSort++;
        max = 0;
    }
    bool OK;
    int s_i, s_j;
    int maxProduct = 0;
    int product;
    for (int i = 0; i < lenSort-1; i++) {
        for (int j = 0; j < lenSort; j++) {
            OK = true;
            s_i = sort[i];
            s_j = sort[j];
            for (int x = 1; x < a[s_i][0]; x += 2) {
                for (int y = 1; y < a[s_j][0]; y += 2) {
                    if (a[s_i][x] == a[s_j][y] && a[s_i][x+1] == a[s_j][y+1]) {
                        OK = false;
                        break;
                    }
                }
            }
            if (OK == true) {
                product = (a[s_i][0]-1)/2 * (a[s_j][0]-1)/2;
                if (product > maxProduct) {
                    maxProduct = product;
                }
                break;
            } else {
                continue;
            }
        }
    }
    printf("%d\n", maxProduct);

    return 0;
}
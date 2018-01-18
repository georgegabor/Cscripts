#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int hh, mm, ss;
    char tt[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, tt);
    assert(hh>=1 && hh<=12);
    assert(mm>=0 && mm<=59);
    assert(ss>=0 && ss<=59);
    if(strcmp(tt, "PM") == 0 && hh != 12) hh += 12;
    if(strcmp(tt, "AM") == 0 && hh == 12) hh = 0;
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
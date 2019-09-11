/* file: Blocks.c */
/* author: Alexandru Dimofte (email: alexandru.dimofte10@gmail.com) */
/* date: 10-09-2019 */
/* version: 1.0 */
/* Description: Given five non-negative integers representing a structure of a liquid container where the width of each
                rectangle-like concavity is 1, compute how much liquid this container is able to accumulate. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, localmin = 0, water1 = 0, water2 = 0, water3 = 0, blocks = 0;
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);


    if ((c1 > c2) && (c2 < c3)) {    
        localmin = ((c1 < c3) || (c1 == c3) ? c1:c3);
        water1 = localmin - c2;
    }
    else {
        water1 = 0;
    }


    if ((c2 > c3) && (c3 < c4)) {
        localmin = ((c2 < c4) || (c2 == c4) ? c2:c4);
        water2 = localmin - c3;
    }
    else {
        water1 = 0;
    }


    if ((c3 > c4) && (c4 < c5)) {
        localmin = ((c3 < c5) || (c3 == c5) ? c3:c5);
        water3 = localmin - c4;
            }
    else {
        water3 = 0;
    }


    blocks = water1 + water2 + water3;
    printf("%d", blocks);
    return 0;
}
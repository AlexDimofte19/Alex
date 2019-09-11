/* file: Difference.c */
/* author: Alexandru Dimofte (email: alexandru.dimofte10@gmail.com) */
/* date: 10-09-2019 */
/* version: 1.5 */
/* Description: Accepts four non-negative integer values and prints
                out the difference of the maximum and minimum values */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a = 0, b = 0, c = 0, d = 0, min = 0, max = 0, dif = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a < b) {
        min = a;
    }
    else {
        min = b;
    }
    min = (a < b ? a : b );             /* Finds the */ 
    min = (min < c ? min : c);          /* minimum   */
    min = (min < d ? min : d);          /* value     */

    max = (a > b ? a : b);              /* Finds the */
    max = (max > c ? max : c);          /* maximum   */
    max = (max > d ? max : d);          /* value     */

    dif = max - min;
    printf("%d", dif);
    return 0;
}
/* file: TB2GB.c */
/* author: Alexandru Dimofte (email: alexandru.dimofte10@gmail.com) */
/* date: 11-09-2019 */
/* version: 1.0 */
/* Description: Accepts a size in TB (terabytes) and prints the corresponding value in GB
(Gigabytes). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int x;
    scanf("%d", &x);
    x = x*1024;
    printf("%d\n", x);
    return 0;
}
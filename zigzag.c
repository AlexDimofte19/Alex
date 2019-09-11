/* file: Zigzag.c */
/* author: Alexandru Dimofte (email: alexandru.dimofte10@gmail.com) */
/* date: 10-09-2019 */
/* version: 1.0 */
/* Description:  Reads from the input a four-digit integer n and outputs 
                 whether the number is a zigzag natural number or not */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &d);
    
    a = d/1000;
    b = ((d/100)%10);
    c = ((d/10)%10);
    d = (d%10);
    
    if (a < b && b > c && c < d) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;

}
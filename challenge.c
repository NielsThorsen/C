#include <stdio.h>

int main(void) {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

/* Beregning af summer, de forskellige måder*/
    int sum1 = a, sum2 = b, sum3 = c;
    int sum4 = a + b;
    int sum5 = a + c;
    int sum6 = b + c;
    int sum7 = a + b + c;

/* simpel find maks funktion */
    max = sum1;
    if (sum2 > max) max = sum2;
    if (sum3 > max) max = sum3;
    if (sum4 > max) max = sum4;
    if (sum5 > max) max = sum5;
    if (sum6 > max) max = sum6;
    if (sum7 > max) max = sum7;

    printf("Maximum sum: %d\n", max);
    return 0;
}
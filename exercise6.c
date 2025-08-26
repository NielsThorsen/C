#include <stdio.h>

int main (void) {
int x, y, t;

printf ("Input two numbers:\n");
scanf ("%d%d", &x, &y);

printf ("Input = (%d,%d)\n", x, y);

t = x;    /* gem x midlertidigt */
x = y;    /* x bliver y */ 
y = t;    /* y bliver tidligere x */

 printf ("output = (%d,%d)\n", x, y);

 return 0;
 }
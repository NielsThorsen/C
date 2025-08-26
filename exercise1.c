#include <stdio.h>

int main (void) {
int x, y;

printf ("Input two numbers:\n");
scanf ("%d%d", &x, &y);

printf ("Input = (%d,%d)\n", x, y);

 x = x + y;
 printf("After x = x + y: x = %d, y = %d\n", x, y);
 y = x - y;
 printf("After y = x - y: x = %d, y = %d\n", x, y);
 x = x - y;
 printf("After x = x - y: x = %d, y = %d\n", x, y);

 printf ("output = (%d,%d)\n", x, y);

 return 0;
 }
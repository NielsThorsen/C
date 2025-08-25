#include <stdio.h>

int main (void) {
int x, y;

printf ("Input two numbers:\n");
scanf ("%d%d", &x, &y);

printf ("Input = (%d,%d)\n", x, y);

 x = x + y;
 y = x - y;
 x = x - y;

 printf ("output = (%d,%d)\n", x, y);

 return 0;
 }
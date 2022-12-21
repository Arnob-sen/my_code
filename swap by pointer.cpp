#include <stdio.h>

int main()
{
   int x, y, *a, *b, temp;



   x=10;
   y=20;
   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;

   printf(" %d %d\n", *a, *b);

   return 0;
}

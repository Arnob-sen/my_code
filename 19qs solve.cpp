#include<stdio.h>



 void solve1()
 {
   char c;
   scanf("%c",&c);
   short a;
   scanf("%hd",&a);
   long b;
   scanf("%ld",&b);

   double d;
   scanf("%lf",&d);
   printf("%hd %ld %c %lf",a,b,c,d);
 }

 int main()
 {
   solve1();

     return 0;
 }

#include<stdio.h>
#include<math.h>
int main(){
int n,i,m;
printf("Enter the number to check prime:");
scanf("%d",&n);
m=sqrt(n);
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("Number is not prime");

break;
}
}
if(n%i!=0)
printf("Number is prime");
return 0;
 }

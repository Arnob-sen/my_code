#include<stdio.h>
int main()
{
int n,i,x=0;
char a[100];
scanf("%d%s",&n,a);
for(i=1;i<n;i++)
if(a[i]==a[i-1])
x++;
printf("%d",x);
}

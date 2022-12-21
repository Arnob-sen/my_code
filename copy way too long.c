
#include<stdio.h>
#include<string.h>
int main()
{int n,i,j;
char c[101];
scanf("%d",&n);
while(n--)
	{scanf("%s",c);
	j=strlen(c);
	if(j<=10)
	printf("%s\n",c);
	else
	printf("%c%d%c\n",c[0],j-2,c[j-1]);
	}
}

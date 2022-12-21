#include<stdio.h>
int a[100];
int main()
{
	int t,i,j,n,sum=0,x;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{	sum=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%d",&x);
			if(x>=2)
			sum=sum+x-1;
		}
		if(sum%2==1)
            printf("errorgorn\n");

		else
            printf("maomao90\n");

	}
	return 0;
}

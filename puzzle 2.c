#include <stdio.h>

int main()
{
	int n,i,j,t,m,s=1000;


	scanf("%d %d",&n,&m);


	int ara[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&ara[i]);
		for(j=0;j<i;j++)
		{
			if(ara[i]<ara[j])
			{
				t=ara[i];
				ara[i]=ara[j];
				ara[j]=t;
			}
		}
	}
	for(j=0;j <= m-n;j++)
	{
		if(ara[j+n-1]-ara[j] < s)
		{
			s = ara[j+n-1]-ara[j];
		}
	}
	printf("%d",s);
	return 0;
}

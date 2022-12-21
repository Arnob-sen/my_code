#include<stdio.h>


int main()
{
	int a,b,c;


	scanf("%d %d",&a,&b);
	for(c=(a+1)/2;c<=a;c++)


	{
		if(c % b == 0)
		{
			printf("%d\n",c);
			return 0;
		}
	}
	printf("-1\n");


	return 0;
}

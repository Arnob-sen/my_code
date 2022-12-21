#include <stdio.h>

int main()
{
	int a,b=5,c;
	scanf("%d",&a);
	while(a-b>0) {
		a-=b;
		b*=2;
	}
	b/=5;
	if(a<=b) printf("Sheldon\n");
	else if(a<=2*b) printf("Leonard\n");
	else if(a<=3*b) printf("Penny\n");
	else if(a<=4*b) printf("Rajesh\n");
	else printf("Howard\n");
	return 0;
}


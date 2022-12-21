#include<stdio.h>

int main(){
	int t,n,a[1000],d,dd;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		d=0;dd=0;
		scanf("%d",&n);
		for(int j=0;j<2*n;j++){
			scanf("%d",&a[j]);
			if(a[j]%2==0) d++;
			else dd++;
		}
		if(d==dd) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}


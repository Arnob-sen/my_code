#include<stdio.h>

int main()

{
    int t,max=0,c=0,d=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);

        int ara[n+1];

        for(int i=1;i<=n;i++){

            scanf("%d",&ara[i]);
          //  max=ara[i];
            //if(max<ara[i])max=ara[i];
            max=ara[i]>max?ara[i]:max;
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
                if(ara[i]==max&&(ara[i]>ara[i-1]&&i>1||ara[i]>ara[i+1]&&i+1<=n)){
                    ans=i;

                }
        }
                printf("%d\n",ans);

        //printf("%d %d %d\n",c,max,d);

        c=0,max=0,d=0;
    }


    return 0;
}
/*/

#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[n+1],max=0;
		for(int i=1; i<=n; i++) {
			scanf("%d",&a[i]);
			max=a[i]>max?a[i]:max;
		}
		int ans=-1;
		for(int i=1; i<=n; i++)
			if(a[i]==max&&(a[i]>a[i-1]&&i>1||a[i]>a[i+1]&&i+1<=n))
				ans=i;
		printf("%d\n",ans);
	}
	return 0;
}
/*/

#include<stdio.h>

int main()

{
    int t,c=0,temp=0;

    scanf("%d",&t);
    while(t--){
        int n;

        scanf("%d",&n);

        int ara[n];

        for(int i=0;i<n;i++){

            scanf("%d",&ara[i]);

        }
        for(int i=0;i<n;i++){
            if(ara[i]!=i+1){c=1;
            break;



            }
        }
        if(c==0)printf("0\n");


            else{
            if(ara[0]==1 || ara[n-1]==n){printf("1\n");


            }

            else if(ara[0]==n && ara[n-1]==1){
                printf("3\n");

            }
            else {
                printf("2\n");

            }
        }
         c=0;

    }
      //  if(c==0)printf("0\n");









    return 0;
}
/*/
#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], i;
		for(i = 0; i < n; i++) scanf("%d", &a[i]);

		int flag = 0;
		for(i = 0; i < n; i++)
		{
			if(a[i] != i + 1)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0) printf("0\n");
		else
		{
			if(a[0] == 1 || a[n-1] == n) printf("1\n");
			else if(a[0] == n && a[n-1] == 1) printf("3\n");
			else printf("2\n");
		}
	}
}
/*/

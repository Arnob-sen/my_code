#include<stdio.h>

int main()

{
    int t,even=0,odd=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){


        int n;
        scanf("%d",&n);

        int ara[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);


        }
        for(int i=0;i<n;i++){
            if(ara[i]%2==0)
                even++;
            else
                odd++;
        }

        if(even==n || odd==n)
            printf("0\n");

        else if(even>=odd)
            printf("%d\n",odd);

        else
            printf("%d\n",even);

        even=0;
        odd=0;

    }




    return 0;
}

#include<stdio.h>

int main()

{
    int t,c=0,temp=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n;
        scanf("%d",&n);

        int ara[n];
        for(int i=0;i<n;i++){

            scanf("%d",&ara[i]);


        }
         for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(ara[i]<ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(ara[i]==ara[i+1])c++;
    }


        if(c%2==0)printf("%d\n",n-c);
        else printf("%d\n",n-c-1);
        c=0;

    }



    return 0;
}

#include<stdio.h>

int main()

{
    int t,c=0,m;
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n;
        scanf("%d",&n);
        int ara[n],ara2[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
            scanf("%d",&ara2[i]);

        }
        for(int i=0;i<n;i++){
                if(ara[i]==0 && ara2[i]==0){
                    i++;
                    continue;
                }
                if(ara2[i]==0 && ara[i]!=0)
                    m=ara[i]-ara2[i];

            if(ara[i]<ara2[i])printf("NO\n");




            else if(ara[i]-ara2[i]==ara[i+1]-ara2[i+1] && m<=ara[i]-ara2[i])c++;




        }

        if(c==n)printf("YES\n");

        else printf("NO\n");
    }


    return 0;
}

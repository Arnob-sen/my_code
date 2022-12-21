#include<stdio.h>
#include<string.h>

int main()

{

    int t,n,m,d=0;


    scanf("%d",&t);

    for(int i=0;i<t;i++){

        scanf("%d %d",&n,&m);

        char str[1000][1000];
       int ara[m];

        for(int i=0;i<n;i++){
            scanf("%s",&str);

             for(int i=0;i<m;i++){

             d=str[i]-96;

             ara[i]=d;


        }


        }




    }





    return 0;
}

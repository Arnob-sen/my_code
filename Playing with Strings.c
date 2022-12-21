#include<stdio.h>

int main()

{
    int t,one1=0,zero1=0,one2=0,zero2=0;

    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);

        char str[n];
        char str2[n];

        scanf("%s %s",&str,&str2);
        for(int i=0;i<n;i++){
            if(str[i]=='1') one1++;

            else if(str[i]=='0') zero1++;

        }
        for(int i=0;i<n;i++){
             if(str2[i]=='1') one2++;
            else if(str2[i]=='0')zero2++;
        }
        if(zero1==zero2 && one1==one2)printf("YES\n");
        else printf("NO\n");

       // printf("%d %d %d %d\n",one1,zero1,one2,zero2);

        one1=0,zero1=0,one2=0,zero2=0;


    }






    return 0;
}

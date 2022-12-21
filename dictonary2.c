#include<stdio.h>
#include<string.h>

int  main()

{

    int t,ans;
    scanf("%d",&t);
    char str[10];
    for(int i =0;i<t;i++){

        scanf("%s",str);
        int a=str[0]-96;
        int b=str[1]-96;
        if(a>b){

            ans=(a-1)*25+(b);
        }
        else{
            ans=(a-1)*25+(b-1);
        }
        printf("%d\n",ans);
        }




    return 0;
}

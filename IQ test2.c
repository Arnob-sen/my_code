#include<stdio.h>

int main()

{
    int n,even=0,odd=0;
    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++){


        scanf("%d",&ara[i]);


    }
    for(int i=0;i<n;i++){
        if(ara[i]%2==0)even++;
        else odd++;
    }
   /*/ for(int i=0;i<n;i++){
        if(even=1 && ara[i]%2==0)printf("%d\n",i+1);
        else if(odd=1 && ara[i]%2!=0)printf("%d\n",i+1);
    }
    /*/
        for(int i=0;i<n;i++){
    if(odd==1 && ara[i]%2!=0)printf("%d\n",i+1);
    if(even==1 && ara[i]%2==0)printf("%d\n",i+1);
        }
  //  printf("%d %d",even,odd);






    return 0;
}

#include<stdio.h>

int main()
{
    int n,ara[1000],c=1,d=1;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);

    }

    for(int i=0;i<n;i++){

   if (ara[i]<=ara[i+1]){

        c++;

   }
   else{
    c=1;
   }
   if(c>d){
    d=c;

   }












    }
    printf("%d\n",d);


















    getch();

}

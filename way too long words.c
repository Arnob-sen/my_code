#include<stdio.h>
int main()
{
    int n, i,len=0;;

    scanf("%d",&n);
        char str[1000];



        for(i=0;i<=n;i++){
    scanf("%s",&str[i]);

   int d= strlen(str);



   if(d>10){

    printf("%c%d%c",*str,d-2,str[d-1]);

   }

     //continue;


   else{



    puts(str);




   }

        }



    return 0;
}

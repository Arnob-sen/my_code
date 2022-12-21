#include<stdio.h>
#include<string.h>

int main()

{
    char str[100];
    int a=1;

    scanf("%s",&str);

    int d=strlen(str);

    for(int i=0;i<d-1;i++){




            if(str[i]==str[i+1]){
                a++;
            }


            else {
                a=0;

            }

            if(a>=6)
                break;






    }
    a++;

    //printf("%d",a);


  if(a>=7){
        printf("YES\n");
   }
   else {

        printf("NO\n");
 }




    return 0;
}

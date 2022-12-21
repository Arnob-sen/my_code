#include<stdio.h>
#include<string.h>
int main()

{
    int t,c=1;
    char str[100];
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        scanf("%s",&str);
        int d=strlen(str);
        for(int i=0;i<d;i++){

            for(char i='a';i<='z';i++){

                if(str[1]>='a' && str[1]<='z'){

                if(str[0]==str[1])
                continue;

                c++;

                }


            if(str[0]>='a' && str[0]<='z'){
                    if(str[0]==str[1])
                    continue;


                c+=25;
            }

            }

      //  for(int i='a';i<='z';i++){
   // for(int i='b';i<='y';i++){


        }


        printf("%d",c);

    }




    return 0;
}



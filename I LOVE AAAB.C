#include<stdio.h>
#include<string.h>

int main()

{
         int t,k,a,b,F;
         char s[1000000];
         scanf("%d",&t);
         for(int i=0;i<t;i++){
                a=b=F=0;
            scanf("%s",&s);

                k = strlen(s);
                for(int i=0;i<k;i++){
                        if(s[i]=='A')
                        a++;
                        else if(s[i]=='B')
                            b++;

                       // a+=s[i]=='A';
                        //b+=s[i]=='B';
                        if(a<b){
                            F=1;
                        }

                }
                if(s[0]=='A'&&s[k-1]=='B'&&F==0){
                    printf("yes\n");
                }
                else{

                    printf("no\n");
                }

         }
         return 0;



    }



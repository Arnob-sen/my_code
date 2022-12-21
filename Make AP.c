#include<stdio.h>

int main()

{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int a,b,c;

        scanf("%d%d%d",&a,&b,&c);

        if(a==b && b==c && c==a)printf("YES\n");



     else   if(a<=b && b<=c && a<=c)
        {
            int d=c-b;
            int m;
            for(int i=1;m<c;i++){

                m=a*i;
                if(b-m==d){printf("YES\n");
                        break;

                }
            }
           if(m>=c) printf("NO\n");
            continue;

        }


           else  if(a<=b && b>c && a<=c){

            int m=b-c;
            int d;
            for(int i=1;d<=m;i++){
                d=(a*i)-b;
                if(d==m){
                    printf("YES\n");
                    break;

                }

            }
           if(d>m) printf("NO\n");
            continue;
           }
            else if(a>b && b<=c && a<=c){
                    int m;

                for(int i=1;m<=c;i++){
                    m=b*i;
                    if((m-a)==(c-m)){printf("YES\n");

                    break;
                    }


                }
                if(m>=c)printf("NO\n");
            }
             else  if(a>b && b<=c && a>c){

                int m;
                for(int i=1;m<=a;i++){
                    m=b*i;
                    if((a-m)==(m-c)){
                        printf("YES\n");
                        break;
                    }
                }
                if(m>=a)printf("NO\n");
             }
            else  if(a>b && b>c && a>c){

                int d=a-b;

                int m;
                for(int i=1;m<a;i++){
                    m=c*i;
                    if((b-m)==d){
                        printf("YES\n");
                        break;
                    }
                    if(m>=a)printf("NO\n");
                }
            }


             else{
                      int m=b-a;
            int d;
            for(int i=1;d<=m;i++){
                d=(c*i)-b;
                if(d==m){
                    printf("YES\n");
                    break;

                }

            }
           if(d>m) printf("NO\n");
            continue;

             }



    }




    return 0;
}

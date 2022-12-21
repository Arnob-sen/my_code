#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);

    int n;
    while(t--){
        scanf("%d",&n);

        char str[n];

        scanf("%s",&str);

        if(n%2==1){
            int c=0;

            n=n/2;

            for(int i=n ;i>=0;i--){

                if(str[n]!=str[i])
                    break;
                c++;

            }-+
            printf("%d\n",c*2-1);
        }
        else{

            int c=0;
            n=n/2-1;
            for(int i=n;i>=0;i--){
                if(str[n]!=str[i])
                    break;

                c++;
            }

            printf("%d\n",c*2);
        }
    }



    return 0;
}

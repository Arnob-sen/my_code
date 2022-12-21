#include<stdio.h>

int main()
{
    int t,d,c=1;
    scanf("%d",&t);



    for(int i=0;i<t;i++){

            int n;
            scanf("%d",&n);
             char str[n];

        scanf("%s",&str);

        d=strlen(str);
        if(d==3){
            for(int i=0;i<d;i++){
                if(str[i]==str[i+1]){
                    printf("3\n");
                    break;

                }
                else{
                    printf("1\n");
                    break;
                }
            }
        }
        else if(d==2)printf("2\n");
        else{
        for(int i=0;i<d;i++){
            if(str[i]==str[i+1]){
                c++;
            }


        }
        printf("%d\n",c);

        }

    }


    return 0;
}

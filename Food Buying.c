#include<stdio.h>

int main()

{
    int t;
    int sum=0;



    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int s;

        scanf("%d",&s);

           while(s>=10){

            sum=((s/10)*10)+sum;

            s=s/10+s%10;
            // printf("%d %d\n",sum,s);


        }
        printf("%d\n",sum+s);

        sum=0,s=0;


    }



    return 0;
}
/*/1
11
21
10973
13716
1111111111
/*/

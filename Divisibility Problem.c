#include<stdio.h>

int main()

{
    int n,a,b,c;
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d %d",&a,&b);


        if(a%b==0){
                printf("0\n");
        }
        else if(a>b && a%b!=0){
                c=b-a%b;


            printf("%d\n",c);
        }
        else if(a<b){
            c=b-a;
            printf("%d\n",c);
        }




    }

    return 0;
}

#include<stdio.h>

int main()

{
    int n,a,b,c=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){


        scanf("%d %d",&a,&b);

        if(a==1 && b==1){
            printf("0\n");

        }
        else if(a==1 && b-a>=2 || b==1 && a-b>=2)
        {
            printf("-1\n");
        }
        else{




            c++;
            printf("%d\n",c);
        }
    }





    return 0;
}


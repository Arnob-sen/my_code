#include<stdio.h>

int main()

{
    int t,d=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){


        int n;
        scanf("%d",&n);

        int c;
        for(int i=0;i<n;i++){

            scanf("%d",&c);
            if(c>=2)
            d+=c-1;


    }
    if(d%2==1){
        printf("errorgorn\n");
    }
    else{
        printf("maomao90\n");
    }


    }


    return 0;
}

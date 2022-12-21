#include<stdio.h>

int main()


{
    int n,k,c=0;
    scanf("%d %d",&n,&k);

    int ara[n];
    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);

        int d=5-ara[i];
        if(d>=k){
            c++;
        }
    }
    if(c>=3){
        printf("%d\n",c/3);
    }
    else{
        printf("0\n");
    }



    return 0;
}

#include<stdio.h>

int main()

{
    int ara[1000],n,ara2[1000],c=1,a;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);


    ara2[(ara[i]-1)]=i+1;//2nd array r value ta hocce agr array r (index +1) (jeta print hbe).ere jnno dorkr index;oi index ta hobe agr array (oi index r value -1); for more surety check test case






    }
        for(int i=0;i<n;i++){

            printf("%d ",ara2[i]);
        }









    return 0;
}

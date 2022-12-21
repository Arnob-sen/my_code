#include<stdio.h>
#include<string.h>

int main()

{
    int n,zero=0,one =0;

    scanf("%d",&n);

    char str[n];

    scanf("%s",&str);

    for(int i=0;i<n;i++){

        if(str[i]=='1')one++;

        else zero++;
    }
    if(one>=zero)
    printf("%d\n",one-zero);

    else
        printf("%d\n",zero-one);




    return 0;
}

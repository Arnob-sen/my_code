#include<stdio.h>

int main()
{


    int ara[100],i=0,c=0;
    char temp;

    while(temp!='\n'){scanf("%d%c",&ara[i],&temp);
    i++;
    }
    c=i;
    for(int i=0;i<c;i++){
        if(ara[i]>4){
            ara[i]=9-ara[i];
            continue;
        }
        else ara[i]=ara[i];
    }
    for(i=0;i<c;i++)printf("%d",ara[i]);
}

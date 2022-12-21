#include<stdio.h>

void swaping(int *ptr1,int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d %d\n",*ptr1,*ptr2);


}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swaping(&x,&y);


}




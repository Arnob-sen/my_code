#include<stdio.h>

void swap(int *px,int *py)
{
    int temp=*px;
    *px=*py;
    *py=temp;
    printf("%d %d",*px,*py);
}
int main()
{
    int u,v;
    scanf("%d %d",&u,&v);
    swap(&u,&v);

}

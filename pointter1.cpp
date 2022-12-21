#include<stdio.h>
void funct1(int u,int v)
{
    u=0;
    v=0;
    printf("%d %d\n",u,v);

}
void funct2(int *pu,int *pv)
{
   *pv=2;
    *pu=3;
    printf("%d \n",*pu+*pv);
}
int main()
{
    int u1,u2;
    u1=1;
    u2=2;
    int *pt1,*pt2;
    pt1=&u1;
    pt2=&u2;
    printf("%d ",*pt1+*pt2);
    funct2(&u1,&u2);
    funct1(u1,u2);

}

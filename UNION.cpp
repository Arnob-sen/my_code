#include<stdio.h>
union test{

int x,y;
};
int main()
{
    union test t1;
    t1.x=10;
    printf("%d %d\n",t1.x,t1.y);

}

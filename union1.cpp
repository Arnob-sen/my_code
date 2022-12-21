#include<stdio.h>
union test {
int x,y;
};
union test1{

long long a;
int b;
};
struct test2{

long long a;
//int b;
};
int main()
{
    union test test;
    union test1 test1;
    struct test2 test2;
    test.x=10;
     test.y=20;
    printf("%d %d\n",test.x,test.y);

    printf("%d %d\n",test.x,test.y);
    printf("%d\n",sizeof(test));
    printf("%d\n",sizeof(test1));
    printf("%d\n",sizeof(test2));
}

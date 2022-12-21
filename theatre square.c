#include<stdio.h>
int main()
{

    long long int a,n,m,len,bre;
    scanf("%lld %lld %lld",&n,&m,&a);
    len=n/a;
    if(n%a!=0)
        len++;
    bre=m/a;
    if(m%a!=0)
        bre++;



    printf("%lld",len*bre);










    return 0;
}

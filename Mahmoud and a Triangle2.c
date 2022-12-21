#include<stdio.h>
int main()
{
    long long int a,i,j,t=0;

    scanf("%lld",&a);

    long long int A[a];

    for(i=0;i<a;i++)
    {
        scanf("%lld",&A[i]);
    }
    if(a>=45)
    {
        printf("YES\n");
        return 0;
    }

    for(i=0;i<a;i++)
    {
        for(j=i;j<a;j++)
        {
            if(A[i]<A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        if(A[i]+A[i+1]>A[i+2] && A[i]+A[i+2]>A[i+1] && A[i+1]+A[i+2]>A[i])
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}

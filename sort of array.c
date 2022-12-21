#include<stdio.h>
int main()
{
    int n,i,j,temp,c=1,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        sum1+=a[i];
        for(j=n-1; j>i; j--)
        {
            sum2+=a[j];
        }
        if(sum1<=sum2){
            c++;
            sum2=0;

        }
        else{
            break;
        }
    }
    printf("%d",c);
}

#include<stdio.h>
int main()
{
    int t,i,n,m;
    long long int sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        int b[m];
        sum=0;
        for(i=0;i<m;i++){
            scanf("%d",&b[m]);
            sum+=b[m];
        }
        sum=sum%n;
        printf("%d\n",a[sum]);
    }
}


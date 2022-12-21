#include<stdio.h>
void max(int x[10])

{
int    maxi=x[0];
    for(int i=1;i<10;i++)if(x[i]>maxi)maxi=x[i];

    printf("%d\n",maxi);

}
int main()
{

    int arr[10];
    for(int i=0;i<10;i++)scanf("%d",&arr[i]);

    max(arr);
}

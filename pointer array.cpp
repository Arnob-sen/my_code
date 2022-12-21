#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int *pt;
    pt=&arr[0];
    for(int i=0;i<6;i++){
        printf("%d ",*pt);
        pt++;
    }
}

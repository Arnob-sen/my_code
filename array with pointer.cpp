#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,60,50};

    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<6;i++){
    printf("%d ",*ptr);
    ptr++;
    }

}

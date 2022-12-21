#include<stdio.h>

void display(int x[]){

    for(int i=0;i<10;i++)printf("%d ",x[i]);


}
int main(){
    int arr[10];
    for(int i=0;i<10;i++)scanf("%d",&arr[i]);
    display(arr);
}

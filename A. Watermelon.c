#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("NO\n");
    }
    if(a%2==0){
        printf("YES\n");

    }
    if(a%2!=0){

        printf("NO\n");
    }
    return 0;
}

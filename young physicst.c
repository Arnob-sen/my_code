#include<stdio.h>
int main()
{

    int n,i,x,y,z;
    int a=0,b=0,c=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){

        scanf("%d %d %d",&x,&y,&z);
        a+=x;
        b+=y;
        c+=z;


    }
    if(a==0 && b==0 && c==0){
        printf("YES\n");

    }
    else{
        printf("NO\n");

    }
    return 0;

}

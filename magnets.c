#include<stdio.h>

int main()

{
    int n,c=0,a,b=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){


        scanf("%d",&a);

        c+=a!=b;//same hole ekta group ,same na hole group arakta barba


        b=a;




    }
    printf("%d",c);




    return 0;
}



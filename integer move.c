#include<stdio.h>
#include<math.h>


int main()

{

    int n,i,x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d", &x,&y);
        z=(x*x + y*y);
        if(x==0 && y==0){
            printf("0\n");


        }
        else if((double)(sqrt(z)== (int)(sqrt(z)))){
            printf("1\n");
        }
        else{
            printf("2\n");
        }



    }

    return 0;

}

#include<stdio.h>
#include <stdlib.h>
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(int argc, char* argv[])

{
    int t,temp=0,c=0,i;

    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int ara[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);

        }
          qsort (ara, sizeof(ara)/sizeof(*ara), sizeof(*ara), comp);


      // for(int i=0;i<n;i++)printf("%d ",ara[i]);
        for(int i=n-1;i>=0;i--){
            if(ara[i]<=i+1){
                printf("%d\n",i+2);
                c=1;
                break;
            }

        }
        if(c==0)printf("1\n");
         c=0,i=0;
    }




    return 0;
}


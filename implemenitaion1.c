#include<stdio.h>

int main()

{
    int t,n,k,c=0;
    scanf("%d",&t);
    char table[1000000];
    for(int i=0;i<t;i++){
            scanf("%d %d",&n,&k);
            for(int i=0;i<n;i++){
                scanf("%s",&table[i]);
               // int same=table[i];

                if(table[i]==1){

                        table[i]=(table[i+k+1] && table[i-(k+1)]);
                        if(table[i]==0){
                            c++;
                        }
                        else{
                            continue;
                        }


                }
            }
            printf("%d",c);


    }






    return 0;
}

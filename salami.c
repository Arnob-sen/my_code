#include<stdio.h>

int main()

{
    int salami[10],roll,collected,max=0;

    for(int i=0;i<10;i++){

        salami[i]=0;

    }
    for(int i=0;i<10;i++){
         scanf("%d %d",&roll,&collected);
         salami[roll-1]+=collected;

    }
    for(int i=0;i<10;i++){
        if(salami[i]>max){
            max=salami[i];
        }
    }
    printf("maximum salami is %d \n",max);
    printf("the roll of the person \n");
            for (int i=0;i<10;i++){
        if(max==salami[i]){ // maximum  salami j index a ase tar sata 1+
            printf("roll is %d \n",i+1);
        }
    }




    return 0;
}

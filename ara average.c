#include<stdio.h>
void main()
{
    int marks_ara[5];
    int sum=0,i;
    for(i=0;i<5;i++){
            scanf("%d",&marks_ara[i]);
        sum=sum+marks_ara[i];
    }
    int avg= sum/5;
        printf("%d",avg);






    return 0;
}

#include<bits/stdc++.h>
#include<stdio.h>

int sum(int a,int b){

    return a+b;
}

int mi(int x,int y)
{

    return x-y;
}

int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);

   int result=sum(num1,num2);
    int minus=mi(num1,num2);
    printf("%d %d\n",result,minus);
    printf("%d %d",sum(num1,num2),mi(num1,num2));
}

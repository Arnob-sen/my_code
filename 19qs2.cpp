#include<stdio.h>

float function1(int a){

    float b=a%10;//x and i integer..bt a jodi float dai then kaz korbe na.
    b*=b;
  // return b;

}
int main()
{
    int x,i;
    for(i=0;i<=20;i+=2){
        x=function1(i);
        printf("%d\n",x);
    }
}

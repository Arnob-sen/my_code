#include <stdio.h>
int main()
{

    while(1)
    {int num;


    printf("enter the value\n");

    scanf("%d",&num);
    if(num>0){
        printf("%d is positive\n",num);

    }
    else if(num<0 && num%2==0){
        printf("%d is negative even\n",num);
    }
    else if(num<0){
        printf("%d",num);
    }


}
      return 0;
}

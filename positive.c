#include <stdio.h>
int main(){
   while(1)
    {
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    if(number<0){
            break;
    }
    printf("%d",number);

    }
        return 0;
}

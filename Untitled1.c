#include <stdio.h>
int main()
{
    double total_ammount,interest,ammount;
    printf("enter the ammount:");
    scanf("%lf",&ammount);
    printf("enter the interst rate:");
    scanf("%lf",&interest);
    total_ammount=ammount+interest/100;
    printf("%lf\n",total_ammount);
    return 0;
}

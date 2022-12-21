#include <stdio.h>
int main()
{double num1,num2,plus,minus,cross,divide;
printf("enter the 1st number:");
scanf("%lf",&num1);
printf("enter the 2nd number:");
scanf("%lf",&num2);
plus=num1+num2;
minus=num1-num2;
cross=num1*num2;
divide=num1/num2;
    printf("%.0lf+%.0lf=%0lf\n",num1,num2,plus);

    printf("%.0lf-%.0lf=%.0lf\n",num1,num2,minus);
    printf("%.0lf*%.0lf=%.0lf\n",num1,num2,cross);
    printf("%.0lf/%.0lf=%.0lf\n",num1,num2,divide);
    return 0;

}

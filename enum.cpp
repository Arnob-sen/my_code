#include<stdio.h>
enum days_of_week{

sun=1,mon,tues,wed,thus,fri,sat};



int main()
{
    enum days_of_week day1,day2;
    day1=fri;
    day2=sun;
    printf("%d",-day2+day1);


}

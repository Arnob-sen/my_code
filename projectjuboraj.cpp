#include<stdio.h>
#include<windows.h>
int n, money;
float temparetures, times, distances;
char baby[100000001];
void menu_button();
void press_key()
{
    int n;
    printf("\n\nWhat do you want?\nPress any one to continue -\t");
}
void exits()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tThanking for visiting our apps.\n\n\t\t\t\t\tHave a sweet dream.\n\n\n");
}
void dollar()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tHow much money you have?\n\n");
    printf("\t\t\t\t\t------------\t");scanf("%d", &money);
    printf("\n\n\n\n");system("CLS");
    printf("What do you want to convert it into?\n\n");
    printf("\t\t\t\t1. Euro\n\n");
    printf("\t\t\t\t2. Taka\n\n"); press_key();scanf("%d",&n);
    if(n == 1)
    {
        system("CLS");
        printf("\t\t\t\tToday Dollar to Euro convresion rate is 0.94 Euro.\n\n\n");
        printf("\n\t\t\t\t\tAfter conversion you have %.3f Euro.\n\n",0.94*money);
        printf("\n\n\n\n");
        printf("\t\t\t\t\tDo you want to stay with us?\n\n");
        printf("\t\t\t\t\t1. Yes\n\n");
        printf("\t\t\t\t\t2. No\n\n");
        printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
        if(n>0 && n<3)
        {
            if(n == 1) menu_button();
            if(n == 2) exits();
        }
        else  menu_button();
    }
    if(n == 2)
    {
        system("CLS");
        printf("\t\t\t\tToday Dollar to Taka convresion rate is 104 Taka.\n\n\n");
        printf("\n\t\t\t\t\tAfter conversion you have %d taka.\n\n",104*money); gets(baby);
        printf("\n\n\n\n");
        printf("\t\t\t\t\tDo you want to stay with us?\n\n");
        printf("\t\t\t\t\t1. Yes\n\n");
        printf("\t\t\t\t\t2. No\n\n");
        printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
        if(n>0 && n<3)
        {
            if(n == 1) menu_button();
            if(n == 2) exits();
        }
        else  menu_button();
    }
    else dollar();
}
void euro()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tHow much money you have?\n\n");
    printf("\t\t\t\t\t------------\t");scanf("%d", &money);
    printf("\n\n\n\n");system("CLS");
    printf("What do you want to convert it into?\n\n");
    printf("\t\t\t\t1. Dollar\n\n");
    printf("\t\t\t\t2. Taka\n\n"); press_key();scanf("%d",&n);
    if(n == 1)
    {
        system("CLS");
        printf("\t\t\t\tToday Euro to Dollar convresion rate is 1.06 Dollar.\n\n\n");
        printf("\n\t\t\t\t\tAfter conversion you have %.3f Dollar.\n\n",1.06*money); gets(baby);
        printf("\n\n\n\n");
        printf("\t\t\t\t\tDo you want to stay with us?\n\n");
        printf("\t\t\t\t\t1. Yes\n\n");
        printf("\t\t\t\t\t2. No\n\n");
        printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
        if(n>0 && n<3)
        {
            if(n == 1) menu_button();
            if(n == 2) exits();
        }
        else  menu_button();
    }
    if(n == 2)
    {
        system("CLS");
        printf("\t\t\t\tToday Euro to Taka convresion rate is 110.80 Taka.\n\n\n");
        printf("\n\t\t\t\t\tAfter conversion you have %.3f Taka.\n\n",110.80*money); gets(baby);
        printf("\n\n\n\n");
        printf("\t\t\t\t\tDo you want to stay with us?\n\n");
        printf("\t\t\t\t\t1. Yes\n\n");
        printf("\t\t\t\t\t2. No\n\n");
        printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
        if(n>0 && n<3)
        {
            if(n == 1) menu_button();
            if(n == 2) exits();
        }
        else  menu_button();
    }
    else euro();
}
void taka()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tHow much money you have?\n\n");
    printf("\t\t\t\t\t------------\t");scanf("%d", &money);
    printf("\n\n\n\n");system("CLS");
    printf("What do you want to convert it into?\n\n");
    printf("\t\t\t\t1. Dollar\n\n");
    printf("\t\t\t\t2. Euro\n\n"); press_key();scanf("%d",&n);
    if(n == 1)
    {
        system("CLS");
        printf("\t\t\t\tToday taka to Dollar convresion rate is 0.0096 Dollar.\n\n\n");
        printf("\n\t\t\t\t\tAfter conversion you have %.3f Dollar.\n\n",0.0096*money); gets(baby);
        printf("\n\n\n\n");
        printf("\t\t\t\t\tDo you want to stay with us?\n\n");
        printf("\t\t\t\t\t1. Yes\n\n");
        printf("\t\t\t\t\t2. No\n\n");
        printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
        if(n>0 && n<3)
        {
            if(n == 1) menu_button();
            if(n == 2) exits();
        }
        else  menu_button();
    }
    if(n == 2)
    {
        system("CLS");
        printf("\t\t\t\tToday Taka to Euro convresion rate is 0.0090 Euro.\n\n\n");
        printf("\n\t\t\t\t\tAfter conversion you have %.3f Euro.\n\n",0.0090*money); gets(baby);
        printf("\n\n\n\n");
        printf("\t\t\t\t\tDo you want to stay with us?\n\n");
        printf("\t\t\t\t\t1. Yes\n\n");
        printf("\t\t\t\t\t2. No\n\n");
        printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
        if(n>0 && n<3)
        {
            if(n == 1) menu_button();
            if(n == 2) exits();
        }
        else  menu_button();
    }
    else taka();
}
void m_mile()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in meter.\n\n");
    printf("Enter the meter you want to convert in mile\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given meter is - %.2f meters\n\n\n",distances);
    printf("After conversion meter to mile,\n\t\t\t\t\tThe length is - %.2f miles.\n\n\n",0.000621371*distances); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void m_km()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in meter.\n\n");
    printf("Enter the meter you want to convert in kilo-meter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given meter is - %.2f meters\n\n\n",distances);
    printf("After conversion meter to kilo-meter,\n\t\t\t\t\tThe length is - %.2f kilo-meter.\n\n\n",0.001*distances); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void m_cm()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in meter.\n\n");
    printf("Enter the meter you want to convert in centimeter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given meter is - %.2f meters\n\n\n",distances);
    printf("After conversion meter to centimeter,\n\t\t\t\t\tThe length is - %.2f centimeter.\n\n\n",100*distances); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void cm_m()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in centimeter.\n\n");
    printf("Enter the centimeter you want to convert in meter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given centimeter is - %.2f centimeters\n\n\n",distances);
    printf("After conversion centimeter to meter,\n\t\t\t\t\tThe length is - %.4f meter.\n\n",distances/100); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void cm_km()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in centimeter.\n\n");
    printf("Enter the centimeter you want to convert in kilo-meter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given centimeter is - %.2f centimeters\n\n\n",distances);
    printf("After conversion centimeter to kilo-meter,\n\t\t\t\t\tThe length is - %.4f kilo-meter.\n\n",distances/100000);gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void cm_mile()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in centimeter.\n\n");
    printf("Enter the centimeter you want to convert in miles\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given centimeter is - %.2f centimeters\n\n\n",distances);
    printf("After conversion centimeter to miles,\n\t\t\t\t\tThe length is - %.4f miles.\n\n",distances/160900); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void km_mile()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in kilo-meter.\n\n");
    printf("Enter the kilo-meter you want to convert in mile\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given kilo-meter is - %.2f kilo-meters\n\n\n",distances);
    printf("After conversion kilo-meter to mile,\n\t\t\t\t\tThe length is - %.2f miles.\n\n",distances/1.609); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void km_m()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in kilo-meter.\n\n");
    printf("Enter the kilo-meter you want to convert in meter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given kilo-meter is - %.2f kilo-meters\n\n\n",distances);
    printf("After conversion kilo-meter to meter,\n\t\t\t\t\tThe length is - %.2f meters.\n\n",distances*1000); gets(baby);
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void km_cm()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in kilo-meter.\n\n");
    printf("Enter the kilo-meter you want to convert in centimeter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given kilo-meter is - %.2f kilo-meters\n\n\n",distances);
    printf("After conversion kilo-meter to centimeter,\n\t\t\t\t\tThe length is - %.2f centimeters.\n\n",distances*1000);gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void mile_km()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in mile.\n\n");
    printf("Enter the mile you want to convert in kilo-meter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given  is - %.2f mile\n\n\n",distances);
    printf("After conversion mile to kilo-meter,\n\t\t\t\t\tThe length is - %.2f kilo-meter.\n\n",distances*1.609); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void mile_m()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in mile.\n\n");
    printf("Enter the mile you want to convert in meter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given  is - %.2f mile\n\n\n",distances);
    printf("After conversion mile to meter,\n\t\t\t\t\tThe length is - %.2f meters.\n\n",distances*1609); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void mile_cm()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the distance in mile.\n\n");
    printf("Enter the mile you want to convert in centimeter\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&distances);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given  is - %.2f mile\n\n\n",distances);
    printf("After conversion mile to centimeter,\n\t\t\t\t\tThe length is - %.2f centimeter.\n\n",distances*160934);gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void hr_min()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the Hour you want to convert in minute\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&times);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given hour is - %.2f hour\n\n\n",times);
    printf("After conversion hour to minute,\n\t\t\t\t\tThe time is - %.2f minutes.\n\n",60*times); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void hr_sec()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the Hour you want to convert in second\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&times);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given hour is - %.2f hour\n\n\n",times);
    printf("After conversion hour to second,\n\t\t\t\t\tThe time is - %.2f seconds.\n\n",60*60*times); gets(baby);
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void min_hr()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the minutes you want to convert in hour\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&times);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given minutes is - %.2f minutes\n\n\n",times);
    printf("After conversion minute to hour,\n\t\t\t\t\tThe time is - %.2f hour.\n\n",times/60); gets(baby);
    //system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void min_sec()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the minutes you want to convert in second\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&times);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given minutes is - %.2f minutes\n\n\n",times);
    printf("After conversion minutes to second,\n\t\t\t\t\tThe time is - %.2f seconds.\n\n",60*times); gets(baby);
    //system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void sec_hr()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the seconds you want to convert in hour\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&times);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given seconds is - %.2f seconds\n\n\n",times);
    printf("After conversion second to hour,\n\t\t\t\t\tThe time is - %.2f hour.\n\n",times/3600); gets(baby);
    //system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void sec_min()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Enter the seconds you want to convert in minute\n\n");
    printf("\t\t\t\t\t------------\t"); scanf("%f",&times);system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Your given seconds is - %.2f seconds\n\n\n",times);
    printf("After conversion second to minute,\n\t\t\t\t\tThe time is - %.2f minutes.\n\n",times/60); gets(baby);
    //system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void c_f()
{
    system("CLS");
    printf("\n\n\nEnter the celcius tempareture - \t");
    scanf("%f",&temparetures);
    printf("\n\nAfter conversion celcius to Ferhenhight, the tempareture is -\t%.2f Ferhenhight.\n\n",(temparetures * 9 / 5) + 32); gets(baby);
    //system("CLS");
    printf("\n\n\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void f_c()
{
    system("CLS");
    printf("\n\n\nEnter the Ferhenhight tempareture - \t");
    scanf("%f",&temparetures);
    printf("\n\nAfter conversion Ferhenhight to celcius, the tempareture is -\t%.2f Celcius.\n\n",(temparetures-32)*5)/9; gets(baby);
    printf("\n\n");
    printf("\t\t\t\t\tDo you want to stay with us?\n\n");
    printf("\t\t\t\t\t1. Yes\n\n");
    printf("\t\t\t\t\t2. No\n\n");
    printf("\n\n\n\n\t\t\t\t\tEnter your choice -----------"); scanf("%d",&n); //printf("\n\n");
    if(n>0 && n<3)
    {
        if(n == 1) menu_button();
        if(n == 2) exits();
    }
    else  menu_button();
}
void time()
{
    system("CLS");
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t\t1. Hour to Minute\n\n");
    printf("\t\t\t\t\t\t2. Hour to second\n\n\n\n\n");
    printf("\t\t\t\t\t\t3. Minute to Hour\n\n");
    printf("\t\t\t\t\t\t4. Minute to Second\n\n\n\n\n");
    printf("\t\t\t\t\t\t5. Second to Hour\n\n");
    printf("\t\t\t\t\t\t6. Second to Minute\n\n");
    press_key();scanf("%d",&n);
    if(n>0 && n<7)
    {
        if(n ==1)hr_min();
        if(n ==2)hr_sec();
        if(n ==3)min_hr();
        if(n ==4)min_sec();
        if(n ==5)sec_hr();
        if(n ==6)sec_min();
    }
    else
    {
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tEnter a valid key\n\n");
        gets(baby);time();
    }
}
void tempareture()
{
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t\t");
    printf("1. Celcius to Ferhenhight\n\n\n");
    printf("\t\t\t\t\t\t2. Ferhenhight to Celcius\n\n");
    press_key();
    scanf("%d",&n);
    if(n>0 && n<3)
    {
        if(n == 1) c_f();
        if(n == 2) f_c();
    }
    else
    {
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tEnter a valid key\n\n"); gets(baby);
        tempareture();
    }
}
void currency()
{
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t\tWhat currency do you have?\n\n");
    printf("\n\t\t\t\t\t\t\t\t1. Dollar\n");
    printf("\n\t\t\t\t\t\t\t\t2. Euro\n");
    printf("\n\t\t\t\t\t\t\t\t3. Taka\n");
    press_key();scanf("%d",&n);
    if(n>0 && n<4)
    {
        if(n == 1) dollar();
        if(n == 2) euro();
        if(n == 3) taka();
    }
    else
    {
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tEnter a valid key\n\n");
        gets(baby);
        currency();
    }
}
void distance()
{
    system("CLS");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t1. Meter to Mile\n\n");
    printf("\t\t\t\t\t\t2. Meter to Kilo-Meter\n\n");
    printf("\t\t\t\t\t\t3. Meter to Centimeter\n\n");
    printf("\t\t\t\t\t\t4. Centimeter to Meter\n\n");
    printf("\t\t\t\t\t\t5. Centimeter to Kilo-meter\n\n");
    printf("\t\t\t\t\t\t6. Centimeter to Mile\n\n");
    printf("\t\t\t\t\t\t7. Kilo-meter to Mile\n\n");
    printf("\t\t\t\t\t\t8. Kilo-meter to Meter\n\n");
    printf("\t\t\t\t\t\t9. Kilo-meter to Centimeter\n\n");
    printf("\t\t\t\t\t\t10. Mile to Kilo-meter\n\n");
    printf("\t\t\t\t\t\t11. Mile to Meter\n\n");
    printf("\t\t\t\t\t\t12. Mile to Centimeter\n\n");
    press_key();scanf("%d",&n);
    if(n>0 && n<13)
    {
        if(n ==1)m_mile();
        if(n ==2)m_km();
        if(n ==3)m_cm();
        if(n ==4)cm_m();
        if(n ==5)cm_km();
        if(n ==6)cm_mile();
        if(n ==7)km_mile();
        if(n ==8)km_m();
        if(n ==9)km_cm();
        if(n ==10)mile_km();
        if(n ==11)mile_m();
        if(n ==12)mile_cm();
    }
    else
    {
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tEnter a valid key\n\n");
        gets(baby);
        distance();
    }
}
void menu_button()
{
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
    printf("1. Distance");
    printf("\n\n\n\t\t\t\t\t\t");
    printf("2. Currency");
    printf("\n\n\n\t\t\t\t\t\t");
    printf("3. Tempareture");
    printf("\n\n\n\t\t\t\t\t\t");
    printf("4. Time");
    press_key();
    scanf("%d",&n);
    if( n>0 && n<5)
    {
            if(n == 1)
        {
            distance();
        }
        if(n == 2)
        {
            currency();
        }
        if(n == 3)
        {
            tempareture();
        }
        if(n == 4)
        {
            time();
        }
        gets(baby);
    }
    else
    {
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tEnter a valid key\n\n"); gets(baby);
        menu_button();
    }
}
int main()
{
    int n;
    system("COLOR 9");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
    printf("Welcome to unit-convertor");
    gets(baby);
    printf("\n\n\n\n\n");
    menu_button();
    return 0;
}

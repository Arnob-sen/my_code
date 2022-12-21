#include<stdio.h>
#include<string.h>

int main()
{
    char pass[100];
       puts("Enter Password: ");
    gets(pass);
    int a=0,b=0,c=0,e=0;
    int d=strlen(pass);
    if(d<8)printf("This is not a strong password.\n");
    else{
        for(int i=0;i<d;i++){
            if(pass[i]>='A'&&pass[i]<='Z')a++;
            else if(pass[i]>='a'&&pass[i]<='z')b++;
            else if(pass[i]>='0'&&pass[i]<='9')c++;
            else if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='^' || pass[i]=='&' || pass[i]=='*' || pass[i]=='(' ||pass[i]==')' || pass[i]=='+' || pass[i]=='-')e++;
        }
        if(d>=8 &&a>=1&&b>=1&&c>=1&&e>=1)printf("This is  a strong password.\n");
        else if(a==0)printf("This is not a strong password.\nUpper case letter missing.\n");
            else if(b==0)printf("This is not a strong password.\nlower case letter missing.\n");
        else if(c==0)printf("This is not a strong password.\ndigit  missing.\n");
    else if(e==0)printf("This is not a strong password.\nspecial character  letter missing.\n");

    }
}

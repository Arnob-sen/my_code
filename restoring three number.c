#include<stdio.h>
int main()
{
    int a,b,c,d,s,p,q;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c&&a>d)
    {



                s=a-b;
                p=a-c;
                q=a-d;
        printf("%d %d %d\t",s,p,q);

    }
   else if(b>a && b>c&&b>d)
    {
                s=b-a;
                p=b-c;
                q=b-d;


        printf("%d %d %d\t",s,p,q);

    }
    else if(c>b && c>a&&c>d)
    {

                s=c-b;
                p=c-a;
                q=c-d;

        printf("%d %d %d\t",s,p,q);

    }
    else
    {

                s=d-b;
                p=d-c;
                q=d-a;


        printf("%d %d %d\t",s,p,q);
    }






    return 0;
}

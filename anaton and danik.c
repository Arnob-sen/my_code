#include<stdio.h>
#include<string.h>

int main()

{
    int n,a=0,b=0;
    scanf("%d",&n);

    char str[n];
    scanf("%s",&str);

    int d=strlen(str);
    for(int i=0;i<d;i++){

        if(str[i]=='A'){
            a++;
        }
        else{
            b++;
        }

    }
    if(a>b)
    {

        printf("Anton\n");
    }


    else if(b>a){
        printf("Danik\n");
    }


    else{
        printf("Friendship\n");
    }





    return 0;
}

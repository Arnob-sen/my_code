#include<stdio.h>

int main()

{
    int t;

    char str[120];
    int a=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++){


        scanf("%s",&str);



        if(str[120]=="Tetrahedron"){
                a+=4;

        }

         if(str[120]=="Cube"){
                a+=6;

        }

         if(str[120]=="Octahedron"){
                a+=8;

        }

         if(str[120]=="Dodecahedron"){
                a+=12;

        }

         if(str[120]=="Icosahedron"){
                a+=20;

        }
    }


    printf("%d",a);



    return 0;
}

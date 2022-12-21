#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    file=fopen("text.txt","w");
    char name[10]="arnob";
    int d=strlen(name);
    if(file==0)printf("no\n");
    else {
            printf("yes\n");
            for(int i=0;i<d;i++)fputc(name[i],file);
            printf("have done\n");
        fclose(file);
    }




}

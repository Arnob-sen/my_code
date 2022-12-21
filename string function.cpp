#include<stdio.h>
#include<string.h>

void display(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        printf("%c ",str[i]);
        i++;
    }

}
int main(){

   char stri[]="arnob sen";
    display(stri);
}

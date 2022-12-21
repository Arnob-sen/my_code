
#include<stdio.h>
int main()
{

    int total_marks[20]={100,90,90,89,88,87,86,89,87,88,77,78,87,77,87,78,77,81,74,69};
    int marks,count,i;

    for(marks=60;marks<=100;marks++){
            count=0;
        for(i=0;i<40;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
    }
    printf("%d is the marks\t count\n",marks,count);
}

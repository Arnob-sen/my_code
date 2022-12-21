#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=0,j=0,k=0;i<4,k<8,j<20;i++) // 3 ta condition r jekunu ekta satisfied korlai loop gurbe
    {
        printf("%d %d %d\n",i,j,k);
        j+=2;
        k+=3;
    }
}

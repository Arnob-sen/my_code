#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{




    char c;
    char str[20];
    char sen[100];

    scanf("%c ", &c);
    scanf("%s ", &str);
    fgets(sen, sizeof(sen), stdin);

    printf("%c\n%s\n%s", c,str,sen);


    return 0;
}

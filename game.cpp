#include<stdio.h>
#include<string.h>
int main()
{
    char word[]="String";
    char s1[50];
    printf("Welcome to Hangman Game. Guess a word: ");
    gets(s1);

    int r =strcmp(word,s1);

    if(r==0)
    {
        printf("You've Won");
        return 0;
    }
    else
    {
        printf("Try again. One hint for you the word is related to programming.\n");
    }

    char s2[50];
    gets(s2);
    int r2 =strcmp(word,s2);

    if(r2==0)
    {
        printf("You've won");
        return 0;
    }
    else
    {
        printf("Try again. Another hint for you its a library function.\n");
    }

    char s3[50];
    gets(s3);
    int r3 =strcmp(word,s3);

    if(r3==0)
    {
        printf("You've won");
        return 0;
    }
    else
    {
        printf("Game Over");
        return 0;
    }

}

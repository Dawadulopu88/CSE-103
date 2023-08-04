#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It is Vowel");
        break;
    default:
        printf("It is Consonant");
        break;
    }


    return 0;
}

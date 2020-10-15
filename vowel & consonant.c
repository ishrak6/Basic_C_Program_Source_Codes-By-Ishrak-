#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Input a character: ");
    scanf("%c", &ch);
    switch(ch)
    {
    case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
            printf("%c is a vowel!", ch);
            break;
        default:
            printf("%c is consonant", ch);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A':    
    case 'a':printf("VOWEL");
    break;
    case 'E':
    case 'e':printf("VOWEL");
    break;
    case 'I':
    case 'i':printf("VOWEL");
    break;
    case 'O':
    case 'o':printf("VOWEL");
    break;
    case 'U':
    case 'u':printf("VOWEL");
    break;
    default:
    printf("CONSONANT");
    }
}
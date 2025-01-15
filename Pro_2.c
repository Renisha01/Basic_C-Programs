// WAP to find whether string is palindrome or not

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, flag = 0;
    char s[100];
    printf("Enter the String:");
    scanf("%s", s);
    // i checks from starting and j checks from ending if both elements are equal or not
    for (i = 0, j = strlen(s) - 1; i < strlen(s) / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 1;
        }
    }
    // if throught string is pallindrom than flag remains 0
    if (flag == 0)
    {
        printf("String is palindrome");
        return 0;
    }
    printf("String is not palindrome");

    return 0;
}
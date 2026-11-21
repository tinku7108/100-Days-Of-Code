
#include <stdio.h>

int main()
{
    char str[100], original[100], temp;
    int i, len = 0, flag = 1;

    printf("Enter a word: ");
    scanf("%99s", str);

    while(str[len] != '\0')
    {
        original[len] = str[len];
        len++;
    }
    original[len] = '\0';

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    for(i = 0; i < len; i++)
    {
        if(str[i] != original[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
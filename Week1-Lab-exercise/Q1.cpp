//Implement a language recogniser which accepts set of all strings over the alphabet?={a,b} containing an even number of a’s and an even number of b’s.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 0;
    int i = 0;
    char chr;
    char in[50];
    printf("Enter the string with 'a' and 'b': ");
    scanf("%s", in);

    while ((chr = in[i++]) != '\0')
    {
        switch (s)
        {
            case 0:
                if (chr == 'a')
                {
                    s = 1;
                }
                else if (chr == 'b')
                {
                    s = 3;
                }
                else
                {
                    printf("error");
                    exit(1); 
                }
                break;

            case 1:
                if (chr == 'a')
                {
                    s = 0;
                }
                else if (chr == 'b')
                {
                    s = 2;
                }
                else
                {
                    printf("error");
                    exit(1);
                }
                break;

            case 2:
                if (chr == 'a')
                {
                    s = 3;
                }
                else if (chr == 'b')
                {
                    s = 0;
                }
                else
                {
                    printf("error");
                    exit(1);
                }
                break;

            case 3:
                if (chr == 'a')
                {
                    s = 2;
                }
                else if (chr == 'b')
                {
                    s = 0;
                }
                else
                {
                    printf("error");
                    exit(1);
                }
                break;

            default:
                printf("invalid string");
                exit(1);
        }
    }

    if (s == 0)
    {
        printf("string is accepted");
    }
    else
    {
        printf("string is not accepted");
    }

    return 0;
}

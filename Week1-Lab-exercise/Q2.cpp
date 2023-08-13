#include <stdio.h>
#include <stdlib.h>

int main() {
    int s = 0, in = 0;
    char c;
    char i[20];

    printf("Enter the string with 'a' and 'b': ");
    scanf("%s", i);

    while (i[in] != '\0') {
        c = i[in];
        
        switch (s) {
            case 0:
                if (c == 'a')
                    s = 1;
                else if (c == 'b')
                    s = 3;
                else {
                    printf("error");
                    exit(0);
                }
                break;
            case 1:
                if (c == 'a')
                    s = 2;
                else if (c == 'b')
                    s = 3;
                else {
                    printf("error");
                    exit(0);
                }
                break;
            case 2:
                if (c == 'a')
                    s = 2;
                else if (c == 'b')
                    s = 3;
                else {
                    printf("error");
                    exit(0);
                }
                break;
            case 3:
                if (c == 'a')
                    s = 1;
                else if (c == 'b')
                    s = 4;
                else {
                    printf("error");
                    exit(0);
                }
                break;
            case 4:
                if (c == 'a')
                    s = 1;
                else if (c == 'b')
                    s = 4;
                else {
                    printf("error");
                    exit(0);
                }
                break;
        }
        in++;
    }

    if (s == 2 || s == 4) {
        printf("String Accepted\n");
    } else {
        printf("String Not Accepted\n");
    }

    return 0;
}


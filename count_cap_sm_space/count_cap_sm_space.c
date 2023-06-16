// problem_statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/count-it-2-2

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];

    fgets(s, sizeof(s), stdin);

    int capital = 0;
    int small = 0;
    int space = 0;

    for (int i = 0; i < sizeof(s); i++)
    {

        if (s[i] == '\0')
        {
            break;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }

        else if (s[i] == ' ')
        {
            space++;
        }
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}

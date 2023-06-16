// problem_statement
// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/small-and-capital

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int num;

    int newS[1001];

    for (int i = 0; i < strlen(s); i++)
    {
        num = s[i];
        newS[i] = num;
    }

    int cap = 0, sm = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (newS[i] > 64 && newS[i] < 91)
        {
            cap++;
        }

        else if (newS[i] > 96 && newS[i] < 123)
        {
            sm++;
        }
    }

    printf("%d %d", cap, sm);

    return 0;
}

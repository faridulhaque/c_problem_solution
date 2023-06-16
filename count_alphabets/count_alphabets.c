// problem_statement
// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-iii

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[1001];

    scanf("%s", s);

    char alp[26];

    int alpVal[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        alp[i] = 'a' + i;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        int pri = s[i];

        for (int i = 0; i < strlen(alp); i++)
        {
            if (alp[i] == pri)
            {
                alpVal[i]++;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", alp[i], alpVal[i]);
    }

    return 0;
}

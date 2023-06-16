// problem_statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/wow-patterns-again

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = n - i; j > 1; j--)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int k = 0; k < i + 1; k++)
            {
                printf("^");
            }

            for (int l = 0; l < i; l++)
            {
                printf("^");
            }
        }

        else
        {
            for (int k = 0; k < i + 1; k++)
            {
                printf("*");
            }

            for (int l = 0; l < i; l++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}

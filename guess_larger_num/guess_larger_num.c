// problem_statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/who-wins-2-2

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int tiger = 0;
    int pathan = 0;

    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d%d", &x1, &x2);

        if (x1 > x2)
        {
            tiger++;
        }
        else if (x2 > x1)
        {
            pathan++;
        }

        else
        {
            tiger++;
            pathan++;
        }
    }

    if (tiger > pathan)
    {
        printf("Tiger");
    }

    else if (tiger < pathan)
    {
        printf("Pathan");
    }

    else
    {
        printf("Draw");
    }

    return 0;
}

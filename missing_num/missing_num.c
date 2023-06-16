// problem_statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/missing-number-31-1

#include <stdio.h>

int sol()
{
    int s, a, b, c;
    scanf("%d%d%d%d", &s, &a, &b, &c);
    return s - (a + b + c);
}

int main()
{
    int t;
    scanf("%d", &t);

    int res[t];

    for (int i = 0; i < t; i++)
    {
        res[i] = sol();
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", res[i]);
    }

    return 0;
}

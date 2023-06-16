// problem_statement
// https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/reverse-and-even

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d ", a[i]);
    }

    return 0;
}

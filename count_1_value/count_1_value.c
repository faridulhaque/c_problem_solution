// problem_statement

// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/find-it-2-5/problem

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

    int x;
    scanf("%d", &x);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

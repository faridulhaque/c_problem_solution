// problem_statement
// https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/even-and-odd-8-1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;

    int sumOdd = 0;
    int sumEven = 0;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            sumEven = sumEven + v[i];
        }

        else
        {
            sumOdd = sumOdd + v[i];
        }
    }

    printf("%d %d", sumEven, sumOdd);

    return 0;
}

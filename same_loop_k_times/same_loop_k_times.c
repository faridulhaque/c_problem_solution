// problem_statement
// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/do-the-same

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;

    int k;

    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 1; i <= k; i++)
    {
        for (int i = 1; i <= n; i++)
        {

            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

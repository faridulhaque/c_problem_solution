// problem_statement
// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/workers-1

#include <stdio.h>

int main()
{
    int m1, d, m2;

    scanf("%d%d%d", &m1, &m2, &d);

    printf("%d\n", (m1 * d) / m2);

    return 0;
}

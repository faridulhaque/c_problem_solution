// problem_state
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/middle-man-1

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {

        printf("%d %d", a[(n / 2) - 1], a[n / 2]);
    }
    else
    {
        printf("%d\n", a[n / 2]);
    }

    return 0;
}
// problem_statement

// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-i

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int oddC = 0;
    int evenC = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenC++;
        }
        else
        {
            oddC++;
        }
    }

    printf("%d %d", evenC, oddC);
    return 0;
}

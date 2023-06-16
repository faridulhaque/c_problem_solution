// problem_statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/unit-matrix

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int row, col;

    row = n;
    col = n;

    int a[row][col];

    int flag = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (!flag)
    {
        printf("NO");
    }

    else
    {
        printf("YES");
    }

    return 0;
}

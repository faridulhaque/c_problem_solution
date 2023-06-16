// problem_statement
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/matrix-38

#include <stdio.h>

int main()
{

    int row, col;

    scanf("%d%d", &row, &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // printing last row
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == row - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n");

    // printing last column
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == col - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}

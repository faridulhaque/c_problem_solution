// problem_statement
// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-03/challenges/shopping-13/problem



#include <stdio.h>
int main()
{

    long int N;
    long int remaining;
    scanf("%ld", &N);

    if (N <= 2147483648 && N >= 1)
    {
        // printf("correct input");
        if (N > 1000)
        {

            remaining = N - 1000;

            if (remaining >= 500)
            {
                printf("I will buy Punjabi\n");
                printf("I will buy new shoes\n");
                printf("Alisa will buy new shoes\n");
            }

            else
            {
                printf("I will buy Punjabi\n");
            }
        }

        else
        {
            printf("Bad luck!");
        }
    }

    else
    {
        printf("wrong input");
    }

    return 0;
}
// problem_statement
// https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-2-1-1

#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    scanf("%s", a);

    int vowel = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            vowel++;
        }
    }
    printf("%d\n", vowel);
    return 0;
}

// problem_statement
// https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/can-you-do-it-2-2/problem



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d", &n);

if(n > 0){
    for(int i= 1; i <=n;i++ ){
        printf("%d ", i);
    }
}

else{
    for(int i = n; i < 2; i++){
        printf("%d ", i);
    }
}

    return 0;
}

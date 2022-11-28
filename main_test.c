#include <stdio.h>
#include "mylib/mylib.h"

int main(void)
{
    int N;
    printf("enter a number: ");
    scanf("%d", &N);

    printf("the fibonacci number for %d is %d (iterative)\n", N, fibonacciIterative(N));
    printf("the fibonacci number for %d is %d (recursive)\n", N, fibonacciRecursive(N));

    for (int i = 0; i <= N; i++)
    {
        if (fibonacciIterative(i) != fibonacciRecursive(i))
        {
            printf("ERROR at %i\n", i);
        }
        else
        {
            printf("The fibonacci number F%d = %d = %d\n", i, fibonacciIterative(i), fibonacciRecursive(i));
        }
    }
    return 0;
}
// Fibonacci Series using Recursion
#include <stdio.h>
#include <time.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    clock_t begin = clock();
    int n = 35;
    printf("%d\n", fib(n));
    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elpased is %f seconds\n", time_spent);
    return 0;
}

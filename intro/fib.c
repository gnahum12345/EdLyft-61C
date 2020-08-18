#include <stdio.h>
#include <time.h>
// Fibonacci Series using Recursion
int fibr(int n) {
    if (n <= 1)
        return n;
    return fibr(n - 1) + fibr(n - 2);
}
int fibi(int n) {
    int f[n + 1];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main()
{
    int n = 40;
    clock_t begin = clock();
    printf("%d\n", fibi(n));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased for iterative is %f seconds\n", time_spent);
    begin = clock();
    printf("%d\n", fibr(n));
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elpased for recursive is %f seconds\n", time_spent);

    return 0;
}

# Fibonacci Series using Recursion
import time

def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)


def main():
    n = 35
    begin = time.time()
    print(fib(n))
    end = time.time()
    print('Time elpased is %f seconds' % (end - begin))


if '__main__' == __name__:
    main()

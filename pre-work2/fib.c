// Fibonacciiiiii wooohooooooo (use recursion) 

#include <stdio.h> 
#include <time.h> 

int fib(int n) { 
   if (n <= 1) { 
      return n;  
   } 
   return fib(n-1) + fib(n-2); 
} 

int main() {
   int n = 30; 
   clock_t begin = clock(); 
   int n20 = fib(n); 
   clock_t end = clock(); 
   
   double time_spent = (double) (end - begin) / CLOCKS_PER_SEC; 
   printf("%d: %d\n", n, n20); 
   printf("Time elpased is %f seconds\n", time_spent); 

   return 0; // 0 is executed perfectly. Everything that could well, went well. 
            // not 0, means went sideways.  
} 

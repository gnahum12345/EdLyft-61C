// Edlyft cs61c Pre-Work Session Homewok 0 
/* IGNORE THE TOP LINES HERE */ 
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#include <stdio.h> 

int factorial(int n) {
	/* TODO: Implement Factorial in C! 
	 * HINT: Use iterative. or Recursion. 
	 */ 
	if (n < 0) {
		return 0; // something is wrong!!! 
	} 
	if (n <= 1) {
		return 1; 
	}     
	return factorial(n-1)*n; 
}

int factorial_iter(int n) {
	int fact = 1; 
	for (int i = 1; i <= n; i++) {
		fact *= i; // i = 1,2,3,4,5....n; n*n-1*n-2*...*5*4*3*2*1. 
	}
 	return fact; 
}

int len(char *c) {
	/* TODO: Calculate the length of the string by having a counter and looping through c */ 
	// "hello world" = ['h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0']; 
	int i = 0; 
	while (*(c+i) != '\0') {  // *(c+i) == c[i]; 
		i++; 
	}
	return i; 
}


float max(float n, float m) {
	/* TODO: Returns the float that is the biggest */ 
	// Method 1: if statement. 
	/* 
	if (n > m ) {
        	return n; 
	} else {
		return m; 
	}
	*/ 

	// Method 2: Ternary operator. 
	return n > m ? n : m ; 
}

int main() {
	printf("Factorial of 10 is: %s  %d \n" RESET, factorial_iter(10) == 3628800 ? GREEN : RED, factorial_iter(10));
	printf("The length of the string \"HELLO WORLD\" is: %s %d\n" RESET, len("HELLO WORLD") == 11 ? GREEN : RED, len("HELLO WORLD")); 
	printf("Max of 43.5 and 25.6 is: %s %f \n" RESET , max(43.5, 25.6) == 43.5 ? GREEN : RED, max(43.5,55.6)); 
	
	printf("Factorial of 39: %d - See recording for why it is 0, or: shorturl.at/gOQ17 \n" ,factorial_iter(39)) ; 

	return 0; 
}


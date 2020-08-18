#include <stdio.h>
#include <string.h> 


/* 
         QUESTIONS:
  
Q)  What is `size_t`? 

A)   size_t is the number of bits needed for that variable. 
     i.e. if we have an "int" <==> 4 bytes <==> 32 bits. So everytime we increment the variable in memory, we will increment by 32 bits. 
          Alternatively if we had a "char" <==> 2 bytes <==> 16 bits. Everytime we increment the variable in memory, we will increment by 16 bits. 
     
     Textbook definition: size_t is an unsigned integer data type which can assign only 0 and greater than 0 integer values. It measure bytes of any object's size and returned by sizeof operator.
        source: https://stackoverflow.com/questions/2550774/what-is-size-t-in-c#:~:text=size_t%20is%20an%20unsigned%20integer%20data%20type%20which%20can%20assign,you%20can%20run%20the%20programm.
     0x432560 + 2 ==>  0x432562

Q) What is a pointer? 

A)    A pointer is a variable that contains the address in memory of the actual object. 
     If we have an `int *s`; then s contains the address of an int. 

Q) How do we get the pointer? 

A)    We use the "*"! i.e. *s will give us the value at the address. 


Q) How do we get the address? 

A)    There are a couple of ways! We can say "&var" to get the address or "var" if it is already a pointer. 


Visualizing this code: shorturl.at/cfRW1 
 - note that it may look a little different because we need to allocate memory (something we will go over on Wednesday!). 
*/

void reverse(char *x, int begin, int end) {
  char c; 
  if (begin >= end) {
     return ; //  byeeeeeeeee .  
  }  
  c = *(x + begin); //equivalent python ->  x[begin]   // x= 0x01 begin =2 (x+ 4) = 0x05
  *(x+ begin) = *(x + end); // x[begin] = x[end] 
  *(x+ end) = c;  // x[end] = c
  reverse(x, ++begin, --end); // reverse(x, begin +1, end - 1) 
} 

int main() {
   char a[100]; 
   gets(a); // a bit extra for 61c, but good to know. 
   printf("Original A: %s\n", a); 
   reverse(a, 0, strlen(a)-1); 
   printf("Reversed A: %s\n", a); 
   return 0; 
}

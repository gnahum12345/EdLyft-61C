#include <stdio.h>

int foo() {
  printf("I'm in foo\n"); 
  return 0; 
}

int main (int argc, char *argv[])
{
  int i, *p, count = 0;
  p = &(*(&count));

  for (i = 0; i < 10; i++) {
  	(*p)++;	//Do you understand this line of code and all the other permutations of the operators? ;)
  }
  foo();

  printf("Thanks for waddling through this program. Have a nice day. %d \n", *p);
  return 0;
}

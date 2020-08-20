#include <stdio.h>

/* BEGIN CHANGES */
#define V0 3
#define V1 2
#define V2 0  
#define V3 3
/* END CHANGES */

int main(void) {
	int a;
	char *s;

	/* This is a print statement. Notice the little 'f' at the end!
	It might be worthwhile to look up how printf works for your future
	debugging needs... */
        printf("Welcome to Edlyft!!!");

	/* for loop */
	for(a=0; a<V0; a++) {
		printf("Happy ");
	}
	printf("\n");

	/* switch statement
	*  DO NOT MODIFY THIS FUNCTION
	*/
	switch(V1) {
		case 0:		printf("Edlyft Dude\n");
		case 1: 	printf("C person\n");	break;
		case 2: 	printf("Tony\n");
		case 3: 	printf("Geetanshi\n");		break;
		case 4:		printf("Michael\n");	break;
		case 5:		printf("Zimin\n");
		default:	printf("I don't know these people!\n");
	}

	/* ternary operator */
	s = (V3==3) ? "Go" : "Boo";

	/* if statement */
	if(V2 == 0) {
		printf("\n%s BEARS!\n",s);
	} else  {
		printf("\n%s CARDINAL!\n",s);
	}

	return 0;
}

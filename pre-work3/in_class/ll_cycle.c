#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
} node;

int ll_has_cycle(node *head) {
	/* your code here */
	node *slow = head, *fast = head; 
	while (fast && fast->next && fast->next->next) { 
		fast = fast->next->next; 
 		slow = slow->next; 
		if (slow == fast) {
			return 1; 
		}  
	}
	return 0; 
}


void test_ll_has_cycle(void) {

	// DO NOT CHANGE ANYTHING IN THIS FUNCTION

	int i;
	node nodes[5]; //enough to run our tests
	for(i=0; i < sizeof(nodes)/sizeof(node); i++) {
		nodes[i].next = 0;
		nodes[i].value = 0;
	}
	nodes[0].next = &nodes[1];
	nodes[1].next = &nodes[2];
	nodes[2].next = &nodes[3];
        nodes[3].next = &nodes[0]; 
       
	printf("Checking first list for cycles. There should be a cycle, ll_has_cycle says it has %s cycle\n", ll_has_cycle(&nodes[0])?"a":"no");

	printf("Checking length-zero list for cycles. There should be none, ll_has_cycle says it has %s cycle\n", ll_has_cycle(NULL)?"a":"no");
}

int main(void) {
  test_ll_has_cycle();
  return 0;
}

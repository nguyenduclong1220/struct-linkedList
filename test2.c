#include <stdio.h>
#include <stdlib.h>

struct linkedList{
	int value;
	struct linkedList *next;
};

typedef struct linkedList *node;
node createNode(int value) {
	node temp; 
	temp = (node)malloc(sizeof(struct linkedList));
	temp -> next = NULL;
	temp -> data = value;
	return temp;
}

node insertTail(node head, int value) {
	node temp = createNode(value);
	node p;
	if(head == NULL) {
		head = temp; 
	}
	else {
		p = head;
		while(p -> next != NULL) {
			p = p -> next;
		}
		p -> next = temp;
	}
	return head;
}




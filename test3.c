#include <stdio.h>
#include <stdlib.h>

struct _node {
	int value;
	struct _node *next;
};

typedef struct _node Node;
Node *create(int x) {
	Node* temp = (Node*)malloc(sizeof(Node));
	temp -> next = NULL; 
	temp -> value = x; 
	return temp; 
}



#include <stdio.h>
#include <stdlib.h>

struct _node {
	int value;
	struct _node *next;
};

typedef struct _node Node;

// Create node
Node *create(int x) {
	Node* temp = (Node*)malloc(sizeof(Node));
	temp -> next = NULL; 
	temp -> value = x; 
	return temp; 
}

// Delete node 
void deleteNode(struct _node* node) {
	Node* temp = node -> next;
	node -> value = temp -> value;
	node -> next = temp -> next;
	free(temp);
}

// Insert node 
void insert(struct _node* list, int value) {
	
}

// Remove node
void remove(struct _node * list, int value) {
	
}

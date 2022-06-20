#include <stdio.h>

 struct A {
 	int a: 2;
 	char b; 
 }x;
 
 union Au {
 	int a: 2;
 	char b;
 };
int main () {
	struct A;
	union Au;
	printf("%d %d", sizeof( struct A), sizeof(union Au));
	printf("%p", &A.b );
	printf("%p", &Au);
}

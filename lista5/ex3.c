#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp;
	
	temp = *a;
	
	*a = *b;
	
	*b = temp;	
}

int main(void){
	int *a, *b;
	
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));	
	
	*a = 5;
	*b = 10;
	
	swap(a, b);
	
	printf("a: %d\n", *a);
	printf("b: %d\n", *b);	
	
	free(a);
	free(b);
	
	return 0;
}

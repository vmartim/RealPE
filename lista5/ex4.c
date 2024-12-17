#include <stdio.h>
#include <stdlib.h>

void inc(int *x){
	(*x)++;
}

int main(void){
	
	int *a;
	
	a = malloc(sizeof(int));
	
	scanf("%d", a);
	
	inc(a);
	
	printf("%d\n", *a);
	
	return 0;
}

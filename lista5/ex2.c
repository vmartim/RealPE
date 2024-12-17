#include <stdio.h>
#include <stdlib.h>

int main(void){

	char *letras;
	int n;

	scanf("%d", &n);

	letras = malloc(n * sizeof(char));
	
	getchar();
	
	for(int i = 0; i < n; i++){
		scanf("%c", &letras[i]);
	}
	
	for(int i = 0; i < n; i++){
		printf("entrada %d, conteudo %c, endereco %p\n", i, letras[i], letras + i);
	}

	return 0;
}

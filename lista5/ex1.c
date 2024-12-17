#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	
	double *notas, media = 0;
	int i, n;
	
	scanf("%d", &n);
	
	notas = malloc(n * sizeof(double));
	
	if(notas == NULL){
		printf("Nao ha memoria suficiente!\n");	
	}
	
	for(int i = 0; i < n; i++){
		scanf("%lf", &notas[i]);
		media += notas[i] / n;
	}
	
	printf("Média: %lf\n", media);
	
	free(notas);
	
	return 0;
}

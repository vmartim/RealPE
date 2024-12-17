#include <stdio.h>

#define MAX 100

void le_lista(int n, int valores[MAX]){
	printf("Digite os elementos: ");	

	for (int i = 0; i < n; i++){
		scanf("%d", &valores[i]);
	}
}

void ordena(int valores[MAX], int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if(valores[j] > valores[j+1]){
				int temp = valores[j];
				valores[j] = valores[j+1];
				valores[j+1] = temp;
			}
		}
	}
}

int main(void){
	int n, valores[MAX];

	printf("Digite o n: ");
	scanf("%d", &n);

	le_lista(n, valores);

	ordena(valores, n);

	printf("Lista ordenada: ");
	for(int i = 0; i < n; i++){
		printf("%d ", valores[i]);
	}
	
	printf("\n");

	return 0;
}
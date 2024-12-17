#include <stdio.h>

void le_vetor(double lista[], int n) {
	
	printf("Digite %d números\n", n);
	for (int i = 0; i < n; i++){
		scanf("%lf", &lista[i]);
	}
}

void produto_hadamard (double u [] , double v [] , double resultado []) {
	
	for (int i = 0; i < 100; i++){
		resultado[i] = u[i]*v[i];	
		
	}
}

int main(){
		
	int n;
	double v[100], u[100], res[100];
	
	printf("Digite o n: ");
	scanf("%d", &n);
	
	printf("v:: ");
	le_vetor(v, n);
	
	printf("u:: ");
	le_vetor(u, n);
	
	produto_hadamard(v, u, res);
	
	printf("Vetor resultante da multiplicação de v por u: \n");
	
	for(int i = 0; i < n; i++){
		
		printf("%.2lf ", res[i]);
	}
	
	printf("\n");
	
	return 0;
}

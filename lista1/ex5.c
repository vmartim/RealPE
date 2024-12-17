#include <stdio.h>


int main(){
	int e;
	double entrada, saida;
	
	printf("Qual a escala de entrada? (0 - Fahrenheit / 1 - Celsius)\n");
	scanf("%d", &e);
	
	printf("Qual é o parâmetro? ");
	scanf("%lf", &entrada);
	
	if(e == 0){
		saida = (entrada - 32.0) * (5.0/9.0);
	}else{
		saida = (9.0 * entrada / 5.0) + 32.0;
	}
	
	printf("Saída: %.2lf\n", saida);


	return 0;
}

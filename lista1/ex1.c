#include <stdio.h>

int main(){
	int teto;
	printf("Digite o número teto: ");
	scanf("%d", &teto);
	
	printf("Resultado: ");
	for(int i=0; i<=teto; i+=2){
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}

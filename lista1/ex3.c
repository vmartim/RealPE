#include <stdio.h>

int main(){
	int n;
	int multi=1;
	
	printf("Digite um inteiro n: ");
	scanf("%d", &n);
	
	for(int i=n; i>0; i--){
		multi*=i;
	}
	
	printf("O fatorial de n é: %d\n", multi);

	return 0;
}

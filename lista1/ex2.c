#include <stdio.h>

int primo(int a){
	int var = 1;
	for(int i=2; i<a; i++){
		if(a%i==0){
			var=0;
		}
	}
	return var;
}

int main(){
	int n, var;
	
	printf("Digite um inteiro n: ");
	scanf("%d", &n);
	
	printf("Lista de números primos até n: ");
	
	for (int i=2; i<=n; i++){
		if(primo(i)){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

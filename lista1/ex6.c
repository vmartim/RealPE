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
	int n;
	int cont = 0;
	int j = 2;
	
	printf("Digite o número de primos (n): ");
	scanf("%d", &n);

	printf("Primos: ");
	
	while(cont < n){
		if(primo(j)){
			printf("%d ",j);
			cont++;
		}
		j++;
	}
	
	printf("\n");
	
	return 0;
}

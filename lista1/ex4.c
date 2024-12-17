#include <stdio.h>

int fatorial(int f){
	int multi = 1;
	
	for (int i=f; i>0;i--){
		multi*=i;
	}
	
	return multi;
}

int main(){
	int n,k;
	
	printf("Digite o valor de n e k: ");
	scanf("%d %d", &n, &k);
	
	int res = fatorial(n)/(fatorial(k)*fatorial(n-k));
	
	printf("Combinatória de k em n: %d\n", res);

	return 0;
}

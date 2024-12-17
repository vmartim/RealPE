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
	
	int i, j;	
		
	printf("Digite i e j: ");
	scanf("%d %d", &i, &j);
	
	printf("Primos entre i e j: ");
	
	for (int x = i; x <= j; x++){
		if(primo(x)){
			printf("%d ", x);
		}
	}
	
	printf("\n");

	return 0;
}

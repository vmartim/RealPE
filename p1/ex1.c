#include <stdio.h>

#define MAX 100

int main(void){
	char text[MAX];
	int len = 0;
	
	fgets(text, MAX, stdin);

	while(text[len] != '\0'){
		len++;
	}
	len--;
	
	int verifica = 1;
	
	for(int i = 0; i < len / 2; i++){
		if(text[i] != text[len - i - 1]){
			verifica = 0;
			break;
		}
	}
	
	if(verifica){
		printf("eh palindromo!\n");
	}else{
		printf("nao eh palindromo!\n");
	}
	
	return 0;
}

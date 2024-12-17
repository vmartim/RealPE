#include <stdio.h>

#define MAX 100

typedef struct{
	char nota;
	int casa;
} Nota;

typedef struct{
	Nota notas[MAX];
	int tamanho;
} Musica;

void musica_print_tab(Musica musica){	
	char list[4] = {'A', 'E', 'C', 'G'};
	
	for(int j = 0; j < 4; j++){
		printf("%c|-", list[j]);
		
		for(int i = 0; i < musica.tamanho; i++){		
			if(musica.notas[i].nota == list[j]){
				printf("%d", musica.notas[i]. casa);
			}else{printf("-");}
			
			printf("-");
		}
		
		printf("|\n");
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	getchar();
	
	Musica musica;
	musica.tamanho = n;
	
	for(int i = 0; i < n; i++){
		Nota novaNota;
		
		scanf("%c", &novaNota.nota);
		
		scanf("%d", &novaNota.casa);
		
		getchar();
		
		musica.notas[i] = novaNota;
	}
	
	musica_print_tab(musica);

	return 0;
}

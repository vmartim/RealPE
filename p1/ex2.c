#include <stdio.h>

#define MAX 100

int verifica_linha_coluna(int mat[MAX][MAX], int n, int m, int referencia){
	int sumLinha, sumColuna;
	
	//verifica linha
	for(int i = 0; i < n; i++){
		sumLinha = 0;
		
		for(int j = 0; j < m; j++){sumLinha += mat[i][j];}
		
		if (sumLinha != referencia){return 0;}
	}
	
	//verifica coluna
	for(int j = 0; j < m; j++){
		sumColuna = 0;
		
		for(int i = 0; i < m; i++){sumColuna += mat[i][j];}
		
		if (sumColuna != referencia){return 0;}
	}
	
	return 1;
}

int main(void){
	int n, m, mat[MAX][MAX];
	
	//le n e m
	scanf("%d", &n);
	scanf("%d", &m);
	
	//le matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &mat[i][j]);		
		}
	}
	
	//busca referencia
	int referencia = 0;	
	for(int i = 0; i < n; i++){
		referencia += mat[i][0]; 
	}
	
	//imprime resposta
	if(verifica_linha_coluna(mat, n, m, referencia)){
		printf("MAGICA\n");
	}else{
		printf("FALTOU MAGIA\n");
	}
	
	return 0;
}

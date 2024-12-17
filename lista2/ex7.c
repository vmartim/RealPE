#include <stdio.h>

#define MAX 100

void le_matriz(int n, int m, int A[MAX][MAX]){
	printf("Digite os elementos da matriz: ");	

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &A[i][j]);
		}	 
	}
}

void troca(int n, int m, int A[MAX][MAX], int B[MAX][MAX], int i, int j){
	i--;
	j--;
	
	for(int k = 0; k < n; k++){
		for(int l = 0; l < m; l++){
			if(k == i){
			    B[k][l] = A[j][l];
			}else if(k ==j){
			    B[k][l] = A[i][l];
			}else{
			    B[k][l] = A[k][l];   
			}
		}
	}
}

int main(void){
	int n, m, A[MAX][MAX], B[MAX][MAX], i, j;

	printf("Digite o numero n de linhas: ");
	scanf("%d", &n);

	printf("Digite o numero m de colunas: ");
	scanf("%d", &m);
	
	printf("Digite o numero i da linha a ser trocada: ");
	scanf("%d", &i);
	
	printf("Digite o numero j da linha a ser trocada: ");
	scanf("%d", &j);

	le_matriz(n, m, A);

	troca(n, m, A, B, i, j);		

	printf("Matriz trocada: \n");
	for(int x = 0; x < n; x++){
		for(int y = 0; y < m; y++){
			printf("%d ", B[x][y]);
		}

		printf("\n");
	}	

	return 0;
}
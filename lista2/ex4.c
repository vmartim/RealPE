#include <stdio.h>

#define MAX 100

void le_matriz (int n, int m, int mat[MAX][MAX]){
    
    int x;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
          scanf("%d", &x);
          
          mat[i][j] = x;
        }
    }
    
}

void imprime_matriz (int n, int m, int mat[MAX][MAX]){
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (mat[i][j] < 10){printf("0");};
                
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    
}

void soma (int n, int m, int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX]){
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j< m; j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
}


int main (){
    
    int n, m, mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];
    
    printf("Digite o numero n de linhas: ");
    scanf("%d", &n);
    
    printf("Digite o numeo m de colunas: ");
    scanf("%d", &m);
    
    printf("Digite os elementos da matriz 1: ");
    le_matriz(n, m, mat1);
    
    printf("Digite os elementos da matriz 2: ");
    le_matriz(n, m, mat2);
    
    soma(n, m, mat1, mat2, res);
    
    printf("Matriz resultante: \n");
    imprime_matriz(n, m, res);
    
    return 0;
}
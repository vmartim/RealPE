#include <stdio.h>

#define MAX 1000

void le_matriz(int n, int m, int mat[MAX][MAX]){
    
    int x;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &x);  
            
            mat[i][j] = x;
        }
    }
    
}

void imprime_matriz(int n, int m, int mat[MAX][MAX]){
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (mat[i][j] < 10){printf("0");}
                
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    
}

void gera_transposta (int n, int m, int mat[MAX][MAX], int trans[MAX][MAX]){
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            trans[j][i] = mat[i][j];
        }
    }    
    
}

int main(){

    int n, m, mat[MAX][MAX], trans[MAX][MAX];
    
    printf("Digite o numero n de linhas: ");
    scanf("%d", &n);
    
    printf("Digite o numero m de colunas: ");
    scanf("%d", &m);
    
    printf("Digite os elementos da matriz: ");
    le_matriz(n, m, mat);
    
    printf("A matriz digitada: \n");
    imprime_matriz(n, m, mat);
    
    gera_transposta(n, m, mat, trans);
    
    printf("Sua transposta: \n");
    imprime_matriz(n, m, trans);
    
    return 0;
}
#include <stdio.h>

#define MAX 1000

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

int simetrica (int n, int m, int mat[MAX][MAX]){
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (mat[i][j] != mat[j][i]){return 0;}
        }
    }
    
    return 1;
    
}


int main (){
    
    int n, m, mat[MAX][MAX];
    
    printf("Digite o numero n de linhas: ");
    scanf("%d", &n);
    
    printf("Digite o numeo m de colunas: ");
    scanf("%d", &m);
    
    printf("Digite os elementos da matriz: ");
    le_matriz(n, m, mat);
    
    printf("Matriz digitada: \n");
    imprime_matriz(n, m, mat);
    
    printf("A matriz digitada eh ");
    if(simetrica (n, m, mat) == 0){
        printf("nao simetrica");
    } else{
        printf("simetrica");
    }
    
    printf("\n");
    
    return 0;
}
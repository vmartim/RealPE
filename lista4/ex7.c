#include <stdio.h>

#define MAX 100

typedef struct{
    int ordem;
    int elementos[MAX][MAX];
} Matriz;

Matriz matriz_le(int n){
    Matriz novaMatriz;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &novaMatriz.elementos[i][j]);
        }
    }
    
    novaMatriz.ordem = n;
    
    return novaMatriz;
}

Matriz matriz_multiplica(Matriz A, Matriz B){
    Matriz novaMatriz;
    
    for(int i = 0; i < A.ordem; i++){
        for(int j = 0; j < A.ordem; j++){
            novaMatriz.elementos[i][j] = 0;
            
            for(int k = 0; k < A.ordem; k++){
                novaMatriz.elementos[i][j] += A.elementos[i][k] * B.elementos[k][j];        
            }
        }
    }
    
    return novaMatriz;
}

int main(void){
    int n;
    
    printf("Digite a dimensao n das matrizes: ");
    scanf("%d", &n);
    
    printf("Digite os elementos da Matriz A: ");
    Matriz A = matriz_le(n);
    
    printf("Digite os elementos da Matriz B: ");
    Matriz B = matriz_le(n);
    
    Matriz AB = matriz_multiplica(A, B);
    
    printf("Elementos de AxB\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", AB.elementos[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
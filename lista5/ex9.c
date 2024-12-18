#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** matriz_le(int* n, int* m){
    int** matriz = malloc(*n * sizeof(int*));
    
    for(int i = 0; i < *n; i++){
        matriz[i] = malloc(*m * sizeof(int));
    }
    
    for(int i = 0; i < *n; i++){
        for(int j = 0; j < *m; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    return matriz;
}

void matriz_print(int** matriz, int* n, int* m){
    printf("Matriz: \n");
    
    for(int i = 0; i < *n; i++){
        for(int j = 0; j < *m; j++){
            printf("%d ", *(*(matriz + i) + j));        
        }
        printf("\n");
    }
}

int main(void){
    int* n, *m;
    int** Matriz;
    
    n = malloc(sizeof(int));
    scanf("%d", n);
    
    m = malloc(sizeof(int));
    scanf("%d", m);
    
    Matriz = matriz_le(n, m);
    
    matriz_print(Matriz, n, m);
    
    return 0;
}
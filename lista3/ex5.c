#include <stdio.h>

#define MAX 100

void forma_matriz(int n, int mat[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int dist_topo = i;
            int dist_baixo = n - i - 1;
            int dist_esq = j;
            int dist_dir = n - j - 1;
            
            int dist = dist_topo;
            if(dist_baixo < dist){dist = dist_baixo;}
            if(dist_esq < dist){dist = dist_esq;}
            if(dist_dir < dist){dist = dist_dir;}

            mat[i][j] = dist + 1; 
        }
    }
}

int main(void) {
    int n, mat[MAX][MAX];
    
    printf("Digite a dimensao da matriz: ");
    scanf("%d", &n);
    
    forma_matriz(n, mat);
    
    printf("Matriz formada:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

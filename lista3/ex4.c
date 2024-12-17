#include <stdio.h>

#define MAX 100

void le_mat(int n, int m, int mat[MAX][MAX]){
    printf("Digite os elementos: ");
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

int sabre(int n, int m, int mat[MAX][MAX], int resp[MAX][MAX]){
    int count = 0;
    
    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < m - 1; j++){
            if(mat[i][j] == 42){
                if(mat[i+1][j] == 7 && mat[i+1][j+1] == 7 && mat[i][j+1] == 7 && mat[i-1][j+1] == 7 && mat[i-1][j] == 7 && 
                mat[i-1][j-1] == 7 && mat[i][j-1] == 7 && mat[i+1][j-1] ==7){
                    resp[count][0] = i;
                    resp[count][1] = j;
                    
                    count++;
                }
            }   
        }
    }
    
    return count;
}

int main(void){
    int n, m, mat[MAX][MAX], resp[MAX][MAX];
    
    printf("Digite o numero n de linhas: ");
    scanf("%d", &n);
    
    printf("Digite o numero m de colunas: ");
    scanf("%d", &m);
    
    le_mat(n, m, mat);
    
    int nsabres = sabre(n, m, mat, resp);
    
    printf("Matriz digitada: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    if(nsabres == 0){
        printf("Nenhum sabre encontrado");
    }
    else{
        printf("Coordenadas dos sabres encontrados:\n");
        for(int i = 0; i < nsabres; i++){
            printf("(%d, %d)\n", resp[i][0], resp[i][1]);
        }
    }
    
    return 0;
}
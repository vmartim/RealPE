#include <stdio.h>

#define MAX 9

void le_mat(int mat[MAX][MAX]){
    printf("Digite os elementos: ");
    
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

int verifica_linha_e_coluna(int mat[MAX][MAX]){
    int count_linha, count_coluna;
    
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            count_linha = 0; 
            count_coluna = 0;
            
            for(int k = 0; k < MAX; k++){
                if(mat[i][j] == mat[i][k]){
                    count_linha++;
                }
                if(mat[i][j] == mat[k][j]){
                    count_coluna++;
                }
            }
            
            if(count_linha > 1 || count_coluna > 1){
                return 0;
            }
        }
    }
    
    return 1;
}

int main(void){
    int mat[MAX][MAX];
    
    le_mat(mat);
    
    if(verifica_linha_e_coluna(mat)){
        printf("A matriz pode ser sudoku\n");
    }
    else{
        printf("A matriz nao pode ser sudoku\n");
    }
    
    return 0;
}
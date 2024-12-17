#include <stdio.h>

#define MAX 10

void le_mat(int n, int mat[MAX][MAX]){
    printf("Digite os elementos: ");
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    };
}

double operacao(int n, char letra, int mat[MAX][MAX]){
    if(letra == 'S'){
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += mat[i][i];    
        }
        
        return (double)sum;
    }
    else if(letra == 'M'){
        int sum = 0;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                sum += mat[i][j];
                count++;
            }
        }
        
        return (double)sum/count;
    }
    else{
        return 0.0;
    }
}

int main(void){
    int n, mat[MAX][MAX];
    char letra;
    
    printf("Digite o n: ");
    scanf("%d", &n);
    
    le_mat(n, mat);
    
    getchar();
    
    printf("Digite a letra: ");
    scanf("%c", &letra);
    
    if(letra == 'S'){
        printf("Soma dos elementos da diagonal principal: %.2lf", operacao(n, letra, mat));
    }
    else if(letra == 'M'){
        printf("Media dos elementos superiores: %.2lf", operacao(n, letra, mat));
    }
    else{printf("Caracter digitado nao eh valido");}
    
    
    return 0;
}
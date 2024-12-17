#include <stdio.h>

#define MAX 1000

int busca(int valores[], int n, int chave){
    for(int i = 0; i< n; i++){
        
        if(valores[i] == chave){
            return i;
        }
    }

    return -1;
}

int main() {

    int n, chave, valores[MAX], x;
    
    printf("Digite n: \n");
    scanf("%d", &n);

    printf("Digite a chave: \n");
    scanf("%d", &chave);

    printf("Digite a sequencia: \n");
    
    for (int i = 0; i < n; i++){
        scanf("%d", &x);

        valores[i] = x;
    }

    printf("Resultado: %d \n", busca(valores, n, chave));
    
    return 0;
}
#include <stdio.h>

#define MAX 1000

void ordena(int n, int list[MAX]){

    int maior, posicao, inicial;

    for(int i = 0; i < n; i++){
        maior = list[i];
        posicao = i;
        inicial = list[i];
    
        for(int j = i+1; j < n; j++){
            if(list[j] > maior){
                maior = list[j];
                posicao = j;
            }
        }
        
        if (maior != inicial){
            list[posicao] = inicial;
            list[i] = maior;
        }
    }
}

int main() {

    int n, list[MAX], x;
    
    printf("Digite o n: ");
    scanf("%d", &n);

    printf("Digite a sequencia: \n");
    
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        list[i] = x;
    }

    printf("Ordenado: \n");

    ordena(n, list);
    
    for(int i = 0; i < n; i++){
        printf("%d ", list[i]);
    }

    
    return 0;
}
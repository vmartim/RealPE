#include <stdio.h>

#define MAX 100

void le_vet(int vet[MAX], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
}

typedef struct{
    int elementos[MAX];
    int tamanho;
} Conjunto;

Conjunto conjunto(int vet[], int n){
    Conjunto novoConjunto;
    
    int count = 0;
    for(int i = 0; i < n; i++){
        novoConjunto.elementos[i] = vet[i];
        count++;
    }
    
    novoConjunto.tamanho = count;
    
    return novoConjunto;
}

Conjunto conjunto_uniao(Conjunto A, Conjunto B){
    for(int i = 0; i < A.tamanho; i++){
        int valida = 0;
        int indiceIncremento = B.tamanho - 1;
        
        for(int j = 0; j < B.tamanho; j++){
            if(A.elementos[i] == B.elementos[j]){valida = 1; break;}
        }
        
        if(valida == 1){continue;}
        
        indiceIncremento++;
        B.elementos[indiceIncremento] = A.elementos[i];
        B.tamanho++;
    }
    
    return B;
}

char conjunto_pertence(int a, Conjunto A){
    for(int i = 0; i < A.tamanho; i++){
        if(A.elementos[i] == a){return 1;}
    }
    
    return 0;
}

int main(void){
    int vetA[MAX], vetB[MAX], n, m, x;
    
    printf("Digite a quantidade de elementos em A: ");
    scanf("%d", &n);
    
    printf("Digite os elementos em A: ");
    le_vet(vetA, n);
    
    printf("Digite a quantidade de elementos em B: ");
    scanf("%d", &m);
    
    printf("Digite os elementos em B: ");
    le_vet(vetB, m);
    
    Conjunto A = conjunto(vetA, n);
    Conjunto B = conjunto(vetB, m);
    
    printf("A uniao de A com B: ");
    Conjunto AB = conjunto_uniao(A, B);
    for(int i = 0; i < AB.tamanho; i++){
        i == AB.tamanho - 1 ? printf("%d", AB.elementos[i]) : printf("%d, ", AB.elementos[i]);
    }
    
    printf("\nDigite um teste x: ");
    scanf("%d", &x);
    
    if(conjunto_pertence(x, AB)){
        printf("O teste pertence a AB");
    }else{
        printf("O teste nao pertence a AB");
    }
    
    return 0;
}
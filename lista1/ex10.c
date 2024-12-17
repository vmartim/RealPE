#include <stdio.h>

#define MAX 1000

void le_vetor ( int entrada[MAX] , int n){
    int x;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
    
        entrada[i] = x;
    }
}
    
int minimo ( int v [] , int n){
    int menor;
    menor = v[0];
    
    for (int i = 1; i < n; i++){
        if (v[i] < menor){
            menor = v[i];
        }
    }

    return menor;
} 

int maximo ( int v [] , int n){
    int maior;
    maior = v[0];
    
    for (int i = 1; i < n; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }

    return maior;
} 

double media ( int v [] , int n ){
    double media; 
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += v[i];
    }

    media = sum / (double)n;

    return media;
}

int main() {

    int n, entrada[MAX];

    printf("Digite o n: ");
    scanf("%d", &n);

    printf("Digite a sequencia: ");
    le_vetor(entrada, n);
    
    printf("O menor da sequencia: %d \n", minimo(entrada, n));

    printf("O maior da sequencia: %d \n", maximo(entrada,n));

    printf("A média: %.2lf \n", media(entrada, n));
    
    return 0;
}
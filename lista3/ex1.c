#include <stdio.h>

#define MAX 100

int busca_binaria(int valores[MAX], int n, int chave) {
    int ini = 0;
    int fim = n - 1;

    while (ini <= fim) {
        int meio = (ini + fim) / 2;

        if (valores[meio] == chave) {
            while (meio > 0 && valores[meio - 1] == chave) {
                meio--;
            }
            
            return meio;
        }
        else if (chave < valores[meio]) {
            fim = meio - 1;
        }
        else {
            ini = meio + 1;
        }
    }

    return -1;
}

int main() {
    int n, chave, valores[MAX];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("Digite os elementos do vetor em ordem não decrescente:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);

    int resultado = busca_binaria(valores, n, chave);

    if (resultado != -1) {
        printf("O menor índice em que %d aparece é: %d\n", chave, resultado);
    }
    else {
        printf("O valor %d não foi encontrado no vetor\n", chave);
    }

    return 0;
}

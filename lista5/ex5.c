#include <stdio.h>

// Função para trocar os endereços para onde os ponteiros apontam
void swap(int** a, int** b) {
    int* temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Definição dos arrays
    int a[] = {5, 6, 7};
    int b[] = {1, 2, 0, 8};
    
    // Ponteiros para os arrays
    int* pa = a;
    int* pb = b;

    // Imprime os valores originais
    printf("Antes da troca:\n");
    printf("Array a: ");
    for (int i = 0; i < 3; i++) printf("%d ", pa[i]);
    printf("\nArray b: ");
    for (int i = 0; i < 4; i++) printf("%d ", pb[i]);
    printf("\n");

    // Troca os ponteiros
    swap(&pa, &pb);

    // Imprime os valores após a troca
    printf("\nDepois da troca:\n");
    printf("Array a: ");
    for (int i = 0; i < 4; i++) printf("%d ", pa[i]);
    printf("\nArray b: ");
    for (int i = 0; i < 3; i++) printf("%d ", pb[i]);
    printf("\n");

    return 0;
}

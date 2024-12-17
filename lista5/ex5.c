#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b, int n, int m) {
    int temp;
    int i;
    
    // Trocar os valores dos arrays a e b até o menor tamanho
    for (i = 0; i < n && i < m; i++) {
        temp = *(a + i);     // Armazena o valor de a[i] em temp
        *(a + i) = *(b + i); // Atribui o valor de b[i] em a[i]
        *(b + i) = temp;     // Atribui o valor armazenado em temp (de a[i]) em b[i]
    }

    // Preencher o array a com os elementos restantes de b, se necessário
    if (n < m) {
        for (i = n; i < m; i++) {
            *(a + i) = *(b + i);  // Copia os elementos restantes de b para a
        }
    }

    // Preencher o array b com os elementos restantes de a, se necessário
    if (m < n) {
        for (i = m; i < n; i++) {
            *(b + i) = *(a + i);  // Copia os elementos restantes de a para b
        }
    }
}

int main(void) {
    int *a, *b;
    int n, m;
    
    // Leitura do tamanho e elementos do array a
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Leitura do tamanho e elementos do array b
    scanf("%d", &m);
    b = malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    
    // Chama a função swap
    swap(a, b, n, m);
    
    // Imprimir o conteúdo de a após a troca
    printf("Conteúdo de a: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }
    
    // Imprimir o conteúdo de b após a troca
    printf("\nConteúdo de b: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    // Liberar a memória alocada
    free(a);
    free(b);
    
    return 0;
}


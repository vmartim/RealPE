#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* revert(char* s) {
    if (s == NULL) {
        return NULL; // Verificação de segurança para entrada nula
    }

    int len = strlen(s); // Comprimento da string original
    char* reversed = (char*)malloc((len + 1) * sizeof(char)); // Alocação para a string revertida

    if (reversed == NULL) {
        return NULL; // Verificação de falha na alocação de memória
    }

    for (int i = 0; i < len; i++) {
        reversed[i] = s[len - i - 1]; // Copia os caracteres em ordem reversa
    }

    reversed[len] = '\0'; // Finaliza a string com o caractere nulo

    return reversed;
}

int main() {
    char original[100]; // Define um buffer para entrada do usuário (tamanho arbitrário)
    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin); // Lê a string com segurança, incluindo espaços

    // Remove o caractere de nova linha ('\n') se estiver presente
    size_t len = strlen(original);
    if (len > 0 && original[len - 1] == '\n') {
        original[len - 1] = '\0';
    }

    char* reversed = revert(original);

    if (reversed != NULL) {
        printf("Original: %s\n", original);
        printf("Revertida: %s\n", reversed);
        free(reversed); // Libera a memória alocada
    } else {
        printf("Erro ao reverter a string.\n");
    }

    return 0;
}

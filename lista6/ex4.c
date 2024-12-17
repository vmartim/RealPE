#include <stdio.h>
#include <string.h>

#define MAX 100

void troca_word(char word[], int inicio, int fim) {
    // Caso base: se o início for maior ou igual ao fim, a palavra já está invertida
    if (inicio >= fim) {
        return;
    } else {
        // Troca os caracteres de 'inicio' e 'fim'
        char temp = word[inicio];
        word[inicio] = word[fim];
        word[fim] = temp;
        
        // Chama a função recursiva para inverter os caracteres internos
        troca_word(word, inicio + 1, fim - 1);
    }
}

int main(void) {   
    char word[MAX];  // Tamanho maior para suportar palavras maiores que 5 caracteres
    scanf("%s", word);  // Corrigido: não precisa do "&"
    
    int n = strlen(word);
    
    troca_word(word, 0, n - 1);
    
    printf("%s\n", word);  // Adicionando o "\n" para melhor formatação na saída

    return 0;
}

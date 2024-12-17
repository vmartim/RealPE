#include <stdio.h>

#define MAX 100

int tamanho_word(char word[MAX]){
    int i = 0;
    
    while(word[i] != '\0'){
        i++;
    }
    
    return i - 1;
}

int palindromo(char word[MAX], int tamanho){
    for(int i = 0; i < tamanho / 2; i++){
        if(word[i] != word[tamanho - 1 - i]){
            return 0;
        }
    }
    
    return 1;
}

int main(void){
    char word[MAX];
    
    printf("Digite a palavra: ");
    fgets(word, MAX, stdin);
    
    int tamanho = tamanho_word(word);
    
    if(palindromo(word, tamanho)){
        printf("A palavra escolhida eh palindromo");
    }else{
        printf("A palavra escolhida nao eh palindromo");
    }

    return 0;
}
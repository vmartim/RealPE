#include <stdio.h>

#define MAX 100

int len_word(char word[MAX]){
    int count = 0;
    
    while (word[count] != '\0' && word[count] != '\n') {
        count++;
    }
    
    return count;
}

void corrige_text(char text[MAX]){
    int len = len_word(text);
    if (text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }
}

int main(void){
    char text[MAX], word[MAX];
    
    int res = 0;
    int count = 0;
    
    printf("Digite o texto: ");
    fgets(text, MAX, stdin);
    corrige_text(text);

    printf("Digite a palavra procurada: ");
    fgets(word, MAX, stdin);
    corrige_text(word);
    
    int lenWord = len_word(word);
    
    for(int i = 0; text[i] != '\0'; i++){
        for(int j = 0; word[j] != '\0'; j++){
            if(text[i+j] == word[j]){
                count++;
            }
            else{
                count = 0;
            }
            
            if(count == lenWord){
                res = 1;
            }
        }
        
        count = 0;
    }
    
    if(res){
        printf("Sim");
    }
    else{
        printf("Nao");
    }
    
    return 0;
}
#include <stdio.h>

#define MAX 100

int main(void){
    char text[MAX];
    
    printf("Digite o texto: ");
    fgets(text, MAX, stdin);
    
    int i = 0;
    while(text[i] != '\0'){
        if(text[i] > 64 && text[i] < 91){
            text[i] += 32;
        }
        else if(text[i] > 96 && text[i] < 123){
            text[i] -= 32;
        }
        
        i++;    
    }
    
    printf("Texto modificado: ");
    i = 0;
    while(text[i] != '\0'){
        printf("%c", text[i]);
        
        i++;
    }
    return 0;
}
#include <stdio.h>

#define MAX 100

int main(){

    char texto[MAX], letra;
    
    printf("Digite a letra: ");
    scanf("%c", &letra);
    getchar();
    
    printf("Digite o texto: ");
    fgets(texto, MAX, stdin);

    printf("Resultado: ");
    
    int i = 0;
    do{
        printf("%c", texto[i]);
        i++;
        if(texto[i] == letra){
            printf("%c", letra);
        }
    }while((texto[i] != letra) && (texto[i] != '\0'));
    
    printf("\n");

    return 0;
}

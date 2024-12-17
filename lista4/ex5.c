#include <stdio.h>

#define MAX 300

int main(void)
{
    char text[MAX][MAX];
    int nLinhas;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &nLinhas);
    
    getchar();
    
    printf("Digite o texto: \n");
    for(int i = 0; i < nLinhas; i++){
        fgets(text[i], MAX, stdin);
    }
    
    int comprimentoAtual = 0;
    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; text[i][j] != '\0'; j++){
            if(text[i][j] != '\n' && text[i][j] != '\0'){
                if (comprimentoAtual == 80) {
                    printf("\n");
                    comprimentoAtual = 0;
                }
                printf("%c", text[i][j]);
                comprimentoAtual++;
            }
            else if(text[i][j] == '\n'){
                printf(" ");
            }
        }
    }
    
    return 0;
}

#include <stdio.h>

#define MAX 100

int main(void){

    char seq[MAX];
    
    printf("Digite a sequencia: ");
    fgets(seq, MAX, stdin);
    
    int i = 0;
    int maior = 0;
    int j, count;
    
    while(seq[i] != '\0'){
        count = 0;
        
        j = i; 
        
        if(seq[i] == '0'){
            while(seq[j] == '0'){
                count++;
                j++;
            }
        }
        
        if(count > maior){maior = count;}        
        
        i++;
    }
    
    printf("Tamanho da maior cadeia de 0's: %d\n", maior);
    
    return 0;
}

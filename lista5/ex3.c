#include <stdio.h>
#include <stdlib.h>

void swap(int** a, int** b){
    int* temp = *a;
    
    *a = *b;
    *b = temp;
}

int main(void){
    int *a, *b;
    
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    
    printf("Digite a: ");
    scanf("%d", a);
    
    printf("Digite o b: ");
    scanf("%d", b);
    
    swap(&a, &b);
    
    printf("Novo a: %d\n", *a);
    printf("Novo b: %d", *b);
    
    free(a);
    free(b);
    
    return 0;
}
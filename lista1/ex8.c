#include <stdio.h>

int main()
{
    int n;
    int i1 = 1, i2 = 1;
    int i3 = i1 + i2;
    
    printf("Digite o n: ");
    scanf("%d", &n);
    
    printf("Sequência de Fibonacci com %d elementos: \n", n);
    printf("%d %d ", i1, i2);
    
    for(int i = 3; i <= n; i++){
        
        printf("%d ", i3);
        
        i1=i2;
        i2=i3;
        i3=i1+i2;
    }
    
    return 0;
}
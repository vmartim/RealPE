#include <stdio.h>

#define MAX 100

int soma(int v[], int n){
    
    if(n == 0){
        return 0;
    }
    else{
        return v[n-1] + soma(v, n-1);
    }
}

int main(void){   
    
    int v[MAX] = {1,2,3,5};
    int n = 4;
    
    printf("%d", soma(v, n));

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 100

int gcd(int a, int b){
    
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(void){
    
    printf("%d", gcd(15, 5));
    
    return 0;
}
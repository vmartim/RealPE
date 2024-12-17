#include <stdio.h>

void count_down (int n){
    
    if(n == 1){
        printf("1");
    }else{
        printf("%d\n", n);
        
        count_down(n - 1);

    }
}

int main(void){   
    
    count_down(5);
    
    
    return 0;
}
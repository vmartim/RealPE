#include <stdio.h>

double power(double a, int b){
    
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }
    else{
        return power(a, b - 1) * a;
    }
}

int main(void){   
    
    printf("%.2lf\n", power(0, 9));

    return 0;
}
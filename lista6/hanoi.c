#include <stdio.h>

void hanoi(char orig, char  destino, int n, int aux) {

  if (n == 1) 
    printf("move de %c para %c\n", orig, destino);
  else {
    hanoi(orig, aux, n - 1, destino);
    printf("move de %c para %c\n", orig, destino);
    //hanoi(aux, d,  n - 1);
    hanoi(aux, destino,  n - 1, orig);
  }
}

int main(void) {
  hanoi('a', 'c', 3, 'b');

  return 0;
}
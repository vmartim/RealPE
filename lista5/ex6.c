#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strcat_c(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    char* result = malloc(len_a + len_b + 1);

    for (int i = 0; i < len_a; i++) {
        result[i] = a[i];
    }

    for (int i = 0; i < len_b; i++) {
        result[len_a + i] = b[i];
    }

    result[len_a + len_b] = '\0';

    return result;
}

int main() {
    char* string1 = "ola ";
    char* string2 = "alo";

    char* result = strcat_c(string1, string2);

    printf("Resultado: %s\n", result);
    free(result);

    return 0;
}

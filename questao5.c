#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i, soma = 0;
    for (i = 0; i <= 6; i++) {
    soma += 4 + i;
    }
    printf("A soma de todos os numeros 4 do domino e: %d\n", soma);
    system("pause");

    return 0;
}

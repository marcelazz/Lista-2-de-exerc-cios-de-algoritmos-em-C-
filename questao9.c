#include <stdio.h>
#include <stdlib.h>)

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %llu\n", n, fatorial);
    }
    system("pause");

    return 0;
}



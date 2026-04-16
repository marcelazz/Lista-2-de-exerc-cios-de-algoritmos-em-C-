#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, c, maior, meio, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
    maior = a;
    if (b >= c) {
    meio = b;
    menor = c;
    } else {
    meio = c;
    menor = b;
    }
    } else if (b >= a && b >= c) {
    maior = b;
    if (a >= c) {
    meio = a;
    menor = c;
    } else {
    meio = c;
    menor = a;
       }
    } else {
    maior = c;
    if (a >= b) {
    meio = a;
    menor = b;
    } else {
    meio = b;
    menor = a;
    }
    }

    printf("Ordem decrescente: %d, %d, %d\n", maior, meio, menor);
    system("pause");

    return 0;
}

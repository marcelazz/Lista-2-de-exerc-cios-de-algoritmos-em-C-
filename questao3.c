#include <stdio.h>
#include <stdlib.h> 

int mdc(int a, int b) {
    while (b != 0) {
    int resto = a % b;
    a = b;
    b = resto;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1); 
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    int resultado = mmc(num1, num2);
    printf("O MMC de %d e %d e: %d\n", num1, num2, resultado);

    system("pause");

    return 0;
}

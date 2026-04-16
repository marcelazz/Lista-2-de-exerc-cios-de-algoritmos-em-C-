#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, c;
    float media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0; 
    printf("A media dos valores %d, %d e %d �: %.2f\n", a, b, c, media);

    system("pause");

    return 0;
} 


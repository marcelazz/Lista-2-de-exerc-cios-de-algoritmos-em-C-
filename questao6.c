#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     

int main() {
    int numero_sorteado, tentativa, tentativas = 0;
    srand(time(NULL));
    numero_sorteado = rand() % 101; 

    printf("Tente adivinhar o numero sorteado (entre 0 e 100).\n");

    do {
    printf("Digite sua tentativa: ");
    scanf("%d", &tentativa);
    tentativas++;

    if (tentativa > numero_sorteado) {
    printf("O numero sorteado eh menor que %d.\n", tentativa);
    } else if (tentativa < numero_sorteado) {
    printf("O numero sorteado eh maior que %d.\n", tentativa);
    } else {
    printf("Parabens! Voce acertou o numero %d em %d tentativas.\n",
    numero_sorteado, tentativas);
    }
    } while (tentativa != numero_sorteado);

    system("pause");

    return 0;
}

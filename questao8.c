#include <stdio.h>
#include <stdlib.h> 

int main() {
    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;
    printf("Digite o tamanho do arquivo (em MB): ");
    scanf("%f", &tamanhoMB);

    printf("Digite a velocidade da internet (em Mbps): ");
    scanf("%f", &velocidadeMbps);

    tempoSegundos = (tamanhoMB * 8) / velocidadeMbps;
    tempoMinutos = tempoSegundos / 60;

    printf("Tempo aproximado de download: %.2f minutos\n", tempoMinutos);
    system("pause");

    return 0;
}

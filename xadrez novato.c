#include <stdio.h>

// Constantes para número de casas
#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {
    int i;

    // Torre: 5 casas à direita (for)
    printf("Torre (direita):\n");
    for (i = 0; i < TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Rainha: 8 casas à esquerda (while)
    printf("Rainha (esquerda):\n");
    i = 0;
    while (i < RAINHA) {
        printf("Esquerda\n");
        i++;
    }
    printf("\n");

    // Bispo: 5 casas diagonal superior direita (do-while), combinando cima e direita
    printf("Bispo (diagonal superior direita):\n");
    i = 0;
    do {
        printf("Cima\nDireita\n");
        i++;
    } while (i < BISPO);

    return 0;
}

#include <stdio.h>

// Constantes simples para as movimentações
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8
#define CAVALO_CIMA 2
#define CAVALO_DIREITA 1

// Recursão para Torre: move direita até zerar
void torreDireita(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    torreDireita(casas - 1);
}

// Recursão para Rainha: move esquerda até zerar
void rainhaEsquerda(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    rainhaEsquerda(casas - 1);
}

// Loops aninhados para Bispo: diagonal com cima e direita
void bispoDiagonal() {
    int i, j;
    for (i = 0; i < BISPO_CASAS; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
    }
}

// Loop complexo para Cavalo: L com 2 cima e 1 direita, usando continue e break
void cavaloL() {
    int total = CAVALO_CIMA + CAVALO_DIREITA;
    int i;
    for (i = 0; i < total; i++) {
        if (i < CAVALO_CIMA) {
            printf("Cima\n");
            continue;  // Continua para o próximo passo
        }
        if (i == CAVALO_CIMA) {
            printf("Direita\n");
            break;  // Para após o L completo
        }
    }
}

int main() {
    printf("Torre (direita, recursiva):\n");
    torreDireita(TORRE_CASAS);
    printf("\n");

    printf("Rainha (esquerda, recursiva):\n");
    rainhaEsquerda(RAINHA_CASAS);
    printf("\n");

    printf("Bispo (diagonal, loops aninhados):\n");
    bispoDiagonal();
    printf("\n");

    printf("Cavalo (L cima-direita, loop complexo):\n");
    cavaloL();
    printf("\n");

    return 0;
}

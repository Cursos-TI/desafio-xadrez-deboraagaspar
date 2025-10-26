#include <stdio.h>

int main() {
    // Título do jogo XADREZ em C
    printf("===== XADREZ EM C =====\n\n");

    // Movimento da Torre: 5 casas para a direita utilizando 'for'
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Movimento %d: Direita\n", i);
    }
    
    // Movimento do Bispo: 5 casas na diagonal (Cima e Direita)
    printf("\nMovimento do Bispo (5 casas na diagonal):\n");
    int i = 1;
    while (i <= 5) {
        printf("Movimento %d: Cima\n", i);
        printf("Movimento %d: Direita\n", i);
        i++;
    }
    
    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int j = 1;
    do {
        printf("Movimento %d: Esquerda\n", j);
        j++;
    } while (j <= 8);

    // Linha em branco separando o movimento do Cavalo
    printf("\n");

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda (Movimento em L)
    printf("Movimento do Cavalo (Movimento em L):\n");

    // Primeira parte do movimento: 2 casas para baixo usando 'for'
    for (int i = 1; i <= 2; i++) {
        printf("Movimento %d: Baixo\n", i);
    }

    // Segunda parte do movimento: 1 casa para a esquerda usando 'while'
    int y = 1;  // Usando for e while separados, pra imprimir o L corretamente;
    while (y <= 1) {
        printf("Movimento %d: Esquerda\n", y);
        y++;
    }

    return 0;
}

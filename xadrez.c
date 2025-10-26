#include <stdio.h>

// Função recursiva para a Torre: Move 1 casa para a direita e chama a recursão para a próxima casa
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);  // Chama recursivamente para mover a próxima casa
    }
}

// Função recursiva para o Bispo: Move uma casa para cima e uma para a direita (diagonal)
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas - 1);  // Chama recursivamente para o próximo movimento
    }
}

// Função recursiva para a Rainha: Move 1 casa para a esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);  // Chama recursivamente para o próximo movimento
    }
}

// Função para o Cavalo: Usando loops aninhados para o movimento em "L"
void moverCavalo() {
    for (int i = 1; i <= 2; i++) {  // Primeira parte do movimento: 2 casas para cima
        printf("Cima\n");
    }
    for (int i = 1; i <= 1; i++) {  // Segunda parte do movimento: 1 casa para a direita
        printf("Direita\n");
    }
}

int main() {
    // Título do jogo XADREZ em C
    printf("===== XADREZ EM C =====\n\n");

    // Movimento da Torre: 5 casas para a direita usando recursão
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);  // Chama a função recursiva para mover 5 casas para a direita
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal utilizando recursão
    printf("Movimento do Bispo (5 casas na diagonal):\n");
    moverBispo(5);  // Chama a função recursiva para mover 5 casas na diagonal
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda usando recursão
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);  // Chama a função recursiva para mover 8 casas para a esquerda
    printf("\n");

    // Movimento do Cavalo: 2 casas para cima e 1 casa para a direita (Movimento em L)
    printf("Movimento do Cavalo (Movimento em L: 2 casas para cima e 1 para a direita):\n");
    moverCavalo();  // Chama a função para o movimento do Cavalo
    printf("\n");

    return 0;
}

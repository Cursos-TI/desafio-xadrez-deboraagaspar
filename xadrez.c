#include <stdio.h>

int main() {
    // Título do jogo XADREZ em C
    printf("===== XADREZ EM C =====\n");
    printf("\n");
    
    // Descrição geral dos movimentos
    // 1 - Direita
    // 2 - Cima
    // 3 - Esquerda
    // No caso do Bispo, "Cima" e "Direita" têm o mesmo índice porque são feitos simultaneamente (movimento na diagonal).

    // Movimento da Torre: 5 casas para a direita utilizando 'for'
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Movimento %d: Direita\n", i);  // Imprime o índice e direção do movimento (Direita)
    }
    
    // Movimento do Bispo: 5 casas na diagonal para Cima e para Direita utilizando 'while'
    printf("\nMovimento do Bispo (5 casas na diagonal):\n");
    int i = 1;  // Inicializando a variável 'i' para uso posterior
    while (i <= 5) {
        printf("Movimento %d: Cima\n", i);     // Imprime o índice e movimento para cima
        printf("Movimento %d: Direita\n", i);  // Imprime o índice e movimento para a direita (mesmo índice pois são feitos ao mesmo tempo)
        i++;
    }
    
    // Movimento da Rainha: 8 casas para a esquerda utilizando 'do-while'
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 1;  // Reutilizando 'i' para o movimento da Rainha
    do {
        printf("Movimento %d: Esquerda\n", i);  // Imprime o índice e direção do movimento (Esquerda)
        i++;
    } while (i <= 8);

    return 0;
}

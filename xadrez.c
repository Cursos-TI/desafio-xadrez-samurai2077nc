// xadrez.c
// Simulação de movimentos de peças de xadrez usando estruturas de repetição
// Desenvolvido por [Seu Nome]
// Desafio de programação: Nível novato

#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    // Usando estrutura de repetição 'for'
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    // Usando estrutura de repetição 'while'
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    // Usando estrutura de repetição 'do-while'
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}

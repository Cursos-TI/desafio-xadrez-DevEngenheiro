#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Constantes definindo o número de casas a serem movidas para cada peça
    const int casasTorre = 5;    // Torre move 5 casas para a direita
    const int casasBispo = 5;    // Bispo move 5 casas na diagonal (para cima e à direita)
    const int casasRainha = 8;   // Rainha move 8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    // --------------------------- Movimento do Bispo ---------------------------
    // O Bispo se move na diagonal. Neste exemplo, ele se move 5 casas na diagonal para cima e à direita.
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 1;
    while (j <= casasBispo) {
        // Para cada casa, imprime a direção "Cima, Direita"
        printf("Casa %d: Cima, Direita\n", j);
        j++; // Incrementa para simular a próxima casa
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // --------------------------- Movimento da Torre ---------------------------
    // A Torre se move em linha reta. Neste exemplo, ela se move 5 casas para a direita.
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        // Para cada casa, imprime a direção "Direita"
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
        // --------------------------- Movimento da Rainha ---------------------------
    // A Rainha se move em todas as direções. Aqui, simulamos um movimento de 8 casas para a esquerda.
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        // Imprime a direção "Esquerda" para cada casa percorrida
        printf("Casa %d: Esquerda\n", k);
        k++; // Incrementa para simular a próxima casa
    } while (k <= casasRainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;  // Indica que o programa terminou com sucesso
}

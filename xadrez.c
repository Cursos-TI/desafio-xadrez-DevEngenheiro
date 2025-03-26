#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Constantes definindo o número de casas a serem movidas para cada peça
    int casasTorre = 5;    // Torre move 5 casas para a direita
    int casasBispo = 5;    // Bispo move 5 casas na diagonal (para cima e à direita)
    int casasRainha = 8;   // Rainha move 8 casas para a esquerda
    int casasCavalo = 1;   // Cavalo move 3 casas em forma de L

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
    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    
    // --------------------------- Movimento do Cavalo ---------------------------
    // O Cavalo se move em L. Neste exemplo, ele se move 2 casas para baixo e 1 para a esquerda.
    printf("Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda, formando o L):\n");
    while (casasCavalo--)
    {
        for (int m = 1; m <= 2; m++) {
        // Simula as 2 casas para baixo. Para cada casa, imprime a direção "Baixo"
        printf("Casa %d: Baixo\n", m);
        }
    // Depois das duas casas para baixo, imprime a direção "Esquerda"
    printf("Casa %d: Esquerda\n", casasCavalo + 3);
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;  // Indica que o programa terminou com sucesso
}

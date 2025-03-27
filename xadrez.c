#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Mestre - Funções Recursivas e Loops Aninhados

// Função recursiva para o movimento da Torre
// A Torre se move para a direita por um número de casas definido por 'total'.
// A cada chamada, a função imprime a casa atual e chama a si mesma incrementando o número da casa.
void moverTorre(int casa, int total) {
    if (casa > total) return;         // Condição de parada: se a casa atual ultrapassar o total, encerra a recursão.
    printf("Casa %d: Direita\n", casa);
    moverTorre(casa + 1, total);        // Chamada recursiva para a próxima casa.
}

// Função recursiva para o movimento da Rainha
// A Rainha se move para a esquerda. A função imprime a direção para cada casa e chama a si mesma.
void moverRainha(int casa, int total) {
    if (casa > total) return;         // Se ultrapassar o total de casas, encerra.
    printf("Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1, total);       // Próxima chamada recursiva.
}

// Função recursiva para o movimento do Bispo, utilizando também um loop aninhado
// Aqui, a ideia é simular o movimento diagonal (para cima e à direita).
// O loop aninhado (que roda uma vez) representa a parte horizontal, enquanto a recursão controla a parte vertical.
void moverBispo(int casa, int total) {
    if (casa > total) return;         // Condição de parada.
    // Loop interno: embora simples, serve para demonstrar o uso de loops aninhados.
    for (int j = 1; j <= 1; j++) {
        printf("Casa %d: Cima, Direita\n", casa);
    }
    moverBispo(casa + 1, total);       // Chamada recursiva para a próxima casa (movimento diagonal).
}

int main(void) {
    // ====================== Constantes de movimento ======================
    const int casasTorre = 5;    // A Torre se moverá 5 casas para a direita.
    const int casasBispo = 5;    // O Bispo se moverá 5 casas na diagonal para cima e à direita.
    const int casasRainha = 8;   // A Rainha se moverá 8 casas para a esquerda.

    // ====================== Movimento da Torre (Recursivo) ======================
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(1, casasTorre);
    printf("\n");

    // ====================== Movimento do Bispo (Recursivo com loop aninhado) ======================
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(1, casasBispo);
    printf("\n");

    // ====================== Movimento da Rainha (Recursivo) ======================
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(1, casasRainha);
    printf("\n");

    // ====================== Movimento do Cavalo (Loops Aninhados com CONTINUE e BREAK) ======================
    /* O Cavalo se move em "L": duas casas para cima e uma casa para a direita.
     * Para simular esse movimento, foi usado um loop FOR para as duas casas verticais e, dentro dele,
     * utilizou CONTINUE e BREAK para controlar o fluxo:
     * - Se a iteração for a primeira (casa 1), imprime "Cima" e usa CONTINUE para pular o código
     *   restante dessa iteração.
     * - Se for a segunda iteração (casa 2), imprime "Cima" e inicia um loop while para o movimento horizontal.
     *   Nesse while, após a primeira iteração, usamos BREAK para sair do loop.
     */
    printf("Movimento do Cavalo (2 casas para cima e 1 casa para a direita):\n");
    for (int a = 1; a <= 2; a++) {
        // Para a primeira casa vertical, imprime "Cima" e continua para a próxima iteração.
        if (a == 1) {
            printf("Casa %d: Cima\n", a);
            continue;  // Pula o restante do loop e passa para a próxima iteração.
        }
        // Para a segunda casa vertical:
        printf("Casa %d: Cima\n", a);
        int b = 1;
        // Loop while para o movimento horizontal (1 casa para a direita)
        while (b <= 1) {
            printf("Casa %d: Direita\n", a + b);
            b++;       // Incrementa a variável b.
            break;     // Usa BREAK para sair do loop após a primeira iteração.
        }
    }
    printf("\n");

    return 0; // Finaliza o programa com sucesso.
}
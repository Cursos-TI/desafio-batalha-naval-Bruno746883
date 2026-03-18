#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TAM 10
#define NAVIO 3
int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[TAM][TAM];
    int navioH[NAVIO] = {3,3,3}; // horizontal
    int navioV[NAVIO] = {3,3,3}; // vertical

    int i, j;

    /* ===== Inicializar tabuleiro com 0 ===== */
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* ===== Coordenadas iniciais ===== */
    int linhaH = 2, colunaH = 1; // horizontal
    int linhaV = 5, colunaV = 6; // vertical

    /* ===== Posicionar navio horizontal ===== */
    for(i = 0; i < NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    /* ===== Posicionar navio vertical ===== */
    for(i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    /* ===== Exibir tabuleiro ===== */
    printf("Tabuleiro:\n\n");

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

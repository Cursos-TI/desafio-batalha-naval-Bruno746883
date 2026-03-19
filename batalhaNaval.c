#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TAM 10
#define NAVIO 3
int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int tabuleiro[TAM][TAM];
    int i, j;

    /* ===== Inicializar tabuleiro ===== */
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* ===== Coordenadas iniciais ===== */
    int l1 = 1, c1 = 1; // horizontal
    int l2 = 5, c2 = 2; // vertical
    int l3 = 0, c3 = 6; // diagonal principal (\)
    int l4 = 2, c4 = 9; // diagonal secundária (/)

    /* ===== Navio Horizontal ===== */
    if(c1 + NAVIO <= TAM) {
        for(i = 0; i < NAVIO; i++) {
            if(tabuleiro[l1][c1 + i] == 0)
                tabuleiro[l1][c1 + i] = 3;
        }
    }

    /* ===== Navio Vertical ===== */
    if(l2 + NAVIO <= TAM) {
        for(i = 0; i < NAVIO; i++) {
            if(tabuleiro[l2 + i][c2] == 0)
                tabuleiro[l2 + i][c2] = 3;
        }
    }

    /* ===== Navio Diagonal Principal (\) ===== */
    if(l3 + NAVIO <= TAM && c3 + NAVIO <= TAM) {
        for(i = 0; i < NAVIO; i++) {
            if(tabuleiro[l3 + i][c3 + i] == 0)
                tabuleiro[l3 + i][c3 + i] = 3;
        }
    }

    /* ===== Navio Diagonal Secundária (/) ===== */
    if(l4 + NAVIO <= TAM && c4 - NAVIO + 1 >= 0) {
        for(i = 0; i < NAVIO; i++) {
            if(tabuleiro[l4 + i][c4 - i] == 0)
                tabuleiro[l4 + i][c4 - i] = 3;
        }
    }

    /* ===== Exibir Tabuleiro ===== */
    printf("Tabuleiro:\n\n");

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


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

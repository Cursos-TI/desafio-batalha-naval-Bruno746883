#include <stdio.h>

#define TAM 10
#define H 5   // tamanho da matriz de habilidade

int main() {

    int tab[TAM][TAM];
    int cone[H][H], cruz[H][H], oct[H][H];

    int i, j;

    /* ===== Inicializar tabuleiro ===== */
    for(i = 0; i < TAM; i++)
        for(j = 0; j < TAM; j++)
            tab[i][j] = 0;

    /* ===== Criar CONE (aponta para baixo) ===== */
    for(i = 0; i < H; i++) {
        for(j = 0; j < H; j++) {
            if(j >= (H/2 - i) && j <= (H/2 + i))
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    /* ===== Criar CRUZ ===== */
    for(i = 0; i < H; i++) {
        for(j = 0; j < H; j++) {
            if(i == H/2 || j == H/2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    /* ===== Criar OCTAEDRO (losango) ===== */
    for(i = 0; i < H; i++) {
        for(j = 0; j < H; j++) {
            if(abs(i - H/2) + abs(j - H/2) <= H/2)
                oct[i][j] = 1;
            else
                oct[i][j] = 0;
        }
    }

    /* ===== Posições no tabuleiro ===== */
    int lc = 2, cc = 2; // cone
    int lcr = 5, ccr = 5; // cruz
    int lo = 7, co = 2; // octaedro

    /* ===== Aplicar CONE ===== */
    for(i = 0; i < H; i++) {
        for(j = 0; j < H; j++) {

            int x = lc + i - H/2;
            int y = cc + j - H/2;

            if(x >= 0 && x < TAM && y >= 0 && y < TAM) {
                if(cone[i][j] == 1 && tab[x][y] == 0)
                    tab[x][y] = 5;
            }
        }
    }

    /* ===== Aplicar CRUZ ===== */
    for(i = 0; i < H; i++) {
        for(j = 0; j < H; j++) {

            int x = lcr + i - H/2;
            int y = ccr + j - H/2;

            if(x >= 0 && x < TAM && y >= 0 && y < TAM) {
                if(cruz[i][j] == 1 && tab[x][y] == 0)
                    tab[x][y] = 5;
            }
        }
    }

    /* ===== Aplicar OCTAEDRO ===== */
    for(i = 0; i < H; i++) {
        for(j = 0; j < H; j++) {

            int x = lo + i - H/2;
            int y = co + j - H/2;

            if(x >= 0 && x < TAM && y >= 0 && y < TAM) {
                if(oct[i][j] == 1 && tab[x][y] == 0)
                    tab[x][y] = 5;
            }
        }
    }

    /* ===== Exibir Tabuleiro ===== */
    printf("Tabuleiro com habilidades:\n\n");

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
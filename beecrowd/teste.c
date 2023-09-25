#include <stdio.h>

void preencheMatrizEspiral(int matriz[][100], int n) {
    int valor = 1;
    int limiteSup = 0;
    int limiteInf = n - 1;
    int limiteEsq = 0;
    int limiteDir = n - 1;
    
    while (n % 2 == 0 ? valor <= n / 2 : valor <= (n + 1)/ 2) {
        // Preenche a parte superior da matriz
        for (int i = limiteEsq; i <= limiteDir; i++) {
            matriz[limiteSup][i] = valor;
        }
        limiteSup++;

        // Preenche a coluna da direita da matriz
        for (int i = limiteSup; i <= limiteInf; i++) {
            matriz[i][limiteDir] = valor;
        }
        limiteDir--;

        // Preenche a parte inferior da matriz
        for (int i = limiteDir; i >= limiteEsq; i--) {
            matriz[limiteInf][i] = valor;
        }
        limiteInf--;

        // Preenche a coluna da esquerda da matriz
        for (int i = limiteInf; i >= limiteSup; i--) {
            matriz[i][limiteEsq] = valor;
        }
        limiteEsq++;

        valor++;
    }
}

int main() {
    int n;
    printf("Digite o tamanho da matriz (n x n): ");
    scanf("%d", &n);

    int matriz[100][100]; // Use um tamanho máximo ou alocação dinâmica se necessário

    preencheMatrizEspiral(matriz, n);

    printf("Matriz em espiral de tamanho %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

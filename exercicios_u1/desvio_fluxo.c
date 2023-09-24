#include <stdio.h>

void resultado(int saida, int coluna){
    if(saida >= 0 && saida <= coluna - 1)
        printf("%d\n", saida);    
    else
        printf("ops\n");
}


int desvio_coluna(int posx, int posy, int lin, int col, int mat[lin][col]){
    if(mat[posx][posy] == 1)
        return posy - 1;

    else if(mat[posx][posy] == 2)
        return posy + 1;
    
    else
        return posy;
}


int caminho(int entrada, int linha, int coluna, int matriz[linha][coluna]){
    int i, j;

    for(i = 0, j = entrada; j < coluna, i < linha; i++)
        j = desvio_coluna(i, j, linha, coluna, matriz);

    return j;        
}

int main(){
    int m, n;
    int ralo;
    scanf("%d %d", &m, &n);

    //2 desvia para direita
    //1 desvia para esquerda
    //0 é espaço livre

    int muro[m][n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &muro[i][j]);

    int x;
    scanf("%d", &x);

    ralo = caminho(x, m, n, muro);
    resultado(ralo, n);

    return 0;
}
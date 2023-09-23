 
#include <stdio.h>

#define MIN -2147483647

int verifica_ataque(int l, int c, int mat[l][c], int posx, int posy){
    for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
            if(i != 0 || j !=0)
                if(mat[posx][posy] <= mat[posx + i][posy + j])
                    return 0;
    return 1;
}


void checa_ataque(int l, int c, int mat[l][c], int posx, int posy){
    int morreu = 0, ordem = 1;

    for(int i = 1; i <= l - 2; i++){
        for(int j = 1; j <= l - 2; j++){
            if(verifica_ataque(l, c, mat, i, j)){
                printf("Local %d: %d %d\n", ordem, i, j);
                ordem++;
                if(i == posx && j == posy)
                    morreu = 1;
            }
        }
    }
    if(morreu)
        printf("Descanse na força...\n");
    else
        printf("Ao resgate!\n");
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    int map[N + 2][M + 2];
    // inclui mais 2 linhas e 2 colunas de valores minimos para facilitar a leitura
    for(int i = 0; i < N + 2; i++)
        for(int j = 0; j < M + 2; j++)
            map[i][j] = MIN;

    int jedix, jediy;

    scanf("%d %d", &jedix, &jediy);
    //preenche a parte interna da matriz com os valores da radiação
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            scanf("%d", &map[i][j]);
        
    //verifica cada posição da matriz para ser se é local de ataque
    //quando for local de ataque verifica se é o mesmo em que o jedi esteve pela última vez
    checa_ataque(N + 2, M + 2, map, jedix, jediy);

    return 0;
}
 
#include <stdio.h>

#define MIN -2147483647

int verifica_ataque(int l, int c, int mat[l][c], int posx, int posy){
    for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
            //só verifica os casos onde x e y sao simultaneamente diferente de zero
            if(i != 0 || j !=0)
                //se ocorrer pelo menos uma vez da entrada verificada ser menor que as entradas adjacentes
                //ja retorna false
                if(mat[posx][posy] <= mat[posx + i][posy + j])
                    return 0;
    //se retornar true, significa que todos as posicoes verificados nao entraram no if acima
    return 1;
}


void checa_ataque(int l, int c, int mat[l][c], int posx, int posy){
    int morreu = 0, ordem = 1;

    for(int i = 1; i <= l - 2; i++){
        for(int j = 1; j <= l - 2; j++){
            //verifica se a posicao i,j atual foi alvo de ataque
            if(verifica_ataque(l, c, mat, i, j)){
                //se sim, imprime as coord e atribui um contador para o caso de mais de uma bom ter sido lançada
                printf("Local %d: %d %d\n", ordem, i, j);
                ordem++;
                //verifica se as coord da bomba são iguais a ult coord conhecida do jedi
                if(i == posx && j == posy)
                    //em caso de verdade, muda morre para true
                    morreu = 1;
            }
        }
    }
    //apos verificar todas as coordenadas, procurando se foram alvo de ataque
    //verifica se o jedi morreu
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
    //faz as impressoes necessárias
    checa_ataque(N + 2, M + 2, map, jedix, jediy);

    return 0;
}
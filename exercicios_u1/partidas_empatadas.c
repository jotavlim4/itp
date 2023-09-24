#include <stdio.h>

void imprime(int valor){
    printf("%d", valor);
}

int empates(int tam, int mat[tam][tam]){
    int empate = 0;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(mat[i][j] == mat[j][i] && i != j){
                empate++;
            }
        }
    }
    return empate / 2;
}

int main(){
    int m;
    scanf("%d", &m);

    int partidas[m][m];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &partidas[i][j]);

    imprime(empates(m, partidas));


    return 0;
}
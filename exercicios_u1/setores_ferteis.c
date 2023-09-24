#include <stdio.h>

int total_ferteis(int l, int c, int m[l][c]){
    int total = 0;

    for(int i = 0; i < l; i++)
        for(int j = 0; j < c; j++)
            if(m[i][j] == 1)
                total++;
        
    return total;
}

int s_ferteis_irrigados(int x, int y, int l, int c, int m[l][c]){
    int contador = 0;

    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            if(i == 0 && (j == -1 || j == 1)){
                if(m[x + i][y + j] == 1){
                    contador++;
                    m[x + i][y + j] = 3; //muda para que nao seja contado novamente
                }
            }
            else if(j == 0 && (i == -1 || i == 1)){
                if(m[x + i][y + j] == 1){
                    contador++;
                    m[x + i][y + j] = 3; //muda para que nao seja contado novamente
                }
            }
        }
    }
    return contador;
}

int setor_de_irrigador(int posx, int posy, int lin, int col, int mat[lin][col]){
    if(mat[posx][posy] == 2)
        return 1;
    else
        return 0;
}

void irrigados_Nirrigados(int linha, int coluna, int matriz[linha][coluna]){
    int irrigados = 0;
    int total;

    total = total_ferteis(linha, coluna, matriz);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(setor_de_irrigador(i, j, linha, coluna, matriz)){
                irrigados += s_ferteis_irrigados(i, j, linha, coluna, matriz);
            }
            else
                continue;
        }       
    }

    printf("%d ", irrigados);
    printf("%d\n", total - irrigados);
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int campo[m][n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &campo[i][j]);
    
/*     
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", campo[i][j]);
        }
        putchar('\n');
    } 
 */
            
    // 0 setor infértil
    // 1 setor fértil
    // 2 setor ocupado por irrigador    

    irrigados_Nirrigados(m, n, campo);

    return 0;
}
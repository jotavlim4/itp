
#include <stdio.h>

#define TRUE 1
#define FALSE 0

void ordena_imprime(int tam, int v[tam]){
    int repete;

    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - i - 1; j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < tam; i++){
        repete = FALSE;
        for(int j = 0; j < i; j++){
            if(v[j] == v[i]){
                repete = TRUE;
                break;
            }
        }
        if(!repete)
            printf("%d ", v[i]);
    }
    putchar('\n');
}

int condicao(int posx, int posy, int user, int tam, int m[tam][tam]){
    if(m[posx][posy] == 1 && posy != user && m[user][posy] != 1)
        return 1;
    else
        return 0;

}

void sugestoes(int user, int tam, int m[tam][tam]){
    int amigo;
    int sugestao[200];
    int i, j, k, l;
    int count = 0;

    for(i = user, j = 0; j < tam; j++){
        if(m[i][j] == 1){
            amigo = j;
            for(k = amigo, l = 0; l < tam; l++){
                if(condicao(k, l, user, tam, m)){
                    sugestao[count] = l;
                    count++;
                    continue;
                }
            }
        }   
    }
    ordena_imprime(count, sugestao);
}

int main(){
    int m;
    scanf("%d", &m);

    int mural[m][m];
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &mural[i][j]);

    int usuario;
    scanf("%d", &usuario);

    sugestoes(usuario, m, mural);    

    return 0;
}
#include <stdio.h>

#define LIN 7
#define COL 7

/*  
"_" para branco
"#" para preto
para quando ler -1, -1
*/



int main(){
    char tela[LIN][COL];
    int x_i, y_i;
    int x, y;

    //preenche toda a matriz com '_'
    for(int i = 0; i < LIN; i++)
        for(int j = 0; j < COL; j++)
            tela[i][j] = '_';
    
    scanf("%d %d", &x_i, &y_i);
    
    do{
        scanf("%d %d", &x, &y);
        if(x_i < x || y_i < y){
            for(int i = x_i; i <= x; i++){
                for(int j = y_i; j <= y; j++){
                    if(i == -1 || j == -1)
                        break;
                    else
                        tela[i][j] = '#';
                }
            }
        }
        else{
            for(int i = x; i <= x_i; i++){
                for(int j = y; j <= y_i; j++){
                    if(i == -1 || j == -1)
                        break;
                    else
                        tela[i][j] = '#';
                }
            }            
        }

        x_i = x;
        y_i = y;
    }while(x_i != -1 && y_i != -1);


    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("%c", tela[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
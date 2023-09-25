    #include <stdio.h>

    #define TAM 12

    int main(){
        char c;
        int count = 0.0;
        double m[TAM][TAM];

        scanf("%c", &c);

        double soma = 0.0;
        for(int i = 0; i < TAM; i++){
            for(int j = 0; j < TAM; j++){
                scanf("%lf", &m[i][j]);
                if(i + j < TAM - 1){
                    soma += m[i][j];
                    count++;
                }
            }
        }

        if(c == 'M')
            printf("%.1lf\n", soma / count);

        else
            printf("%.1lf\n", soma);

        return 0;
    }
#include <stdio.h>

#define DIAS 3

int checa_notas(int a, int b, int c){
    if(a > b & a < c)
        return a;
    if(a > c & a < b)
        return a;
    if(b > a & b < c)
        return b;
    if(b > c & b < a)
        return b;
    if(c > a & c < b)
        return c;
    if(c > b & c < a)
        return c;
    if(c == a)
        return c;
    if(c == b)
        return c;
    if(a == b)
        return a;
    if(a == c)
        return b;
    if(b == a)
        return b;
    if(b == c)
        return b;
}

int main(){
    int i, j;
    int nota1, nota2, nota3;
    int mediana;
    int notas_A[3], notas_B[3];
    int media_final_A, media_final_B;

    for(i = 0; i < DIAS; i++){
        scanf("%d %d %d", &nota1, &nota2, &nota3);
        mediana = checa_notas(nota1, nota2, nota3);
        notas_A[i] = mediana;
    }

    for(i = 0; i < DIAS; i++){
        scanf("%d %d %d", &nota1, &nota2, &nota3);
        mediana = checa_notas(nota1, nota2, nota3);
        notas_B[i] = mediana;
    }

    media_final_A = checa_notas(notas_A[0], notas_A[1], notas_A[2]);
    media_final_B = checa_notas(notas_B[0], notas_B[1], notas_B[2]);

    if(media_final_A > media_final_B)
        printf("A\n");
    else if(media_final_B > media_final_A)
        printf("B\n");
    else
        printf("empate\n");
    
    return 0;
}

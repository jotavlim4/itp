#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100
#define TAM_MAX 10

typedef struct{
    int matricula;
    char nome[TAM];
    int cod_dis;
    double nota1;
    double nota2;
}aluno; 


int main(){
    int qtd_alunos;
    double soma = 0;

    scanf("%d", &qtd_alunos);
    
    aluno cadastro[qtd_alunos];

    for(int i = 0; i < qtd_alunos; i++){
        scanf("%d, %s , %d, %lf , %lf", &cadastro[i].matricula, cadastro[i].nome, &cadastro[i].cod_dis, &cadastro[i].nota1, &cadastro[i].nota2);
        
        cadastro[i].nome[0] = toupper(cadastro[i].nome[0]);

        soma += (cadastro[i].nota1 * 1.0 + cadastro[i].nota2 * 2.0);
        printf("%s  , média final = %.1lf\n", cadastro[i].nome, soma / 3 - 0.1);
    }

    return 0;
}
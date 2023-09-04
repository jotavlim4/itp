#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    //escreve as n colunas
    for (int i = 0; i < n; i++)
    {
        //inicia a linha i+1, pois i = 0 e vai até n + i
        //para poder completar a linha com 4 números consecutivos
        for (int j = i + 1; j <= n + i; j++)
        {
            printf("%d ", j);           
        }
        //imprime o caractere new line
        putchar('\n');
        
    }
    return 0;
}
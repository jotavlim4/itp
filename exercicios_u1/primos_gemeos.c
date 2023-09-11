#include <stdio.h>

int prime_check(int a)
{
    int i;
    //aqui nao consideramos números inteiros negativos
    //como primos e também o número 1
    if(a <= 1)
        return 0;
    else
    {
        //busca por divisores dif de 1 e p.
        for(i = 2; i < a; i++)
        {
            //se existe ocorrencia de divisores já podemos interromper
            //a procura, pois p é primo sse os div sao 1 e p
            //como os valores que i assumem sao dif de 1 e p
            //significa q p tem algum outro divisor alem de 1 e ele mesmo
            if(a % i == 0)
                return 0;
        }
    }
    return 1;

}

int main()
{
    int n;

    scanf("%d", &n);
    //verifica se n e n+2 sao simultaneamente primos
    if(prime_check(n) == 1 & prime_check(n + 2) == 1)
        printf("Numero forma par de gemeos\n");
    else
        printf("Numero nao forma par de gemeos\n");


    return 0;
}
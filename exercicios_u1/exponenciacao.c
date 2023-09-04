#include <stdio.h>

int main()
{
    int n, b;
    int fatores_primos, q, aux;

    scanf("%d %d", &n, &b);

    fatores_primos = 1;
    aux = n;

    while(n != 1)
    {
        if(n % b == 0)
            fatores_primos *= b;

        q = n / b;
        n = q;
    }

    if(fatores_primos == aux)
        printf("sim\n");
    else
        printf("não\n");
        
    return 0;
}
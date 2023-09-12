#include <stdio.h>
#include <math.h>

#define LANCAMENTOS 10

double dist(double x1, double y1, double x2, double y2)
{
    double dist_pontos;

    dist_pontos = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    return dist_pontos;
}
int pontuacao(double dist_pontos)
{
    int pontos;
    
    if(dist_pontos >= 0 & dist_pontos <= 1)
    {
        pontos = 10;
    }
    else if(dist_pontos > 1 & dist_pontos <= 2)
    {
        pontos = 6;
    }
    else if(dist_pontos > 2 & dist_pontos <= 3)
    { 
        pontos = 4;
    }
    else
        pontos = 0;
    
    return pontos;
}

int bonus(double dist_pontos)
{
    int bonus;

    if(dist_pontos >= 0 & dist_pontos <= 1)
    {
        bonus = 5;
    }
    else if(dist_pontos > 1 & dist_pontos <= 2)
    {
        bonus = 3;
    }
    else if(dist_pontos > 2 & dist_pontos <= 3)
    { 
        bonus = 2;
    }
    else
        bonus = 0;

    return bonus;
}

int main()
{
    int i;
    double a, b;
    double c, d;
    int total_pts = 0;

    scanf("%lf %lf", &a, &b);

    total_pts += pontuacao(dist(a, b, 0, 0));

    for(i = 1; i < LANCAMENTOS; i++)
    {
        scanf("%lf %lf", &c, &d);

        if(dist(a, b, c,d))
            total_pts += pontuacao(dist(c, d, 0, 0)) + bonus(dist(a, b, c, d));
        
        a = c;
        b = d; 
    }

    printf("%d\n", total_pts);

    return 0;
}

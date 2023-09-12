#include <stdio.h>

int converte_s(int h, int m, int s){
    int h_s, m_s, total_s; 
    
    h_s = h * 3600;
    m_s = m * 60;

    total_s = h_s + m_s + s;

    return total_s;
}

int define_rondas(int tempo_s, int acrescimos_s){
    int ronda;

    ronda = tempo_s + acrescimos_s;

    return ronda; 

}

void printa_rondas(int ronda){
    if(ronda / 3600 > 23)
        printf("%02d:%02d:%02d\n", (ronda / 3600) - 24, (ronda % 3600) / 60, (ronda % 3600) % 60);   
    else
        printf("%02d:%02d:%02d\n", ronda / 3600, (ronda % 3600) / 60, (ronda % 3600) % 60);
}

int main(){
    int h, m, s;

    scanf("%d %d %d", &h, &m, &s);

    printa_rondas(define_rondas(converte_s(h, m, s), converte_s(1, 0, 0)));
    printa_rondas(define_rondas(converte_s(h, m, s), converte_s(2, 10, 30)));
    printa_rondas(define_rondas(converte_s(h, m, s), converte_s(4, 40, 50)));
    printa_rondas(define_rondas(converte_s(h, m, s), converte_s(12, 5, 5)));



    return 0;
}
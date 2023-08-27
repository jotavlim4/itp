#include <stdio.h>

int main(){
    int h1, h2, m1, m2;
    int tempo_conve1, tempo_conve2;
    int dif;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    tempo_conve1 = h1 * 60 + m1;
    tempo_conve2 = h2 * 60 + m2;

    if(h1 < h2){
        dif = tempo_conve2 - tempo_conve1;
        printf("%dh%dmin\n", dif / 60, dif % 60);
    }
    else if (h1 > h2){
        dif = 1440 - (tempo_conve1 - tempo_conve2);
        printf("%dh%dmin\n", dif / 60, dif % 60);
    }
    else{
        dif = tempo_conve2 - tempo_conve1;
        printf("%dh%dmin\n", dif / 60, dif % 60);
    }

    return 0;
}
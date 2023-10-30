#include <stdio.h>
#include <string.h>

#define MAX_TAM 51

typedef enum
{
    LUTA,
    AVENTURA,
    ESTRATEGIA,
    ESPORTE,
    RPG
} typegame;

typedef struct
{
    char player_name[MAX_TAM];
    char game_choise[MAX_TAM];
    typegame prefence;
} player_info;

int main()
{
    int players_amount;
    scanf("%d",&players_amount);

    player_info info[players_amount];
    int count[5] = {0};

    for(int i = 0; i < players_amount; i++)
    {
        scanf("%s", info[i].player_name); getchar();
        scanf("%s", info[i].game_choise); getchar();

        if(strcmp(info[i].game_choise, "LUTA") == 0)
        {
            info[i].prefence = LUTA;
            count[LUTA]++;
        }
        else if(strcmp(info[i].game_choise, "AVENTURA") == 0)
        {
            info[i].prefence = AVENTURA;
            count[AVENTURA]++;
        }
        else if(strcmp(info[i].game_choise, "ESTRATEGIA") == 0)
        {
            info[i].prefence = ESTRATEGIA;
            count[ESTRATEGIA]++;
        }
        else if(strcmp(info[i].game_choise, "ESPORTE") == 0)
        {  
            info[i].prefence = ESTRATEGIA;
            count[ESPORTE]++;
        }
        else if(strcmp(info[i].game_choise, "RPG") == 0)
        {
            info[i].prefence = RPG;
            count[RPG]++;
        }
    }

    printf("Preferem LUTA: %d\n", count[LUTA]);
    printf("Preferem AVENTURA: %d\n", count[AVENTURA]);
    printf("Preferem ESTRATEGIA: %d\n", count[ESTRATEGIA]);
    printf("Preferem ESPORTE: %d\n", count[ESPORTE]);
    printf("Preferem RPG: %d\n", count[RPG]);

    return 0;
}
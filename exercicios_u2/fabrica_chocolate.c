#include <stdio.h>
#include <string.h>

#define TAM_MAX 51

typedef enum
{
    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS,
    INDEF
} flavour;

typedef struct
{
    char name[TAM_MAX];
    float weight;
    float price;
    char chocolate_type[TAM_MAX];
    flavour type;
} chocalate_type;

int main()
{
    int amount;
    int count[5] = {0};
    float max_price, min_price;
    int max_price_index, min_price_index;
    scanf("%d", &amount);

    chocalate_type chocolate_info[amount];

    max_price = -1.0;
    min_price = 1e9;

    for (int i = 0; i < amount; i++)
    {
        scanf("%s", chocolate_info[i].name); getchar();
        scanf("%f", &chocolate_info[i].weight);
        scanf("%f", &chocolate_info[i].price);
        scanf("%s", chocolate_info[i].chocolate_type); getchar();

        if (strcmp(chocolate_info[i].chocolate_type, "BRANCO") == 0)
        {
            chocolate_info[i].type = BRANCO;
        }
        else if (strcmp(chocolate_info[i].chocolate_type, "AMARGO") == 0)
        {
            chocolate_info[i].type = AMARGO;
        }
        else if (strcmp(chocolate_info[i].chocolate_type, "AO_LEITE") == 0)
        {
            chocolate_info[i].type = AO_LEITE;
        }
        else if (strcmp(chocolate_info[i].chocolate_type, "COM_CASTANHAS") == 0)
        {
            chocolate_info[i].type = COM_CASTANHAS;
        }
        else
        {
            chocolate_info[i].type = INDEF;
        }

        switch (chocolate_info[i].type)
        {
        case BRANCO:
            count[BRANCO]++;
            break;
        case AMARGO:
            count[AMARGO]++;
            break;
        case AO_LEITE:
            count[AO_LEITE]++;
            break;
        case COM_CASTANHAS:
            count[COM_CASTANHAS]++;
            break;
        default:
            break;
        }

        if (max_price < chocolate_info[i].price)
        {
            max_price = chocolate_info[i].price;
            max_price_index = i;
        }
        if (min_price > chocolate_info[i].price)
        {
            min_price = chocolate_info[i].price;
            min_price_index = i;
        }
    }

    printf("Total de chocolates BRANCO: %d\n", count[BRANCO]);
    printf("Total de chocolates AMARGO: %d\n", count[AMARGO]);
    printf("Total de chocolates AO_LEITE: %d\n", count[AO_LEITE]);
    printf("Total de chocolates COM_CASTANHAS: %d\n", count[COM_CASTANHAS]);
    printf("Chocolate mais caro: %s - R$%.2f\n", chocolate_info[max_price_index].name, chocolate_info[max_price_index].price);
    printf("Chocolate mais barato: %s - R$%.2f\n", chocolate_info[min_price_index].name, chocolate_info[min_price_index].price);

    return 0;
}
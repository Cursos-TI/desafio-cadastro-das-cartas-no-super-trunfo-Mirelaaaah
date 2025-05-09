#include <stdio.h>

int main() {

    // Declaração de variaveis.

    char Estado[2][2];
    char Codigo[2][4];
    char Cidade[2][50];
    int Populacao[2];
    float Area[2];
    float PIB[2];
    int Pontos_turisticos[2];

    // Coleta de informações da Carta 1.

    printf("Insira uma letra para representar o Estado da carta 1: \n");
    scanf("%s", Estado[0]);

    printf("Insira um código para representar a carta 1 (use a letra do Estado seguida de um número): \n");
    scanf("%s", Codigo[0]);

    printf("Insira o nome de uma cidade do Estado da carta 1: \n");
    scanf("%s", Cidade[0]);

    printf("Insira o número de habitantes da cidade (use numeros inteiros): \n");
    scanf("%d", &Populacao[0]);

    printf("Insira a area (em km²) da cidade: \n");
    scanf("%f", &Area[0]);

    printf("Insira PIB da cidade: \n");
    scanf("%f", &PIB[0]);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos[0]);

    // Coleta de informações da Carta 2.

    printf("Insira uma letra para representar o Estado da carta 2: \n");
    scanf("%s", Estado[1]);

    printf("Insira um código para representar a carta 2 (use a letra que representa o Estado seguida de um número): \n");
    scanf("%s", Codigo[1]);

    printf("Insira o nome de uma cidade do Estado da carta 2: \n");
    scanf("%s", Cidade[1]);

    printf("Insira o número de haibitantes da cidade (use numeros inteiros): \n");
    scanf("%d", &Populacao[1]);

    printf("Insira a area (em km²) da cidade: \n");
    scanf("%f", &Area[1]);

    printf("Insira PIB da cidade: \n");
    scanf("%f", &PIB[1]);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos[1]);

    // Informações cadastradas carta 1.

    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado[0]);
    printf("Código: %s \n", Codigo[0]);
    printf("Nome da cidade: %s \n", Cidade[0]);
    printf("População: %d \n", Populacao[0]);
    printf("Área: %.2f km² \n", Area[0]);
    printf("PIB: %.2f \n", PIB[0]);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos[0]);

    // Informações cadastradas carta 2.

    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado[1]);
    printf("Código: %s \n", Codigo[1]);
    printf("Nome da cidade: %s \n", Cidade[1]);
    printf("População: %d \n", Populacao[1]);
    printf("Área: %.2f km² \n", Area[1]);
    printf("PIB: %.2f \n", PIB[1]);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos[1]);

    return 0;
}

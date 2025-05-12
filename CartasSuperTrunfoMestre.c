#include <stdio.h>

int main() {

    // Declaração de variaveis nível novato.

    char Estado[2][2];
    char Codigo[2][4];
    char Cidade[2][50];
    unsigned long int Populacao[2];
    float Area[2];
    float PIB[2];
    int Pontos_turisticos[2];

    // Declaração de variaveis nível Aventureiro.

    float Densidade_populacional[2];
    float PIB_per_Capita[2];

    // Declaração de variaveis nível mestre.

    float SuperPoder[2];

    // Coleta de informações da Carta 1.

    printf("Insira uma letra para representar o Estado da carta 1: \n");
    scanf("%s", Estado[0]);

    printf("Insira um código para representar a carta 1 (use a letra do Estado seguida de um número): \n");
    scanf("%s", Codigo[0]);

    printf("Insira o nome de uma cidade do Estado da carta 1: \n");
    scanf("%s", Cidade[0]);

    printf("Insira o número de habitantes da cidade (use números inteiros): \n");
    scanf("%lu", &Populacao[0]);

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

    printf("Insira o número de habitantes da cidade (use numeros inteiros): \n");
    scanf("%lu", &Populacao[1]);

    printf("Insira a area (em km²) da cidade: \n");
    scanf("%f", &Area[1]);

    printf("Insira PIB da cidade: \n");
    scanf("%f", &PIB[1]);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos[1]);

    // Calculo das informações da carta 1 do nível Aventureiro.

    Densidade_populacional[0] = Populacao[0] / Area[0];
    PIB_per_Capita[0] = PIB[0] / Populacao[0];
 
    // Calculo das informações da carta 2 do nível Aventureiro.

    Densidade_populacional[1] = Populacao[1] / Area[1];
    PIB_per_Capita[1] = PIB[1] / Populacao[1];

    // Calculando o super poder nivel mestre carta 1.

    SuperPoder[0] = (float) Populacao[0] + Area[0] + PIB[0] + Pontos_turisticos[0] + Densidade_populacional[0] + PIB_per_Capita[0];

    // Calculando o super poder nivel mestre carta 2.

    SuperPoder[1] = (float) Populacao[1] + Area[1] + PIB[1] + Pontos_turisticos[1] + Densidade_populacional[1] + PIB_per_Capita[1];

    // Informações cadastradas carta 1.

    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado[0]);
    printf("Código: %s \n", Codigo[0]);
    printf("Nome da cidade: %s \n", Cidade[0]);
    printf("População: %lu \n", Populacao[0]);
    printf("Área: %.2f km² \n", Area[0]);
    printf("PIB: %.2f \n", PIB[0]);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos[0]);

    // Informações da carta 1 do nível aventureiro (Densidade populacional e PIB per capita).

    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_populacional[0]);
    printf("PIB per Capita: %.2f reais \n", PIB_per_Capita[0]);

    // Mostrando o resultado do Super Poder nivel mestre carta 1.

    printf("O Super Poder da carta 1 é: %.2f \n", SuperPoder[0]);

    // Informações cadastradas carta 2.

    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado[1]);
    printf("Código: %s \n", Codigo[1]);
    printf("Nome da cidade: %s \n", Cidade[1]);
    printf("População: %lu \n", Populacao[1]);
    printf("Área: %.2f km² \n", Area[1]);
    printf("PIB: %.2f \n", PIB[1]);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos[1]);

    // Informações da carta 2 do nível aventureiro (Densidade populacional e PIB per capita).

    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_populacional[1]);
    printf("PIB per Capita: %.2f reais \n", PIB_per_Capita[1]);

    // Mostrando o resultado do Super Poder nivel mestre carta 2.

    printf("O Super Poder da carta 2 é: %.2f \n", SuperPoder[1]);

    // Comparações entre os valores das cartas:

    printf("CARTAS BATALHANDO! \n");
    printf("Resultado da batalha entre as Castas: \n");

    if (Populacao[0] > Populacao[1]) {
        printf("População: Carta 1 venceu! \n");
    } else if (Populacao[0] < Populacao[1]) {
        printf("População: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm a mesma População! \n");
    }

    if (Area[0] > Area[1]) {
        printf("Área: Carta 1 venceu! \n");
    } else if (Area[0] < Area[1]) {
        printf("Área: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm o mesmo Área! \n");
    }

    if (PIB[0] > PIB[1]) {
        printf("PIB: Carta 1 venceu! \n");
    } else if (PIB[0] < PIB[1]) {
        printf("PIB: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm o mesmo PIB! \n");
    }

    if (Pontos_turisticos[0] > Pontos_turisticos[1]) {
        printf("Pontos turisticos: Carta 1 venceu! \n");
    } else if (Pontos_turisticos[0] < Pontos_turisticos[1]) {
        printf("Pontos turisticos: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm a mesma quantidade de Pontos Turisticos! \n");
    }

    // Na Densidade populacional o menor valor é que é o vencedor.

    if (Densidade_populacional[0] < Densidade_populacional[1]) {
        printf("Densidade populacional: Carta 1 venceu! \n");
    } else if (Densidade_populacional[0] > Densidade_populacional[1]) {
        printf("Densidade populacional: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm a mesma Densidade Populacional! \n");
    }

    if (PIB_per_Capita[0] > PIB_per_Capita[1]) {
        printf("PIB per capita: Carta 1 venceu! \n");
    } else if (PIB_per_Capita[0] < PIB_per_Capita[1]) {
        printf("PIB per capita: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm o mesmo PIB per Capita! \n");
    }

    if (SuperPoder[0] > SuperPoder[1]) {
        printf("Super poder: Carta 1 venceu! \n");
    } else if (SuperPoder[0] < SuperPoder[1]) {
        printf("Super poder: Carta 2 venceu! \n");
    } else {
        printf("As cartas têm o mesmo Super Poder! \n");
    }

    return 0;
}
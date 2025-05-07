#include <stdio.h>

int main() {

    printf ("Jogo de cartas super trunfo \n");

    // carta 01 - declarando variaveis
    
    char estado1;
    char codigo1[4];
    char cidade1[50];
    float populacao1;
    float tamanho1;
    float pib1;
    int pontos_turisticos1;

    // calculando densidade populacional e pir per capita carta 01
    int densidade1 =  populacao1 / tamanho1;
    int pibpercapita1 =  pib1 / populacao1;



    // carta 02 - declarando variaveis
    char estado2;
    char codigo2[4];
    char cidade2[50];
    float populacao2;
    float tamanho2;
    float pib2;
    int pontos_turisticos2;

     // calculando densidade populacional e pir per capita carta 02






  
    //obtendo dados da carta 01

    printf("Digite seu estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite seu código (ex: A01, B02): \n");
    scanf("%s", codigo1);

    printf("Digite sua cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%f", &populacao1);

    printf("Digite o tamanho da área (km²): \n");
    scanf("%f", &tamanho1);

    printf("Digite o PIB (bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    //obtendo dados da carta 02

    printf ("Agora digite os valores da carta 02 \n");

    printf("Digite seu estado  (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite seu código (ex: A01, B02): \n");
    scanf("%s", codigo2);

    printf("Digite sua cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%f", &populacao2);

    printf("Digite o tamanho da área (km²): \n");
    scanf("%f", &tamanho2);

    printf("Digite o PIB (bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    
    // Imprimindo dados da carta 01

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.3f\n", populacao1);
    printf("Área: %.3f km²\n", tamanho1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Imprimindo dados da carta 02

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.3f km²\n", tamanho2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    // imprimido densidade populacional e pir per capita carta 01
    printf("densidade: %.3f\n", densidade1);
    printf("pib_per_capita: %.3f\n", pibpercapita1);

    return 0;
}

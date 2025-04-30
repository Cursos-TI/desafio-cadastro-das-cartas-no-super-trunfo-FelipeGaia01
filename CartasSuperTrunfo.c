#include <stdio.h>

int main() {

    printf ("Jogo de cartas super trunfo \n");

    // carta 01 - declarando variaveis
    
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float tamanho;
    float pib;
    int pontos_turisticos;

    // carta 02 - declarando variaveis
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float tamanho2;
    float pib2;
    int pontos_turisticos2;
  
    //obtendo dados da carta 01

    printf("Digite seu estado (A-H): \n");
    scanf(" %c", &estado);

    printf("Digite seu código (ex: A01, B02): \n");
    scanf("%s", codigo);

    printf("Digite sua cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área (km²): \n");
    scanf("%f", &tamanho);

    printf("Digite o PIB (bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    //obtendo dados da carta 02

    printf ("Agora digite os valores da carta 02 \n");

    printf("Digite seu estado  (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite seu código (ex: A01, B02): \n");
    scanf("%s", codigo2);

    printf("Digite sua cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área (km²): \n");
    scanf("%f", &tamanho2);

    printf("Digite o PIB (bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    
    // Imprimindo dados da carta 01

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", tamanho);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    // Imprimindo dados da carta 02

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", tamanho2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);


    return 0;
}

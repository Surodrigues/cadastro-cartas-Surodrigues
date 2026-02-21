#include <stdio.h>

/* 
Desafio: nível novato
Criando as Cartas do Super Trunfo

Este programa lê os dados digitados pelo usuário e os imprime na tela no formato de cartas de Super Trunfo.
*/

int main(){
    //variaveis:
    char estado1, estado2;
    char codigo1[3], codigo2[3]; //precisa de 3 caracteres para poder armazenar o /0 que informa o fim da string;
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    
    //dados da primeira carta:
    printf("Insira os dados da carta 1:\nDigite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado1); //espaço antes da leitura do input para não armazenar o enter do input anterior
    printf("Digite um número de 01 a 04 representar o estado: ");
    scanf("%s", codigo1);    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);    
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontos1);
    printf("\n");
    
    //dados da segunda carta:
    printf("Insira os dados da carta 2:\nDigite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado2); //espaço antes da leitura do input para não armazenar o enter do input anterior;
    printf("Digite um número de 01 a 04 representar o estado: ");
    scanf("%s", codigo2);    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);    
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontos2);

    //impressão dos dados:
    printf(".\n");
    printf(".\n");
    printf(".\n");
    printf("============================\n");
    printf("####### CARTA 1 #######\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1); //o formatador .2 indica 2 casas decimais após a vírgula;
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("============================\n");
    printf("\n");
    printf("============================\n");
    printf("####### CARTA 2 #######\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n",estado2 ,codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2); //o formatador .2 indica 2 casas decimais após a vírgula;
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("============================\n");
    printf("\n");
    printf("         FIM\n");
    printf("\n");

    //finalização com sucesso:
    return 0;
}
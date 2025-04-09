#include <stdio.h>
#include <locale.h>
#include <ctype.h> // Para usar a função toupper()

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Variáveis do Jogador 1   
    char estado1, cod1[3], nomecid1[25];
    int populacao1, npontoturistico1;
    float area1, pib1, denspop1,pibpercap1;

    // Variáveis do Jogador 2
    char estado2, cod2[3], nomecid2[25];
    int populacao2, npontoturistico2;
    float area2, pib2, denspop2, pibpercap2;

    // Boas-vindas ao jogo
    printf("\n");
    printf("          --- BEM VINDO AO SUPER TRUNFO ---\n");
    printf("\n");

    // Coleta de dados do Jogador 1
    printf("JOGADOR NÚMERO 1, ADICIONE AS INFORMAÇÕES DA SUA CARTA: \n\n");

    printf("Informe o estado de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Informe o código de '01' a '04': ");
    scanf(" %s", cod1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomecid1); // Especificador que possibilita o ESPAÇO e ACENTOS

    printf("Informe o número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Informe a área: ");
    scanf(" %f", &area1);
    

    printf("Informe o PIB: ");
    scanf(" %f", &pib1);
    pib1 *= 1000000000; //Calculo para converter o PIB para bilhão para que o calculo de PIB per capita seja corretamente

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &npontoturistico1);

    denspop1 = (float) populacao1 / area1; //Para que a variável de densidade receba o valor desejado
    pibpercap1 = (float) pib1 / populacao1; //Para que a variável de PIB per capita receba o valor desejado
   
    printf("\nMUITO BEM, JOGADOR NÚMERO 1!! AS INFORMAÇÕES DA SUA CARTA FORAM ARMAZENADAS EM 'CARTA 1'.\n\n");

    // Coleta de dados do Jogador 2
    printf("VEZ DO JOGADOR NÚMERO 2, ADICIONE AS INFORMAÇÕES DA SUA CARTA: \n\n");

    printf("Informe o estado de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Informe o código de '01' a '04': ");
    scanf(" %s", cod2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomecid2);

    printf("Informe o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Informe a área: ");
    scanf(" %f", &area2);
    
    printf("Informe o PIB: ");
    scanf(" %f", &pib2);
    pib2 *= 1000000000;

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &npontoturistico2);

    denspop2 = (float) populacao2 / area2;
    pibpercap2 = (float) pib2 / populacao2;

    printf("\nMUITO BEM, JOGADOR NÚMERO 2!! AS INFORMAÇÕES DA SUA CARTA FORAM ARMAZENADAS EM 'CARTA 2'.\n\n");


    // Impressão dos resultados
    printf("                         --- CHEGOU A HORA DOS RESULTADOS ---\n\n");

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", toupper(estado1)); // Mostra a letra do estado em maiúsculo mesmo que escrita em minúsculo
    printf("Código: %c%s\n", toupper(estado1), cod1); // Mesma coisa no código
    printf("Nome da Cidade: %s\n", nomecid1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000); //Operação de divisão para fazer uma exibição abreviada do valor
    printf("Número de Pontos Turísticos: %d\n", npontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: %.2f reais\n", pibpercap1);
    printf("\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", toupper(estado2));
    printf("Código: %c%s\n", toupper(estado2), cod2);
    printf("Nome da Cidade: %s\n", nomecid2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", npontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: %.2f reais\n", pibpercap2);
    return 0;
}
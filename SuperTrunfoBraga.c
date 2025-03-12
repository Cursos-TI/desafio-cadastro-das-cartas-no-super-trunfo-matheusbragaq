#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    float Populacao1, Populacao2;
    int NumTuris, NumTuris2;
    int Carta, Carta2;
    float PIB, PIB2;
    float Area, Area2;
    char NomedaCidade1[50];
    char NomedaCidade2[50];
    char Estado[50];
    char Estado2[50]; 

    // Mensagem de boas-vindas
    printf("Olá, seja bem-vindo ao jogo do Super Trunfo.\n\n            Vamos começar!\n\n");

    // Entrada de dados para a primeira carta
    printf("Digite o Número da carta (A): ");
    scanf("%d", &Carta);
    printf("O Número escolhido foi: A%d\n\n", Carta);

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite o Estado: ");
    scanf("%s", Estado); // Corrigido para usar %s, pois é uma string
    printf("O Estado escolhido foi: %s\n\n", Estado);

    printf("Agora digite a cidade: ");
    scanf("%s", NomedaCidade1);
    printf("A cidade escolhida foi: %s\n\n", NomedaCidade1);

    printf("Agora digite a população: ");
    scanf("%f", &Populacao1);
    printf("A população é: %.2f\n\n", Populacao1); // Formatação para 2 casas decimais

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite o PIB: ");
    scanf("%f", &PIB);
    printf("O PIB da cidade é: %.2f\n\n", PIB); // Formatação para 2 casas decimais

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite a Área em km²: ");
    scanf("%f", &Area);
    printf("A Área da cidade é: %.2f\n\n", Area); // Formatação para 2 casas decimais

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite o Número de pontos turísticos: ");
    scanf("%d", &NumTuris);
    printf("São %d lugares turísticos.\n\n", NumTuris);

    // Entrada de dados para a segunda carta
    printf("\nAGORA VAMOS PARA A SEGUNDA CARTA:\n");

    printf("\nDigite o Número da carta (B): ");
    scanf("%d", &Carta2);
    printf("O Número escolhido foi: B%d\n\n", Carta2);

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite o Estado: ");
    scanf("%s", Estado2); 
    printf("O Estado escolhido foi: %s\n\n", Estado2);

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite a cidade: ");
    scanf("%s", NomedaCidade2);
    printf("A cidade escolhida foi: %s\n\n", NomedaCidade2);

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite a população: ");
    scanf("%f", &Populacao2);
    printf("A população é: %.2f\n\n", Populacao2); // Formatação para 2 casas decimais

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite o PIB: ");
    scanf("%f", &PIB2);
    printf("O PIB da cidade é: %.2f\n\n", PIB2); // Formatação para 2 casas decimais

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite a Área em km²: ");
    scanf("%f", &Area2);
    printf("A Área da cidade é: %.2f\n\n", Area2); // Formatação para 2 casas decimais

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Agora digite o Número de pontos turísticos: ");
    scanf("%d", &NumTuris2);
    printf("São %d lugares turísticos.\n\n", NumTuris2);

    // Mensagem de encerramento
    printf("\n\nCHEGOU AO FIM :(");
    printf(", MAS");
    printf("\n\nOBRIGADO POR PARTICIPAR\n\n");
    printf("\n\nVOLTE SEMPRE. \n\n");
    printf(":)\n");

    return 0;
}
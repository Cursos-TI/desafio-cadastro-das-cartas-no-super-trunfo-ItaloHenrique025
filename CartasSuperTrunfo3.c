#include <stdio.h>

int comparar_valor_maximo(float v1, float v2) {
    // Função para comparar se v1 é maior que v2
    return v1 > v2 ? 1 : 0;
}

int comparar_valor_minimo(float v1, float v2) {
    // Função para comparar se v1 é menor que v2 (usado para densidade populacional)
    return v1 < v2 ? 1 : 0;
}

int main() {
    // Carta 1
    char estado1;
    char codigo1[5];
    char nome1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nome2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é para limpar o buffer do teclado
    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);  // Lê a linha inteira com espaços
    printf("População: ");
    scanf("%lu", &populacao1);  // Usa unsigned long int para população
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  // O espaço antes de %c é para limpar o buffer do teclado
    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);  // Lê a linha inteira com espaços
    printf("População: ");
    scanf("%lu", &populacao2);  // Usa unsigned long int para população
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparações dos Atributos
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta %d venceu (%d)\n", comparar_valor_maximo(populacao1, populacao2) ? 1 : 2, comparar_valor_maximo(populacao1, populacao2));
    
    // Comparação de Área
    printf("Área: Carta %d venceu (%d)\n", comparar_valor_maximo(area1, area2) ? 1 : 2, comparar_valor_maximo(area1, area2));

    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n", comparar_valor_maximo(pib1, pib2) ? 1 : 2, comparar_valor_maximo(pib1, pib2));

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", comparar_valor_maximo(pontos_turisticos1, pontos_turisticos2) ? 1 : 2, comparar_valor_maximo(pontos_turisticos1, pontos_turisticos2));

    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comparar_valor_minimo(densidade_populacional1, densidade_populacional2) ? 1 : 2, comparar_valor_minimo(densidade_populacional1, densidade_populacional2));

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", comparar_valor_maximo(pib_per_capita1, pib_per_capita2) ? 1 : 2, comparar_valor_maximo(pib_per_capita1, pib_per_capita2));

    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", comparar_valor_maximo(super_poder1, super_poder2) ? 1 : 2, comparar_valor_maximo(super_poder1, super_poder2));

    return 0;
}

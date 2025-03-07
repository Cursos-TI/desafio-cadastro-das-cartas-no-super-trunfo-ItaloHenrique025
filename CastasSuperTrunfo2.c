#include <stdio.h>

int main() {

    int Codigo, PontosTuristico;
    char Nome[50];
    float Populacao, Densidade, area, PIB, Capita;

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome);
    
    printf("Qual o codigo de sua Carta?: \n");
    scanf("%d", &Codigo);

    printf("Quantos PontosTurísticos essa Cidade tem?: \n");
    scanf("%d",&PontosTuristico);

    printf("Qual a População dessa Cidade?: \n");
    scanf("%f", &Populacao);

    printf("Qual a PIB dessa Cidade?: \n");
    scanf("%f", &PIB);

    printf("Qual a área dessa Cidade?: \n");
    scanf("%f", &area);

    Densidade = Populacao / area;
    Capita = PIB / Populacao;
    
    printf("Nome da Cidade: %s\nCodigo: %d\n", Nome, Codigo);
    printf("Pontos Turístico: %d\nPopulação: %f\nDensidade Populacional: %.2f\nPIB: %f\nPIB per Capita:%.2f\nArea: %f", PontosTuristico, Populacao, Densidade, PIB, Capita, area);
    
    return 0;
}


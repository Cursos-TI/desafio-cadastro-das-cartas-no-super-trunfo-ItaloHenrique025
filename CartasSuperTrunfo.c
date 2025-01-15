#include <stdio.h>

int main() {

    int Codigo, PontosTuristico;
    char Nome[50];
    float População, área, PIB;

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome);
    
    printf("Qual o codigo de sua Carta?: \n");
    scanf("%d", &Codigo);

    printf("Quantos PontosTurísticos essa Cidade tem?: \n");
    scanf("%d",&PontosTuristico);

    printf("Qual a População dessa Cidade?: \n");
    scanf("%f", &População);

    printf("Qual a PIB dessa Cidade?: \n");
    scanf("%f", &PIB);

    printf("Qual a área dessa Cidade?: \n");
    scanf("%f", &área);
    
    printf("Nome da Cidade: %s - Codigo: %d\n", Nome, Codigo);
    printf("Pontos Turístico: %d\n População: %f\n PIB: %f\n Area: %f", PontosTuristico, População, PIB, área);
    
    return 0;
}


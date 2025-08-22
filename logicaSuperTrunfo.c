#include <stdio.h>

int main() {
    //Criação de variáveis
    int opçao;
    char estado1[10], estado2[10];
    char codigocarta1[10], codigocarta2[10];
    char nomecidade1[51], nomecidade2[51];
    unsigned int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int tur1, tur2;

    printf("  *** Menu Principal ***\n\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n\n");
    printf("Escolha: ");
    scanf("%d", &opçao);

    switch (opçao)
    {
    case 1:
        //Criação da primeira carta do jogo.
    printf("Cadastro de cartas(1)\n\nEstado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigocarta1);

    printf("Nome da Cidade: ");
    scanf(" %50[^\n]", nomecidade1);

    printf("População da cidade: ");
    scanf("%u", &populaçao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB(Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos da cidade: ");
    scanf("%d", &tur1);

    //Criação da segunda carta do jogo.
    printf("\n\nCadastro de cartas(2)\n\nEstado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigocarta2);

    printf("Nome da Cidade: ");
    scanf(" %50[^\n]", nomecidade2);

    printf("População da cidade: ");
    scanf("%u", &populaçao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB(Produto Interno Bruto): ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos da cidade: ");
    scanf("%d", &tur2);

    
    float densid1 = (float) populaçao1 / area1;
    float densid2 = (float) populaçao2 / area2;
    
    float PIBpc1  = (float) pib1 / populaçao1;
    float PIBpc2  = (float) pib2 / populaçao2;

    float superpoder1 = (float) (populaçao1 + area1 + pib1 + tur1 + PIBpc1 + ( 1 / densid1)); 
    float superpoder2 = (float) (populaçao2 + area2 + pib2 + tur2 + PIBpc2 + ( 1 / densid2)); 

    
    
    //informações da primeira carta a serem exibidas na tela.
    printf("\nCarta 1\n");
    printf("Estado: %s\nCódigo: %s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s\nPopulação: %u\n", nomecidade1, populaçao1);
    printf("Área: %.2f km²\nPIB: %.2f reais\n", area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("Densidade Populacional : %.2f hab/km²\n", densid1); 
    printf("PIB per Capita: %.2f reais\n", PIBpc1); 
    printf("Super Poder: %.2f\n\n", superpoder1); 
    
    //informações da segunda carta a serem exibidas na tela.
    printf("Carta 2\n");
    printf("Estado: %s\nCódigo: %s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s\nPopulação: %u\n", nomecidade2, populaçao2);
    printf("Área: %.2f km²\nPIB: %.2f reais\n", area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);
    printf("Densidade Populacional : %.2f hab/km²\n", densid2); 
    printf("PIB per Capita: %.2f reais\n", PIBpc2); 
    printf("Super Poder: %.2f\n\n", superpoder2);

    // Comparação de cartas
    printf(" Comparação de Atributos:\n\n");

    printf("  População:\n");
    printf("Carta 1 - %s: %u\n", nomecidade1, populaçao1);
    printf("Carta 2 - %s: %u\n", nomecidade2, populaçao2);
    if (populaçao1 > populaçao2)
    {
        printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if (populaçao1 < populaçao2)
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }

    printf("  Área:\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1, area1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2, area2);

    if (area1 > area2)
    {
         printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if (area1 < area2)
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }

    printf("  PIB:\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1, pib1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2, pib2);
    if (pib1 > pib2){

        printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if (pib1 < pib2)
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }
    
    printf("  Pontos Turísticos:\n");
    printf("Carta 1 - %s: %d\n", nomecidade1, tur1);
    printf("Carta 2 - %s: %d\n", nomecidade2, tur2);
    if (tur1 > tur2)
    {
        printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if (tur1 < tur2)
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }

    printf("  Densidade Populacional:\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1, densid1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2, densid2);
    if ((1 / densid1) > (1 / densid2))
    {
        printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if ((1 / densid1) < (1 / densid2))
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }

    printf("  PIB per Capita:\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1, PIBpc1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2, PIBpc2);
    if (PIBpc1 > PIBpc2)
    {
        printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if (PIBpc1 < PIBpc2)
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }

    printf("  Super Poder:\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1, superpoder1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2, superpoder2);
    if (superpoder1 > superpoder2)
    {
        printf("Carta 1 (%s) venceu!\n\n", nomecidade1);
    }
    else if (superpoder1 < superpoder2)
    {
        printf("Carta 2 (%s) venceu!\n\n", nomecidade2); 
    } else {
        printf("### Empate! ###\n\n");
    }
        break;

    case 2:
        printf("Regras do jogo:\n.......\n....... \n\n"); 
        break;
    
    case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default: 
        printf("Opção inválida!");
        break;
    }

    
    
    


    return 0;

    }


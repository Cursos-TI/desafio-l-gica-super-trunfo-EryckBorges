#include <stdio.h>

int main() {
    //Define as váriaveis da carta 1
    char estado1[20];
    float pib1;
    char codigoCarta1[20];
    char nomeCidade1[20];
    int populacao1;
    int pontoTuristico1;
    float area1;

    //Define as váriaveis da carta 2
    char estado2[20];
    float pib2;
    char codigoCarta2[20];
    char nomeCidade2[20];
    unsigned long int populacao2;
    int pontoTuristico2;
    float area2;
      
    // Cadastro das Cartas:

    //Perguntas para a primeira carta

    //Pergunta para o usuário qual o estado
    printf("\n \n Vamos cadastrar a primeira carta \n");
    printf("\n Qual o estado: \n");
    scanf("%s", &estado1);

    //Pergunta para o usuário qual o nome 
    printf("\n Qual o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    //Pergunta para o usuário qual o código da carta
    printf("\n Qual o código da carta: \n");
    scanf("%s", &codigoCarta1);

    //Pergunta para o usuário qual o pib
    printf("\n Qual o pib: \n");
    scanf("%f", &pib1);

    //Pergunta para o usuário qual o número da população
    printf("\n Qual o número da população: \n");
    scanf("%i", &populacao1);

    //Pergunta para o usuário quantos pontos turisticos tem
    printf("\n Quantos pontos turisticos tem: \n");
    scanf("%i", &pontoTuristico1);

    //Pergunta para o usuário qual a area
    printf("\n Qual a área da cidade: \n");
    scanf("%f", &area1);

    //Perguntas para a segunda carta

    //Pergunta para o usuário qual o estado
    printf("\n \n Vamos cadastrar a segunda carta agora \n");
    printf("\n Qual o estado: \n");
    scanf("%s", &estado2);

    //Pergunta para o usuário qual o nome 
    printf("\n Qual o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    //Pergunta para o usuário qual o código da carta
    printf("\n Qual o código da carta: \n");
    scanf("%s", &codigoCarta2);

    //Pergunta para o usuário qual o pib
    printf("\n Qual o pib: \n");
    scanf("%f", &pib2);
 
    //Pergunta para o usuário qual o número da população
    printf("\n Qual o número da população: \n");
    scanf("%i", &populacao2);

    //Pergunta para o usuário quantos pontos turisticos tem
    printf("\n Quantos pontos turisticos tem: \n");
    scanf("%i", &pontoTuristico2);

    //Pergunta para o usuário qual a area
    printf("\n Qual a área da cidade: \n");
    scanf("%f", &area2);

    //Antes de exibir os dados vamos calcular alguns parametros

    //Calcula a densidade populacional da carta 1

    float densidadeCarta1, pibCapitaCarta1;

    densidadeCarta1 = populacao1 / area1;
    pibCapitaCarta1 = pib1 / populacao1;

    //Calcula a densidade populacional da carta 2

    float densidadeCarta2, pibCapitaCarta2;

    densidadeCarta2 = populacao2 / area2;
    pibCapitaCarta2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:

    //Exibe os dados da primeira carta

    printf("\n//////////////////////////////////////////////////////////////");  
    printf("\n \n Dados da primeira carta");
    printf("\n \n Estado: %s", estado1);
    printf("\n Cidade: %s", nomeCidade1);
    printf("\n População: %i", populacao1);
    printf("\n Pib: %.2f", pib1);
    printf("\n Pontos Turisticos: %i", pontoTuristico1);
    printf("\n Área: %.2f km²", area1);
    printf("\n Código da Carta: %s", codigoCarta1);
    printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta1);
    printf("\n PIB per Capita: %.2f reais \n\n", pibCapitaCarta1);

    //Exibe os dados da segunda carta

    printf("//////////////////////////////////////////////////////////////");  
    printf("\n\n Dados segunda carta");
    printf("\n \n Estado: %s", estado2);
    printf("\n Cidade: %s", nomeCidade2);
    printf("\n População: %i", populacao2);
    printf("\n Pib: %.2f", pib2);
    printf("\n Pontos Turisticos: %i", pontoTuristico2);
    printf("\n Área: %.2f km²", area2);
    printf("\n Código da Carta: %s", codigoCarta2);
    printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
    printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

    //Define o Super Poder

    float superPoder1 = (float) populacao1 + pib1 + area1 + pontoTuristico1 + pibCapitaCarta1 + (1.0 / densidadeCarta1);
    float superPoder2 = (float) populacao2 + pib2 + area2 + pontoTuristico2 + pibCapitaCarta2 + (1.0 / densidadeCarta2);

    //Faz a verificação do valores de poder das cartas

    //Compara as duas cartas e define o vencedor

    if (populacao1 > populacao2) {           //Compara a quantidade de população nas cidades
        printf("//////////////////////////////////////////////////////////////");     
        printf("\n\nCarta 1 - %s - %i", nomeCidade1, populacao1);       //Exibe o valor que cada cidade possui de habitantes
        printf("\nCarta 2 - %s - %i", nomeCidade2, populacao2);       //Exibe o valor que cada cidade possui de habitantes
        printf("\nResultado: Carta 1 (%s) Venceu!", nomeCidade1);     //Exibe o Resultado da Cidade Mais Populosa
    }else if (populacao1 == populacao2) {
        printf("//////////////////////////////////////////////////////////////");  
        printf("\n\nCarta 1- %s - %i", nomeCidade1, populacao1);        //Exibe o valor que cada cidade possui de habitantes
        printf("\nCarta 2 - %s - %i", nomeCidade2, populacao2);       //Exibe o valor que cada cidade possui de habitantes
        printf("\nResultado: Carta 1 e Carta 2 tem a mesma quantidade de população, ou seja EMPATOU!");     //Exibe o Resultado da Cidade Mais Populosa
    }else {
        printf("//////////////////////////////////////////////////////////////");    
        printf("\n\nCarta 1- %s - %i", nomeCidade1, populacao1);        //Exibe o valor que cada cidade possui de habitantes
        printf("\nCarta 2 - %s - %i", nomeCidade2, populacao2);       //Exibe o valor que cada cidade possui de habitantes
        printf("\nResultado: Carta 2 (%s) Venceu!", nomeCidade2);     //Exibe o Resultado da Cidade Mais Populosa
    };

    return 0;
}

#include <stdio.h>

int main() {
    //Define as váriaveis da carta 1
    char pais1[20];
    float pib1;
    char codigoCarta1[20];
    char nomeCidade1[20];
    unsigned long int populacao1;
    int pontoTuristico1;
    float area1;

    //Define as váriaveis da carta 2
    char pais2[20];
    float pib2;
    char codigoCarta2[20];
    char nomeCidade2[20];
    unsigned long int populacao2;
    int pontoTuristico2;
    float area2;

    // Cadastro das Cartas:

    //Perguntas para a primeira carta

    //Pergunta para o usuário qual o pais
    printf("\n \n Vamos cadastrar a primeira carta \n");
    printf("\n Qual o pais: \n");
    scanf("%s", &pais1);

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

    //Pergunta para o usuário qual o pais
    printf("\n \n Vamos cadastrar a segunda carta agora \n");
    printf("\n Qual o pais: \n");
    scanf("%s", &pais2);

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

    //Define o Super Poder

    float superPoder1 = (float) populacao1 + pib1 + area1 + pontoTuristico1 + pibCapitaCarta1 + (1.0 / densidadeCarta1);
    float superPoder2 = (float) populacao2 + pib2 + area2 + pontoTuristico2 + pibCapitaCarta2 + (1.0 / densidadeCarta2);

    //Menu para a escolha de comparação as duas cartas e define o vencedor

    int atributoEscolhido, secundAtributo;

    //Pergunta para o usuário qual comparação ele deseja utilizar

    printf("##### Escolha qual atributo você quer comparar #####\n\n");
    printf("1. Nome do País\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turisticos\n");
    printf("6. Densidade demográfica \n\n");
    scanf("%i", &atributoEscolhido);

    //Verifica qual o atributo que foi escolhido para remover do menu

    switch (atributoEscolhido)
    {
    case 1:
        //Pergunta para o usuário qual a segunda comparação ele deseja utilizar

        printf("##### Escolha qual o segundo atributo você quer comparar #####\n\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turisticos\n");
        printf("5. Densidade demográfica \n\n");
        scanf("%i", &secundAtributo);
    break;
    case 2:
        //Pergunta para o usuário qual a segunda comparação ele deseja utilizar

        printf("##### Escolha qual o segundo atributo você quer comparar #####\n\n");
        printf("1. Nome do País\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turisticos\n");
        printf("5. Densidade demográfica \n\n");
        scanf("%i", &secundAtributo);
    break;
    case 3:
        //Pergunta para o usuário qual a segunda comparação ele deseja utilizar

        printf("##### Escolha qual o segundo atributo você quer comparar #####\n\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turisticos\n");
        printf("5. Densidade demográfica \n\n");
        scanf("%i", &secundAtributo);
    break;
    case 4:
        //Pergunta para o usuário qual a segunda comparação ele deseja utilizar

        printf("##### Escolha qual o segundo atributo você quer comparar #####\n\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. Número de Pontos Turisticos\n");
        printf("5. Densidade demográfica \n\n");
        scanf("%i", &secundAtributo);
    break;
    case 5:
        //Pergunta para o usuário qual a segunda comparação ele deseja utilizar

        printf("##### Escolha qual o segundo atributo você quer comparar #####\n\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Densidade demográfica \n\n");
        scanf("%i", &secundAtributo);
    break;
    case 6:
        //Pergunta para o usuário qual a segunda comparação ele deseja utilizar

        printf("##### Escolha qual o segundo atributo você quer comparar #####\n\n");
        printf("1. Nome do País\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de Pontos Turisticos \n\n");
        scanf("%i", &secundAtributo);
    break;
    default:
        printf("##### Opção Inválida #####");
    break;
    }

    //Da uma numeração para cada tipo de escolha de comparação através de Operador Ternário

    int comparacao;

    if (atributoEscolhido == 2 && secundAtributo == 1 || atributoEscolhido == 1 && secundAtributo == 2) {
        comparacao = 1;
    } else if (atributoEscolhido == 2 && secundAtributo == 2 || atributoEscolhido == 3 && secundAtributo == 2) {
        comparacao = 2;
    } else if (atributoEscolhido == 2 && secundAtributo == 3 || atributoEscolhido == 4 && secundAtributo == 2) {
        comparacao = 3;
    } else if (atributoEscolhido == 2 && secundAtributo == 4 || atributoEscolhido == 5 && secundAtributo == 2) {
        comparacao = 4;
    } else if (atributoEscolhido == 2 && secundAtributo == 5 || atributoEscolhido == 6 && secundAtributo == 2) {
        comparacao = 5;
    } else if (atributoEscolhido == 3 && secundAtributo == 1 || atributoEscolhido == 1 && secundAtributo == 3) {
        comparacao = 6;
    } else if (atributoEscolhido == 3 && secundAtributo == 3 || atributoEscolhido == 4 && secundAtributo == 3) {
        comparacao = 7;
    } else if (atributoEscolhido == 3 && secundAtributo == 4 || atributoEscolhido == 5 && secundAtributo == 3) {
        comparacao = 8;
    } else if (atributoEscolhido == 3 && secundAtributo == 5 || atributoEscolhido == 6 && secundAtributo == 3) {
        comparacao = 9;
    } else if (atributoEscolhido == 4 && secundAtributo == 1 || atributoEscolhido == 1 && secundAtributo == 4) {
        comparacao = 10;
    } else if (atributoEscolhido == 4 && secundAtributo == 4 || atributoEscolhido == 5 && secundAtributo == 4) {
        comparacao = 11;
    } else if (atributoEscolhido == 4 && secundAtributo == 5 || atributoEscolhido == 6 && secundAtributo == 4) {
        comparacao = 12;
    } else if (atributoEscolhido == 5 && secundAtributo == 1 || atributoEscolhido == 1 && secundAtributo == 5) {
        comparacao = 13;
    } else if (atributoEscolhido == 5 && secundAtributo == 5 || atributoEscolhido == 6 && secundAtributo == 5) {
        comparacao = 14;
    } else if (atributoEscolhido == 6 && secundAtributo == 1 || atributoEscolhido == 1 && secundAtributo == 5) {
        comparacao = 15;
    } else {
        comparacao = 0;
    }    

    //Define uma varivavel que ira receber a soma dos atributos e exibir 

    int somaAtibutos1, somaAtibutos2;

    switch (comparacao)
    {
    case 0:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("Alguma Opção Escolhida não era válida\n");
    break;
    case 1:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Nome do País\n");
        printf("2.População\n\n");

        if (populacao1 > populacao2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("População Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);

            printf("##### Carta 1 Ganhou! #####");
        }else if (populacao1 < populacao2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("População Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);

            printf("##### Carta 2 Ganhou! #####");
        }else {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("População Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);

            printf("##### Empatou! #####");
        }
    break;
    case 2:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.População\n");
        printf("2.Área\n\n");

        somaAtibutos1 = (float) populacao1 + area1;
        somaAtibutos2 = (float) populacao2 + area2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("\n\nPopulação Carta 1 + Área Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + Área Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("\n\nPopulação Carta 1 + Área Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + Área Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("\n\nPopulação Carta 1 + Área Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + Área Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 3:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.População\n");
        printf("2.PIB\n\n");

        somaAtibutos1 = (float) populacao1 + pib1;
        somaAtibutos2 = (float) populacao2 + pib2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);

            printf("\n\nPopulação Carta 1 + PIB Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + PIB Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);

            printf("\n\nPopulação Carta 1 + PIB Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + PIB Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);

            printf("\n\nPopulação Carta 1 + PIB Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + PIB Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 4:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.População\n");
        printf("2.Número de Pontos Turisticos\n\n");

        somaAtibutos1 = populacao1 + pontoTuristico1;
        somaAtibutos2 = populacao2 + pontoTuristico2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nPopulação Carta 1 + Número de Pontos Turisticos Carta 1 = %i", somaAtibutos1);
            printf("\nPopulação Carta 2 + Número de Pontos Turisticos Carta 2 = %i", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nNúmeros de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmeros de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nPopulação Carta 1 + Números de Pontos Turisticos Carta 1 = %i", somaAtibutos1);
            printf("\nPopulação Carta 2 + Números de Pontos Turisticos Carta 2 = %i", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nPopulação Carta 1 + Número de Pontos Turisticos Carta 1 = %i", somaAtibutos1);
            printf("\nPopulação Carta 2 + Número de Pontos Turisticos Carta 2 = %i", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 5:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.População\n");
        printf("2.Densidade Demográfica\n\n");

        somaAtibutos1 = (float) populacao1 + densidadeCarta1;
        somaAtibutos2 = (float) populacao2 + densidadeCarta2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nPopulação Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nNDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nNDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nPopulação Carta 1 + NDensidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + NDensidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPopulação Carta 1 = %i", populacao1);
            printf("\nPopulação Carta 2 = %i", populacao2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nPopulação Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nPopulação Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 6:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Nome do País\n");
        printf("2.Área\n\n");

        if (area1 > area2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Área Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("##### Carta 1 Ganhou! #####");
        }else if (area1 < area2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Área Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("##### Carta 2 Ganhou! #####");
        }else {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Área Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("##### Empatou! #####");
        }
    break;
    case 7:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.PIB\n");
        printf("2.Área\n\n");

        somaAtibutos1 = (float) pib1 + area1;
        somaAtibutos2 = (float) pib2 + area2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("\n\nPIB Carta 1 + Área Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Área Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nNÁrea Carta 1 = %.2f", area1);
            printf("\nNÁrea Carta 2 = %.2f", area2);

            printf("\n\nPIB Carta 1 + NÁrea Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + NÁrea Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);

            printf("\n\nPIB Carta 1 + Área Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Área Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 8:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Número de Pontos Turisticos\n");
        printf("2.Área\n\n");

        somaAtibutos1 = (float) area1 + pontoTuristico1;
        somaAtibutos2 = (float) area2 + pontoTuristico2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);
            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nÁrea Carta 1 + Número de Pontos Turisticos Carta 1 = %.2f", somaAtibutos1);
            printf("\nÁrea Carta 2 + Número de Pontos Turisticos Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);
            printf("\n\nNúmeros de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmeros de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nÁrea Carta 1 + Números de Pontos Turisticos Carta 1 = %.2f", somaAtibutos1);
            printf("\nÁrea Carta 2 + Números de Pontos Turisticos Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);
            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nÁrea Carta 1 + Número de Pontos Turisticos Carta 1 = %.2f", somaAtibutos1);
            printf("\nÁrea Carta 2 + Número de Pontos Turisticos Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 9:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Densidade Demográfica\n");
        printf("2.Área\n\n");

        somaAtibutos1 = (float) area1 + densidadeCarta1;
        somaAtibutos2 = (float) area2 + densidadeCarta2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nÁrea Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nÁrea Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);
            printf("\n\nNDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nNDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nÁrea Carta 1 + NDensidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nÁrea Carta 2 + NDensidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nÁrea Carta 1 = %.2f", area1);
            printf("\nÁrea Carta 2 = %.2f", area2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nÁrea Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nÁrea Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 10:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Nome do País\n");
        printf("2.PIB\n\n");

        if (pib1 > pib1) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("PIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);

            printf("##### Carta 1 Ganhou! #####");
        }else if (pib1 < pib2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("PIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);

            printf("##### Carta 2 Ganhou! #####");
        }else {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("PIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);

            printf("##### Empatou! #####");
        }
    break;
    case 11:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.PIB\n");
        printf("2.Número de Pontos Turisticos\n\n");

        somaAtibutos1 = (float) pib1 + pontoTuristico1;
        somaAtibutos2 = (float) pib2 + pontoTuristico2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nPIB Carta 1 + Número de Pontos Turisticos Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Número de Pontos Turisticos Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nNúmeros de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmeros de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nPIB Carta 1 + Números de Pontos Turisticos Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Números de Pontos Turisticos Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("\n\nPIB Carta 1 + Número de Pontos Turisticos Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Número de Pontos Turisticos Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 12:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.PIB\n");
        printf("2.Densidade Demográfica\n\n");

        somaAtibutos1 = (float) pib1 + densidadeCarta1;
        somaAtibutos2 = (float) pib2 + densidadeCarta2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nPIB Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nPIB Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nPIB Carta 1 = %.2f", pib1);
            printf("\nPIB Carta 2 = %.2f", pib2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nPIB Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nPIB Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 13:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Nome do País\n");
        printf("2.Número de Pontos Turisticos\n\n");

        if (pontoTuristico1 > pontoTuristico2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Número de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("##### Carta 1 Ganhou! #####");
        }else if (pontoTuristico1 < pontoTuristico2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Número de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("##### Carta 2 Ganhou! #####");
        }else {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Número de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);

            printf("##### Empatou! #####");
        }
    break;
    case 14:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Número de Pontos Turisticos\n");
        printf("2.Densidade Demográfica\n\n");

        somaAtibutos1 = (float) pontoTuristico1 + densidadeCarta1;
        somaAtibutos2 = (float) pontoTuristico1 + densidadeCarta2;

        if (somaAtibutos1 > somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nNúmero de Pontos Turisticos Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nNúmero de Pontos Turisticos Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 1 Ganhou! #####");
        }else if (somaAtibutos1 < somaAtibutos2) {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nNúmero de Pontos Turisticos Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nNúmero de Pontos Turisticos Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Carta 2 Ganhou! #####");
        }else {
            printf("Nome do País Carta 1 = %s", pais1);
            printf("\nNome do País Carta 2 = %s", pais2);

            printf("\n\nNúmero de Pontos Turisticos Carta 1 = %i", pontoTuristico1);
            printf("\nNúmero de Pontos Turisticos Carta 2 = %i", pontoTuristico2);
            printf("\n\nDensidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("\n\nNúmero de Pontos Turisticos Carta 1 + Densidade Demográfica Carta 1 = %.2f", somaAtibutos1);
            printf("\nNúmero de Pontos Turisticos Carta 2 + Densidade Demográfica Carta 2 = %.2f", somaAtibutos2);

            printf("\n\n##### Empatou! #####");
        }
    break;
    case 15:
        printf("##### Atributos Escolhidos #####\n\n");
        printf("1.Nome do País\n");
        printf("2.Densidade Demográfica\n\n");

        if (densidadeCarta1 > densidadeCarta2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Densidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("##### Carta 2 Ganhou! #####");
        }else if (densidadeCarta1 < densidadeCarta2) {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Densidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("##### Carta 1 Ganhou! #####");
        }else {
            //Exibe os dados da primeira carta

            printf("\n//////////////////////////////////////////////////////////////");  
            printf("\n \n Dados da primeira carta");
            printf("\n \n pais: %s", pais1);
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
            printf("\n \n pais: %s", pais2);
            printf("\n Cidade: %s", nomeCidade2);
            printf("\n População: %i", populacao2);
            printf("\n Pib: %.2f", pib2);
            printf("\n Pontos Turisticos: %i", pontoTuristico2);
            printf("\n Área: %.2f km²", area2);
            printf("\n Código da Carta: %s", codigoCarta2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadeCarta2);
            printf("\n PIB per Capita: %.2f reais \n \n", pibCapitaCarta2);

            printf("Densidade Demográfica Carta 1 = %.2f", densidadeCarta1);
            printf("\nDensidade Demográfica Carta 2 = %.2f", densidadeCarta2);

            printf("##### Empatou! #####");
        }
    break;
    default:
    break;
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
	// Area para definir variáveis
	
	char estado1, estado2;
	char codigoCarta1[5], codigoCarta2[5];
	char nomeCidade1[50], nomeCidade2[50];
	int populacaoCidade1, populacaoCidade2;
	int qtdPontosTuristicosCidade1, qtdPontosTuristicosCidade2;
	float areaCidade1, areaCidade2;
	float pibCidade1, pibCidade2;
	float densidadePopulacional1, densidadePopulacional2;
	float pibPerCapita1, pibPerCapita2;
		
	// Area para configurar o cadastro de cartas
	
	// Cadastrar Carta 1
	
	printf("Cadastrar Carta 1:\n\n");

	printf("Digitar o Estado (uma letra de A a H): ");
	scanf(" %c", &estado1);

	printf("Digitar codigo da carta (letra do Estado e n. 01 a 04): ");
	scanf(" %s", codigoCarta1);

	getchar(); // Limpa o caractere '\n' que ficou no buffer antes de usar o fgets	

	printf("Digitar o nome da cidade: ");
	fgets(nomeCidade1, 50, stdin);
	nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
	
	printf("Digitar n. habitantes da cidade: ");
	scanf("%d", &populacaoCidade1);
	
	printf("Digitar area da cidade em quilometros quadrados: ");
	scanf("%f", &areaCidade1);
	
	printf("Digitar o Produto Interno Bruto da cidade (numero em bilhoes): ");
	scanf("%f", &pibCidade1);
	
	printf("Digitar a quantidade de pontos turisticos na cidade: ");
	scanf("%d", &qtdPontosTuristicosCidade1);
		
	// Cadastrar Carta 2
	
	printf("\n\nCadastrar Carta 2:\n\n");

	printf("Digitar o Estado (uma letra de A a H): ");
	scanf(" %c", &estado2);

	printf("Digitar codigo da carta (letra do Estado e n. 01 a 04): ");
	scanf(" %s", codigoCarta2);
	
	getchar(); // Limpa o caractere '\n' que ficou no buffer antes de usar o fgets
	printf("Digitar o nome da cidade: ");
	fgets(nomeCidade2, 50, stdin);
	nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
	
	printf("Digitar n. habitantes da cidade: ");
	scanf("%d", &populacaoCidade2);
	
	printf("Digitar area da cidade em quilometros quadrados: ");
	scanf("%f", &areaCidade2);
	
	printf("Digitar o Produto Interno Bruto da cidade (numero em bilhoes): ");
	scanf("%f", &pibCidade2);
	
	printf("Digitar a quantidade de pontos turisticos na cidade: ");
	scanf("%d", &qtdPontosTuristicosCidade2);	
		
	// Calculos
	
	densidadePopulacional1 = populacaoCidade1 / areaCidade1;
	densidadePopulacional2 = populacaoCidade2 / areaCidade2;
	
	pibPerCapita1 = pibCidade1 / areaCidade1;
	pibPerCapita2 = pibCidade2 / areaCidade2;


	// Area para imprimir as cartas
	
	// Imprimir Carta 1
	
	printf("\n\nCarta 1:\n\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeCidade1);
	printf("Populacao: %d\n", populacaoCidade1);
	printf("Area: %.2f\n", areaCidade1);
	printf("PIB: %.2f bilhoes de reais\n", pibCidade1);
	printf("Numero de pontos turisticos: %d\n", qtdPontosTuristicosCidade1);
	printf("Densidade populacional: %.2f\n", densidadePopulacional1);
	printf("PIB per Capita: %.2f", pibPerCapita1);
	
	// Imprimir Carta 2
	
	printf("\n\nCarta 2:\n\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeCidade2);
	printf("Populacao: %d\n", populacaoCidade2);
	printf("Area: %.2f\n", areaCidade2);
	printf("PIB: %.2f bilhoes de reais\n", pibCidade2);
	printf("Numero de pontos turisticos: %d\n", qtdPontosTuristicosCidade2);
	printf("Densidade populacional: %.2f\n", densidadePopulacional2);
	printf("PIB per Capita: %.2f\n\n", pibPerCapita2);

return 0;
}
#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
	
  char estado1, estado2;
	char codigoCarta1[5], codigoCarta2[5];
	char nomeCidade1[50], nomeCidade2[50];
	int populacaoCidade1, populacaoCidade2;
	float areaCidade1, areaCidade2;
	float pibCidade1, pibCidade2;
	int qtdPontosTuristicosCidade1, qtdPontosTuristicosCidade2;
  
  // Área para entrada de dados
// Cadastrar Carta 1
	
	printf("Cadastrar Carta 1:\n\n");

	printf("Digitar o Estado (uma letra de A a H): ");
	scanf(" %c", &estado1);

	printf("Digitar codigo da carta (letra do Estado e n. 01 a 04): ");
	scanf(" %s", codigoCarta1);
	
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

  // Área para exibição dos dados da cidade
  	// Imprimir Carta 1
	
	printf("\n\nCarta 1:\n\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeCidade1);
	printf("Populacao: %d\n", populacaoCidade1);
	printf("Area: %.2f\n", areaCidade1);
	printf("PIB: %.2f bilhoes de reais\n", pibCidade1);
	printf("Numero de pontos turisticos: %d", qtdPontosTuristicosCidade1);
	
	// Imprimir Carta 2
	
	printf("\n\nCarta 2:\n\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeCidade2);
	printf("Populacao: %d\n", populacaoCidade2);
	printf("Area: %.2f\n", areaCidade2);
	printf("PIB: %.2f bilhoes de reais\n", pibCidade2);
	printf("Numero de pontos turisticos: %d\n\n", qtdPontosTuristicosCidade2);

  return 0;
} 

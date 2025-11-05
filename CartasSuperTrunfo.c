#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  //carta 2
  char estado2;
  char codigo2[6];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;


  // Área para entrada de dados
  //Entrada de Dados da Carta 1
  printf("=== Cadastro da Carta 1===\n\n");

  printf("Informe o Estado (A a H): \n");
  scanf(" %c", &estado1);

  printf("Informe o Código da Carta (ex: A01): \n");
  scanf("%s", &codigo1);

  printf("Informe o Nome da Cidade: \n");
  scanf("%s", &nomeCidade1);

  printf("Informe a População: \n");
  scanf("%d", &populacao1);

  printf("Informe a Área em Km²: \n");
  scanf("%f", &area1);

  printf("Informe o PIB: \n");
  scanf("%f", &pib1);

  printf("Informe o Número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos1);

  //Entrada de Dados da Carta 2
  printf("\n=== Cadastro da Carta 2=== \n\n");

  printf("Informe o Estado (A a H): \n");
  scanf(" %c", &estado2);

  printf("Informe o Código da Carta (ex: A02): \n");
  scanf("%s", &codigo2);

  printf("Informe o Nome da Cidade: \n");
  scanf("%s", &nomeCidade2);
  
  printf("Informe a População: \n");
  scanf("%d", &populacao2);

  printf("Informe a Área em Km²: \n");
  scanf("%f", &area2);

  printf("Informe o PIB: \n");
  scanf("%f", &pib2);

  printf("Informe o Número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("\n=== EXIBIÇÃO DE RESULTADOS ===\n\n");

  printf("Dados da Carta 1: \n\n");

  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("População: %d\n", populacao1);
  printf("Área em Km²: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Números de Pontos Turísticos: %d\n", pontosTuristicos1);
  
  printf("\nDados da Carta 2: \n\n");

  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("População: %d\n", populacao2);
  printf("Área em Km²: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 

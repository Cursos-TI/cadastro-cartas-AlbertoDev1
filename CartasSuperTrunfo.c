#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

// Dados da Carta 1
int Carta1;
char Estado1[50];
char Codigo1[10];
char NomeCidade1[50];
int Populacao1;
float Area1;
float PIB1;
int PontosTuristicos1;

// Dados da Carta 2
int Carta2;
char Estado2[50];
char Codigo2[10];
char NomeCidade2[50];
int Populacao2;
float Area2;
float PIB2;
int PontosTuristicos2;

  // Área para entrada de dados

// --- ENTRADA DE DADOS CARTA 1 ---
printf("\n--- Digite os dados da CARTA 1 ---\n");

printf("Digite qual a carta: \n");
scanf("%d", &Carta1);

printf("Digite o estado: \n");
scanf("%s", &Estado1);

printf("Digite o codigo da cidade: \n");
scanf("%s", &Codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s", &NomeCidade1);

printf("Digite a populacao: \n");
scanf("%d", &Populacao1);

printf("Digite a area: \n");
scanf("%f", &Area1);

printf("Digite o PIB: \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos1);

  // --- ENTRADA DE DADOS CARTA 2 ---
printf("\n--- Digite os dados da CARTA 2 ---\n");

printf("Digite qual a carta: \n");
scanf("%d", &Carta2);

printf("Digite o estado: \n");
scanf("%s", &Estado2);

printf("Digite o codigo da cidade: \n");
scanf("%s", &Codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &NomeCidade2);

printf("Digite a populacao: \n");
scanf("%d", &Populacao2);

printf("Digite a area: \n");
scanf("%f", &Area2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos2);
  
  // Área para exibição dos dados da cidade

  // --- EXIBIÇÃO DOS DADOS ---
printf("\n--- CARTA 1 ---\n");  
printf("Carta:%d \n", Carta1 );
printf("Estado:%s \n", Estado1 );
printf("Codigo da cidade:%s \n", Codigo1 );
printf("Nome da cidade:%s \n", NomeCidade1 );
printf("Populacao:%d \n", Populacao1 );
printf("Area:%f \n", Area1 );
printf("PIB:%f \n", PIB1 );
printf("Pontos Turisticos:%d \n", PontosTuristicos1 );

printf("\n--- CARTA 2 ---\n");
printf("Carta: %d \n", Carta2);
printf("Estado: %s \n", Estado2);
printf("Codigo: %s \n", Codigo2);
printf("Nome: %s \n", NomeCidade2);
printf("Populacao: %d \n", Populacao2);
printf("Area: %.2f \n", Area2);
printf("PIB: %.2f \n", PIB2);
printf("Pontos Turisticos: %d \n", PontosTuristicos2);

return 0;
} 

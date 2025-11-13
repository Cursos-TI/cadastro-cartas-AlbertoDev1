#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

int Carta;
char Estado[50];
char Codigo[10];
char NomeCidade[50];
int Populacao;
float Area;
float PIB;
int PontosTuristicos;

  // Área para entrada de dados

printf("Digite qual a carta: \n");
scanf("%d", &Carta);

printf("Digite o estado: \n");
scanf("%s", &Estado);

printf("Digite o codigo da cidade: \n");
scanf("%s", &Codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &NomeCidade);

printf("Digite a populacao: \n");
scanf("%d", &Populacao);

printf("Digite a area: \n");
scanf("%f", &Area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos);

  // Área para exibição dos dados da cidade
printf("Carta:%d \n", Carta );
printf("Estado:%s \n", Estado );
printf("Codigo da cidade:%s \n", Codigo );
printf("Nome da cidade:%s \n", NomeCidade );
printf("Populacao:%d \n", Populacao );
printf("Area:%f \n", Area );
printf("PIB:%f \n", PIB );
printf("Pontos Turisticos:%d \n", PontosTuristicos );

return 0;
} 

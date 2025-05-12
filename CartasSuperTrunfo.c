#include <stdio.h>

int main (){

char estado;
char codigo;
char nome [20];
float populacao;
float area;
float pib;
int turistas;

printf("Carta 1: \n");

printf("Digite o Estado: \n");
scanf("%c", &estado);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", nome);

printf("Digite a população: \n");
scanf("%e", &populacao);

printf("Digite a area: \n");
scanf("%e", &area);

printf("Digite o PIB: \n");
scanf("%e", &pib);

printf("Digite a quantidade de turistas: \n");
scanf("%d", &turistas);

printf("Código da Carta: %d\n", codigo);
printf("Nome: %s\n", nome);
printf("População: %f Milhões\n", populacao);
printf("Area Territorial %f Km\n", area);
printf("PIB %f bilhões\n", pib);
printf("Quantidade de Turistas %d mil", turistas);
}
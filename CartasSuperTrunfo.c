#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

//Criando uma estrutura para Carta.
typedef struct {
    char estado; //letra do estado (A - H)
    char codigo[4]; //código da carta (exemplo A01)
    char cidade [50]; //nome da cidade
    int polulacao; //população da cidade
    float area; //área da cidade em km2
    float PIB; //PIB em bilões de reais
    int pontos_turisticos; //número de pontos turíticos
}Carta;
//Função para cadastrar carta
void cadastrarCarta (Carta *carta){

    printf ("\nCADASTRAR CARTA\n");
    printf ("Digite o estado (de A-H):\n");
    scanf("%c", &carta->estado);
    printf("Digite o código da carta (ex.: A01):\n");
    scanf("%c", &carta->codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &carta->cidade);
    printf("Digite a população: \n");
    scanf("%d", &carta->polulacao);
    printf("Digite a Área: \n");
    scanf("%f", &carta->area);
    printf("Digite o PIB:\n");
    scanf("%f", &carta->PIB);
    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &carta->pontos_turisticos);
}
//Função para exibir dados da carta
void exibirCarta (Carta carta){
    printf("Dados da Carta:");
    printf ("Estado: %c\n", carta.estado);
    printf ("Código da carta: %c\n", carta.codigo);
    printf ("Nome da cidade: %s\n", carta.cidade);
    printf ("Área: %.2f Km2\n", carta.area);
    printf ("População: %d\n", carta.polulacao);
    printf ("PIB: %.2f bilhões de reais\n", carta.PIB);
    printf ("Número de Pontos turísticos: %d\n", carta.pontos_turisticos);

}

int main() {
   

    return 0;
}

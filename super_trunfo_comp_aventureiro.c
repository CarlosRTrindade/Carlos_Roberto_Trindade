#include <stdio.h>

// Definição da estrutura para armazenar os dados das cidades
typedef struct {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
} Cidade;

// Função para calcular atributos derivados
void calcularAtributos(Cidade *c) {
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = (c->pib * 1000000000) / c->populacao; // Convertendo PIB de bilhões para reais
}

// Função para entrada de dados
void lerDadosCidade(Cidade *c) {
    printf("Estado (A-H): ");
    scanf(" %c", &c->estado);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", c->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", c->nome);
    
    printf("População: ");
    scanf("%d", &c->populacao);
    
    printf("Área (km²): ");
    scanf("%f", &c->area);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &c->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &c->pontosTuristicos);
    
    calcularAtributos(c);
}

// Função para exibir os dados
void mostrarDadosCidade(Cidade c) {
    printf("\nCarta:\n");
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nome);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.2f reais\n", c.pibPerCapita);
}

int main() {
    Cidade cidade1, cidade2;

    printf("\nDigite os dados da primeira cidade:\n");
    lerDadosCidade(&cidade1);

    printf("\nDigite os dados da segunda cidade:\n");
    lerDadosCidade(&cidade2);

    printf("\nDados das cidades registradas:\n");
    mostrarDadosCidade(cidade1);
    mostrarDadosCidade(cidade2);

    return 0;
}

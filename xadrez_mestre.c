#include <stdio.h>

// Função recursiva para mover a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;  // Caso base
    printf("Direita %d\n", 6 - casas);
    moverTorre(casas - 1);  // Chamada recursiva
}

// Função recursiva para mover o Bispo (5 casas na diagonal superior direita)
void moverBispo(int casas, int x, int y) {
    if (casas == 0) return;  // Caso base
    printf("Cima %d, Direita %d\n", x + 1, y + 1);
    moverBispo(casas - 1, x + 1, y + 1);  // Chamada recursiva
}

// Função recursiva para mover a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;  // Caso base
    printf("Esquerda %d\n", 9 - casas);
    moverRainha(casas - 1);  // Chamada recursiva
}

// Função para mover o Cavalo com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {  // Duas casas para cima
        for (int j = 1; j <= 1; j++) {  // Uma casa para direita
            printf("Cima %d, Direita %d\n", i, j);
            if (i == 2 && j == 1) break;  // Interrompe o loop ao finalizar movimento em "L"
        }
    }
}

int main() {
    // Simulação dos movimentos
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 0, 0);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}

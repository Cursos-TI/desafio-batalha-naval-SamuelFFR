#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    //Iniciando a Matriz com Zeros
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0; // Inicializando o tabuleiro com zeros
        }
    }
    
    //Imprimindo o Cabeçalho
    printf("TABULEIRO BATALHA NAVAL:\n");
    printf("    ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    //Adicionar um navio HORIZONTAL
    int LinhaNavio = 4; //Linha 5
    int ColunaInicio = 5; // Coluna F
    int TamanhoNavio = 3; // Tamanho do navio

    // Colocando o navio na matriz
    for (int j = ColunaInicio; j < ColunaInicio + TamanhoNavio; j++) {
        tabuleiro[LinhaNavio][j] = 3; // Colocando o navio na horizontal
    }

    //Adicionar um navio VERTICAL
    int LinhaInicio = 1; //Linha 2
    int ColunaNavio = 2; // Coluna C
    int TamanhoNavio2 = 3; // Tamanho do navio

    // Colocando o navio na matriz
    for (int i = LinhaInicio; i < LinhaInicio + TamanhoNavio2; i++) {
        tabuleiro[i][ColunaNavio] = 3; // Colocando o navio na horizontal
    }

    //Imprimindo o Tabuleiro
    for (int i = 0; i < 10; i++){
       printf("%2d  ", i + 1); //Numero da Linha com largura 2
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprimindo cada célula do tabuleiro
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }
    return 0;
}
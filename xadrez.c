#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void MovTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        MovTorre(casas - 1);
    }
    
}

void MovRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        MovRainha(casas - 1);
    }
}

void MovBispo(int casas){
    if (casas > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        MovBispo(casas - 1);
    }
    
}
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre, bispo = 0, rainha = 0; // Variáveis das peças de Xadrez (torre, bispo, rainha)


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("Movimentação da Bispo: \n");
        while (bispo < 5) // Repete até o bispo mover 5 vezes
        {
            printf("Cima\n"); // Movimenta 1 vez para cima
            printf("Direita\n"); // Movimenta 1 vez para direita - (como se fosse um moviemnto na diagonal)
            bispo++; //incremento para evitar loop infinito
        }
        printf("\n"); //espaço entre a movimentação das peças


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("Movimentação da Torre: \n");
        for ( torre = 0; torre < 5; torre++) // Repete 5 vezes, movimentando a torre para a direita
        {
            printf("Direita\n"); //Imprime a direção do movimento da torre
        }
        printf("\n"); //espaço entre a movimentação das peças


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        printf("Movimentação da Rainha: \n");
        do
        {
            printf("Esquerda\n"); //imprime a direção do movimento da rainha
            rainha++; //incremento para evitar loop infnito
        } while (rainha < 8); // Repete até a rainha mover 8 vezes para a esquerda
        printf("\n"); //espaço entre a movimentação das peças



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação da Cavalo: \n");
    int MovCavalo = 1; // Flag para controlar o movimento em "L"
    while (MovCavalo != 0) // Enquanto MovCavalo for verdadeiro (não zero), executa o loop e depois decrementa assim encerrando o loop
    {
        for (int i = 0; i < 2; i++) // função for que executa 2 vezes o "Baixo\n"
        {
            printf("Baixo\n"); //Imprime "Baixo" 2 vezes, por conta da loop For
        }
        printf("Esquerda\n"); //Imprime "Esquerda" uma vez
        MovCavalo--; // decremento utilizado para fechar o loop e evitar loop infinito
    }
    printf("\n"); //espaço entre a movimentação das peças

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("Movimentação Torre:\n");
    MovTorre(5);
    printf("\n");

    printf("Movimentação Bispo: \n");
    MovBispo(5);
    printf("\n");

    printf("Movimentação Rainha:\n");
    MovRainha(8);
    printf("\n");
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

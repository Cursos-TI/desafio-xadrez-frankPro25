#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoCavalo(n){
    if(n<4){
        if(n>2){
            printf("Direita\n");
        }else{
            printf("Cima\n");
        }
        n++;
        movimentoCavalo(n);
    }
} 

int main()
{
    // Nível Novato - Movimentação das Peças
    // variáveis constantes para representar o número de casas que cada peça pode se mover.
    int Bispo = 5;          // casas na diagonal superior direita
    int Torre = 5;          // casas para a direita
    int Rainha = 8;         // casas para a esquerda
    int Cavalo[2] = {3, 1}; // casas para cima e 1 a direita
    // Implementação de Movimentação do Bispo
    for (int i = 0; i < Bispo; i++)
    {
        printf("Direita \nCima\n");
    }
    // Implementação de Movimentação da Torre
    for (int i = 0; i < Torre; i++)
    {
        printf("Direita\n");
    }
    // Implementação de Movimentação da Rainha
    for (int i = 0; i < Rainha; i++)
    {
        printf("Esquerda\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.
    /*
    for (int i = 0; i < Cavalo[1]; i++)
    {
        for (int i = 0; i < Cavalo[0]; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    */
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // movimentações das peças por funções recursivas.
       movimentoCavalo(0);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    return 0;
}

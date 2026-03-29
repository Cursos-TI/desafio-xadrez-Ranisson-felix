#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//recursivo bispo

void bispo(int casas)
{
  if (casas > 0)
    {
        for(int a = 0, b = 0; a < casas && b < casas; a++,b++)
        {
            printf("Cima, Direita\n"); 
        }
    }
}


//recursivo torre

void torre(int casasT)
{
    if (casasT > 0)
    {
        printf("Direita\n");
        torre(casasT -1);
    }
}

//recursivo rainha

void rainha(int casasR)
{
    if (casasR > 0)
    {
        printf("Esquerda\n");
        rainha(casasR -1);
    }
}


int main() {
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.ntes
    
    int quantidadetorre = 5;
    int quantidaderainha = 8;
    int quantidadebispo = 5;
    int cavalo, d = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do Bispo\n");
    printf("\n");

    bispo(quantidadebispo);
   
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimentação da Torre:\n");
    printf("\n");

    torre(quantidadetorre);

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimentação da Rainha\n");
    printf("\n");

    rainha(quantidaderainha);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimentação do Cavalo\n");
    printf("\n");

    for (cavalo = 1; cavalo <= 2; cavalo++)
    {
        printf("Cima\n");

            if (cavalo == 2)
            {
                for (int direita = 1; direita <= 1; direita++)
                {
                       printf("Direita\n");
                }
            }   
    }


        
   
    return 0;
}

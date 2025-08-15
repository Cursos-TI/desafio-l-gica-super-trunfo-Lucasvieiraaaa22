#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
} Carta;

// Função para comparar atributos e retornar resultado
int comparar(char* nomeA, float valorA, char* nomeB, float valorB) {
    printf("Comparando: %s (%.2f) vs %s (%.2f)\n", nomeA, valorA, nomeB, valorB);
    if (valorA > valorB) {
        printf(GREEN"%s venceu esta rodada!\n"RESET, nomeA);
        return 1; // vitória do jogador
    } else if (valorB > valorA) {
        printf(RED"%s venceu esta rodada!\n"RESET, nomeB);
        return 2; // vitória do computador
    } else {
        printf(RED"EMPATE!\n"RESET);
        return 0; // empate
    }
}

// Função para escolher atributo
int escolherAtributo(char opcao, Carta c1, Carta c2) {
    switch (opcao) {
        case 'A': case 'a': return comparar(c1.nome, c1.populacao, c2.nome, c2.populacao);
        case 'B': case 'b': return comparar(c1.nome, c1.area, c2.nome, c2.area);
        case 'C': case 'c': return comparar(c1.nome, c1.pib, c2.nome, c2.pib);
        case 'D': case 'd': return comparar(c1.nome, c1.turisticos, c2.nome, c2.turisticos);
        case 'E': case 'e': return comparar(c1.nome, c1.densidade, c2.nome, c2.densidade);
        default:
            printf(RED"Opção inválida!\n"RESET);
            return -1;
    }
}

int main() {
    srand(time(NULL));

    Carta pais1, pais2;

    // Entrada de dados do jogador
    printf("Digite o nome do país da sua carta: ");
    scanf(" %[^\n]", pais1.nome);

    printf("Digite a população em milhões: ");
    scanf("%d", &pais1.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &pais1.area);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pais1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pais1.turisticos);

    pais1.densidade = pais1.populacao / pais1.area;

    // Dados aleatórios do computador
    sprintf(pais2.nome, "Computador");
    pais2.populacao = rand() % 100 + 1;
    pais2.area = (rand() % 100) + 1;
    pais2.pib = (rand() % 100) + 1;
    pais2.turisticos = rand() % 20 + 1;
    pais2.densidade = pais2.populacao / pais2.area;

    printf("\nCarta do Computador gerada!\n");

    char atributosEscolhidos[5] = {0};
    int pontosJogador = 0, pontosComputador = 0;

    for (int i = 0; i < 5; i++) {
        char opcao;
        printf("\nEscolha um atributo (%d/5):\n", i + 1);
        printf("A. População\nB. Área\nC. PIB\nD. Pontos Turísticos\nE. Densidade Demográfica\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        // Verifica repetição
        int repetido = 0;
        for (int j = 0; j < i; j++) {
            if (atributosEscolhidos[j] == opcao || atributosEscolhidos[j] == opcao + 32 || atributosEscolhidos[j] == opcao - 32) {
                repetido = 1;
                break;
            }
        }

        if (repetido) {
            printf(RED"Você já escolheu este atributo!\n"RESET);
            i--;
            continue;
        }

        atributosEscolhidos[i] = opcao;

        int resultado = escolherAtributo(opcao, pais1, pais2);

        if (resultado == 1) pontosJogador++;
        else if (resultado == 2) pontosComputador++;
    }

    // Resultado final
    printf("\n===== PLACAR FINAL =====\n");
    printf("Você: %d pontos\n", pontosJogador);
    printf("Computador: %d pontos\n", pontosComputador);

    if (pontosJogador > pontosComputador)
        printf(GREEN"\nVocê venceu o jogo!\n"RESET);
    else if (pontosComputador > pontosJogador)
        printf(RED"\nO computador venceu o jogo!\n"RESET);
    else
        printf(RED"\nO jogo terminou empatado!\n"RESET);

    return 0;
}

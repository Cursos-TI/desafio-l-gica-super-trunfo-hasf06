#include <stdio.h>
#include <string.h>

// Trabalho: Super Trunfo - Cidades
// Aluno: Hamilton de Araújo
// Disciplina: Introdução à Programação de Computadores

int main() {
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    int opcao, atributo1, atributo2;

    // Cadastro da primeira carta
    printf("=== Cadastro da primeira cidade ===\n");
    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhoes): ");
    scanf("%f", &pib1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da segunda cidade ===\n");
    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhoes): ");
    scanf("%f", &pib2);

    // MENU PRINCIPAL
    printf("\n=== Menu de Opções ===\n");
    printf("1 - Comparação simples (Nível Novato)\n");
    printf("2 - Comparação por escolha (Nível Aventureiro)\n");
    printf("3 - Comparação dupla com lógica avançada (Nível Mestre)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Nível Novato
    if (opcao == 1) {
        printf("\n--- Comparando populacao ---\n");
        if (populacao1 > populacao2) {
            printf("%s venceu na populacao.\n", nome1);
        } else if (populacao2 > populacao1) {
            printf("%s venceu na populacao.\n", nome2);
        } else {
            printf("Empate na populacao.\n");
        }

        printf("\n--- Comparando area ---\n");
        if (area1 > area2) {
            printf("%s venceu na area.\n", nome1);
        } else if (area2 > area1) {
            printf("%s venceu na area.\n", nome2);
        } else {
            printf("Empate na area.\n");
        }

        printf("\n--- Comparando PIB ---\n");
        if (pib1 > pib2) {
            printf("%s venceu no PIB.\n", nome1);
        } else if (pib2 > pib1) {
            printf("%s venceu no PIB.\n", nome2);
        } else {
            printf("Empate no PIB.\n");
        }
    }

    // Nível Aventureiro
    else if (opcao == 2) {
        printf("\n--- Atributos para comparar ---\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("Escolha o atributo: ");
        scanf("%d", &atributo1);

        switch (atributo1) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("%s venceu na populacao.\n", nome1);
                } else if (populacao2 > populacao1) {
                    printf("%s venceu na populacao.\n", nome2);
                } else {
                    printf("Empate na populacao.\n");
                }
                break;
            case 2:
                if (area1 > area2) {
                    printf("%s venceu na area.\n", nome1);
                } else if (area2 > area1) {
                    printf("%s venceu na area.\n", nome2);
                } else {
                    printf("Empate na area.\n");
                }
                break;
            case 3:
                if (pib1 > pib2) {
                    printf("%s venceu no PIB.\n", nome1);
                } else if (pib2 > pib1) {
                    printf("%s venceu no PIB.\n", nome2);
                } else {
                    printf("Empate no PIB.\n");
                }
                break;
            default:
                printf("Atributo invalido.\n");
        }
    }

    // Nível Mestre
    else if (opcao == 3) {
        printf("\n--- Comparação com dois atributos ---\n");
        printf("1 - Populacao\n2 - Area\n3 - PIB\n");
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &atributo1);
        printf("Escolha o segundo atributo: ");
        scanf("%d", &atributo2);

        int pontos1 = 0, pontos2 = 0;

        // Primeiro atributo
        pontos1 += (atributo1 == 1 && populacao1 > populacao2) ? 1 : 0;
        pontos2 += (atributo1 == 1 && populacao2 > populacao1) ? 1 : 0;

        pontos1 += (atributo1 == 2 && area1 > area2) ? 1 : 0;
        pontos2 += (atributo1 == 2 && area2 > area1) ? 1 : 0;

        pontos1 += (atributo1 == 3 && pib1 > pib2) ? 1 : 0;
        pontos2 += (atributo1 == 3 && pib2 > pib1) ? 1 : 0;

        // Segundo atributo
        pontos1 += (atributo2 == 1 && populacao1 > populacao2) ? 1 : 0;
        pontos2 += (atributo2 == 1 && populacao2 > populacao1) ? 1 : 0;

        pontos1 += (atributo2 == 2 && area1 > area2) ? 1 : 0;
        pontos2 += (atributo2 == 2 && area2 > area1) ? 1 : 0;

        pontos1 += (atributo2 == 3 && pib1 > pib2) ? 1 : 0;
        pontos2 += (atributo2 == 3 && pib2 > pib1) ? 1 : 0;

        printf("\nResultado final:\n");
        if (pontos1 > pontos2) {
            printf("%s venceu com %d ponto(s).\n", nome1, pontos1);
        } else if (pontos2 > pontos1) {
            printf("%s venceu com %d ponto(s).\n", nome2, pontos2);
        } else {
            printf("Empate geral com %d ponto(s) cada.\n", pontos1);
        }
    }

    else {
        printf("Opcao invalida. Encerrando programa.\n");
    }

    return 0;
}

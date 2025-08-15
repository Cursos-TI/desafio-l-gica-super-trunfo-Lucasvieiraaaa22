#include <stdio.h>
#include <string.h>
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int main() {
  char pais1[50] = "br";
  char pais2[50] = "EUA";
  int populacao1 = 50;
  int populacao2 = 30;
  float area1 = 250.0;
  float area2 = 200.0;
  float pib1 = 1500.0;
  float pib2 = 2500.0;
  int turisticos1 = 210;
  int turisticos2 = 20;
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;
  int opcao;
  
 
         // Cadastro da Carta 1
         printf("----Cadastro da Carta 1----\n");
         printf("Digite o País: ");
          scanf(" %[^\n]", pais1);
         printf("Digite a População: ");
         scanf("%d", &populacao1);
         printf("Digite a Área: ");
         scanf("%f", &area1);
         printf("Digite o PIB: ");
         scanf("%f", &pib1);
         printf("Digite os Pontos Turisticos: ");
         scanf("%d", &turisticos1);


         // Cadastro da Carta 2
         printf("----Cadastro da Carta 2----\n");
         printf("Digite o País: ");
         scanf(" %[^\n]", pais2);
         printf("Digite a População: ");
         scanf("%d", &populacao2);
         printf("Digite a Área: ");
         scanf("%f", &area2);
         printf("Digite o PIB: ");
         scanf("%f", &pib2);
         printf("Digite os Pontos Turisticos: ");
         scanf("%d", &turisticos2);
         

          // menu de escolha 
            printf("----Seja bem-vindo ao jogo Super Triunfo----\n");
            printf("----Menu de Comparação----\n");
            printf("Escolha uma opção:\n");
            printf("1. Comparar População\n");
            printf("2. Comparar Área\n");
            printf("3. Comparar PIB\n");
            printf("4. Comparar Numero de pontos Turisticos\n");
            printf("5. Comparar Densidade Demográfica\n");
            scanf("%d", &opcao);

               switch(opcao) {
           case 1:
               printf("\n" "Atributo escolhido: População\n");
               printf("****Comparando População:****\n"); 
              if (populacao1 > populacao2){
                 printf( "Resultado: " GREEN "%s venceu!\n" RESET, pais1);
                printf("População de %s: %d\n", pais1, populacao1);
                printf("População de " RED "%s: %d\n" RESET, pais2, populacao2);
              } else if (populacao1 < populacao2){
                printf(GREEN "Resultado: %s venceu!\n" RESET, pais2);
                printf(RED "Resultado: %s perdeu!\n" RESET, pais1);
                printf("População de %s: %d\n", pais2, populacao2);
                printf("População de %s: %d\n", pais1, populacao1);
              } else {
                printf("Empate: %d\n", populacao1);
              }break;
         

                   case 2: // Comparar Área
                      printf("\nAtributo escolhido: Área\n");
                   printf("****Comparando Área: ****\n");
        if (area1 > area2) {
            printf(GREEN "%s venceu!!\n" RESET, pais1);
            printf("Área de %s: %.2f km²\n", pais1, area1);
            printf("Área de" RED " %s: %.2f km²\n" RESET, pais2, area2);
        } else if (area1 < area2) {
            printf(GREEN "%s venceu!!\n" RESET, pais2);
            printf("Área de %s: %.2f km²\n", pais2, area2);
            printf("Área de" RED " %s: %.2f km²\n" RESET, pais1, area1);
        } else {
            printf("Empate!: %.2f km²\n", area1);
        } break;


         case 3: // Comparar PIB 
            printf("\nAtributo escolhido: PIB\n");
            printf("****Comparando PIB: ****\n");
            if (pib1 > pib2) {
                printf(GREEN "%s Venceu!! \n" RESET, pais1);
                printf("PIB de %s: %2.f Bilhões\n", pais1, pib1);
                printf("PIB de " RED "%s: %2.f Bilhões\n" RESET, pais2, pib2);
           } else if (pib1 < pib2) {
                printf(GREEN "%s Venceu!! \n" RESET, pais2);
                 printf("PIB de %s: %2.f Bilhões \n", pais2, pib2);
                   printf("PIB de " RED "%s: %2.f Bilhões \n" RESET, pais1, pib1);
           } else {
                printf("Empate: %2.f Bilhões\n", pib1);
           } break;

            case 4: // Comparar Pontos Turisticos
               printf("\nAtributo escolhido: Pontos Turisticos\n");
            printf("****Comparando Pontos Turisticos: ****\n");
            if (turisticos1 > turisticos2) {
                printf(GREEN "%s venceu!! \n" RESET, pais1);
                printf("Pontos Turisticos de %s: %d\n", pais1, turisticos1);
                printf("Pontos Turisticos de" RED " %s: %d\n" RESET, pais2, turisticos2);
            } else if (turisticos1 < turisticos2) {
                 printf(GREEN "%s venceu!! \n" RESET, pais2);
                printf("Pontos Turisticos de %s: %d\n", pais2, turisticos2);
                printf("Pontos Turisticos de" RED "%s: %d\n" RESET, pais1, turisticos1);
            } else {
                printf("Empate: %d\n", turisticos1);
            } break;

             case 5: // Comparar Densidade Demográfica
                printf("\nAtributo escolhido: Densidade Demográfica\n");
            printf("****Comparando Densidade Demográfica: ****\n");
            if (densidade1 < densidade2) {
                printf(GREEN "%s venceu!! \n" RESET, pais1);
                printf("Densidade de %s: %.2f habitantes/km²\n", pais1, densidade1);
              printf("Densidade de" RED "%s: %.2f habitantes/km²\n" RESET, pais2, densidade2);
            } else if (densidade1 > densidade2) {
                printf(GREEN "%s venceu!! \n" RESET, pais2);
                printf(RED "%s perdeu!! \n" RESET, pais1);
                printf("Densidade de %s: %.2f habitantes/km²\n", pais2, densidade2);
                printf("Densidade de" RED " %s: %.2f habitantes/km²\n" RESET, pais1, densidade1);
            } else {
                printf("Empate: %.2f habitantes/km²\n", densidade1);
            } break;
        } 
    }

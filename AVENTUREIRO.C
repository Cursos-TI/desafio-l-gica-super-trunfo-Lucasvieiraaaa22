#include <stdio.h>

    int main (){

    
   
  //variaveis carta 1
 char estado1;
 char Codigo_da_carta1[10];
 char cidade1[50];
unsigned long int populacao1;
 float area1;
 float pib1;
  int turisticos1;
 float densidade1;
 float percapita1;
 float superpoder1;

 //variaveis carta 2
 char estado2;
 char Codigo_da_carta2[10];
 char cidade2[50];
unsigned long int populacao2;
 float area2;
 float pib2;
int turisticos2;
 float densidade2;
 float percapita2;
 float superpoder2;

        //impressao e declaração dos dados carta 1

         printf("----Seja bem-vindo ao jogo Super Triunfo----\n");

        printf("-----Cadastro da Carta 1----- \n");
        
          printf("Digite o Estado 'uma letra de A até H' : \n ");
            scanf(" %c", &estado1);
         
             printf("Digite o codigo da Carta (ex:A01)\n");
              scanf("%s", Codigo_da_carta1);

              printf("Digite o nome da cidade\n");
               scanf(" %[^\n]", cidade1);

                printf("Digite a População\n");
                  scanf("%lu", &populacao1); 

                   printf("Digite a Área em km²\n");
                   scanf("%f", &area1);  

                   printf("Digite o PIB (em bilhões)\n");
                   scanf("%f", &pib1);
                      
                     printf("Digite a quantidade de pontos turísticos\n");
                     scanf("%d", &turisticos1);


                     //CARTA 2 

        printf("-----Cadastro da Carta 2----- \n");
        
          printf("Digite o Estado 'uma letra de A até H' : \n ");
            scanf(" %c", &estado2);
     
             printf("Digite o codigo da Carta (ex:A01)\n");
                scanf("%s", Codigo_da_carta2);
              printf("Digite o nome da cidade\n");
               scanf(" %[^\n]", cidade2);

                printf("Digite a População\n");
                  scanf("%lu", &populacao2);

                   printf("Digite a Área em km²\n");
                   scanf("%f", &area2);

                   printf("Digite o PIB (em bilhões)\n");
                   scanf("%f", &pib2);
                      
                     printf("Digite a quantidade de pontos turísticos\n");
                     scanf("%d", &turisticos2);
 
           //Calculos Carta 1

           densidade1 = (float)populacao1 / area1;
            percapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
           superpoder1 = (float)(populacao1 + area1 + pib1 + percapita1 + turisticos1 + (1 / densidade1));

                
           
           //Calculos Carta 2

           densidade2 = (float)populacao2 / area2;
           percapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
        superpoder2 = (float)(populacao2 + area2 + pib2 + percapita2 + turisticos2 + (1 / densidade2));
 

           //exbição dos dados carta 1

        printf("\n=== Exibição dos dados da carta 1 ===\n");

        printf("Estado: %c\n", estado1);
        printf("Codigo da Carta: %s\n", Codigo_da_carta1);
        printf("Cidade: %s\n", cidade1);
        printf("Poupulação: %lu\n", populacao1);
        printf("Área em km²: %f\n", area1);
        printf("PIB em bilhões: %f\n", pib1);
        printf("Pontos túristicos: %d\n",turisticos1);
        printf("Densidade da primeira carta: %.2f habitantes/km²\n", densidade1);
        printf("PIB per capita da primeira carta: %.2f reais\n", percapita1);
        printf("Super Poder: %.2f\n", superpoder1);

           
                       //exbição dos dados carta 2

            printf("\n=== Exibição dos dados da carta 2 ===\n");

            printf("Estado: %c\n", estado2);
            printf("Codigo da Carta: %s\n", Codigo_da_carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Poupulação: %lu\n", populacao2);
            printf("Área em km²: %f\n", area2);
            printf("PIB em bilhões: %f\n", pib2);
            printf("Pontos túristicos: %d\n",turisticos2);
            printf("Densidade da segunda carta:  %.2f habitantes/km²\n", densidade2);
            printf("PIB per capita da segunda carta: %.2f reais\n", percapita2);
            printf("Super Poder: %.2f\n", superpoder2);
 
                     //Comparação
            
           printf("\n===Comparação das duas cartas===\n");
                     //população
                 
                      printf("POPULAÇÃO");
            if (populacao1 > populacao2){
              printf("CARTA 1 GANHOU!!\n");
            } else  if (populacao1 < populacao2){ 
              printf("CARTA 2 GANHOU!!\n");
            } else {
             printf("Empate\n");
            }
                     //area
                     
                      printf("AREA\n ");
            if (area1 > area2) {
              printf("CARTA 1 GANHOU!!\n");
            } else if (area1 < area2) {
                  printf("CARTA 2 GANHOU!!\n");
            } else {
               printf("Empate\n");
            }

                  //PIB
                  
                      printf("PIB\n");
                if (pib1 > pib2) {
                   printf("CARTA 1 GANHOU!!\n");
                } else if (pib1 < pib2) {
                    printf("CARTA 2 GANHOU!!\n");
               }  else {
                    printf("Empate\n");
                }
                 //Pontos túristicos
                 
                      printf("PONTOS TÚRISTICOS\n");
                if (turisticos1 > turisticos2) {
                  printf("CARTA 1 GANHOU!!\n");
                } else if (turisticos1 < turisticos2) {
                     printf("CARTA 2 GANHOU!!\n");
                } else {
                   printf("Empate\n");
                }

                 //Densidade 
                 
                      printf("DENSIDADE POPULACIONAL\n");
                  if (densidade1 < densidade2){
                    printf("CARTA 1 GANHOU!!\n");
                } else if ( densidade1 > densidade2)
                     printf("CARTA 2 GANHOU!!\n");
                     else {
                       printf("Empate\n");
                     }
                //Pib per capta
                
                      printf("PIB PER CAPTA\n");
              if (percapita1 > percapita2) {
                  printf("CARTA 1 GANHOU!!\n");
                } else if (percapita1 < percapita2) {
                     printf("CARTA 2 GANHOU!!\n");
                } else {
                   printf("Empate\n");
                }

             //SUPER PODER
             
                      printf("SUPER PODER\n");
             if (superpoder1 > superpoder2) {
                  printf("CARTA 1 GANHOU!!\n");
                } else if (superpoder1 < superpoder2) {
                     printf("CARTA 2 GANHOU!!\n");
                } else {
                   printf("Empate\n");
                }




              return 0; 

 }
#include <stdio.h>


int main(){

  //****************VARIAVEIS CARTA 1 *******************// 
    char greeting[200];
    char carta1[20];
    char letraestado;
    char codigocarta[4];
    char nomecidade[40];
    int populacao;
    float area;
    float PIB;
    int Pontos_turísticos;
    float densidade1;
    float pibpercapita1;
    float superPoder1;
 
//Cadastro de dados da carta 1
    printf("Seja bem vindo ao Super Trunfo, vamos começar cadastrando as informações de cada carta! \n", greeting);
    printf("Carta 1: \n", carta1);
    printf("Digite uma letra de 'A' a 'H' como ESTADO para essa carta: \n", letraestado);
    scanf("%c", &letraestado);
    printf("Digite o código da carta sendo a letra escolhida e um número de 01 a 04 (ex: A01, B03):\n", codigocarta);
    scanf("%s", &codigocarta); 
    printf("Digite o nome de uma cidade: \n", nomecidade);
    scanf(" %[^\n]", nomecidade); //Maneira de usar scanf para ler espaços.
    printf("Digite o número de habitantes dessa cidade: \n", populacao);
    scanf("%d", &populacao);
    printf("Defina a área da cidade em quilômetros quadrados: \n", area);
    scanf("%f", &area);
    printf("Digite o Produto Interno Bruto da cidade- (PIB: \n", PIB);
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turísticos da cidade: \n", Pontos_turísticos);
    scanf("%d", &Pontos_turísticos);

// CÁLCULO DENSIDADE E PIB CARTA 1.  
    densidade1 = populacao / area;
    pibpercapita1= PIB / populacao;

//CÁLCULO SUPER PODER CARTA 1.
    superPoder1 = populacao+area+PIB+Pontos_turísticos+pibpercapita1;

 //****************VARIAVEIS CARTA 2 *******************//   
    char greeting2[200];
    char carta2[20];
    char letraestado2;
    char codigocarta2[4];
    char nomecidade2[40];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int Pontos_turísticos2;
    char exibir [50];
    float densidade2;
    float pibpercapita2;
    float superPoder2;

//Cadastro de dados da carta 2.
    printf("Vamos cadastrar as informações da carta 2 ! \n\n", greeting2);
    printf("Carta 2: \n", carta2); 
    printf("Digite uma letra de 'A' a 'H' como ESTADO para essa carta: \n", letraestado2);
    scanf("%s", &letraestado2 );
    printf("Digite o código da carta sendo a letra escolhida e um número de 01 a 04 (ex: A01, B03):\n", codigocarta2);
    scanf("%s", &codigocarta2);
    printf("Digite o nome de uma cidade: \n", nomecidade2);
    scanf(" %[^\n]", nomecidade2);//Maneira de usar scanf para ler espaços.
    printf("Digite o número de habitantes dessa cidade: \n", populacao2);
    scanf("%d", &populacao2);
    printf("Defina a área da cidade em quilômetros quadrados: \n", area2);
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade- (PIB: \n", PIB2);
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos da cidade: \n", Pontos_turísticos2);
    scanf("%d", &Pontos_turísticos2);

// CÁLCULO DENSIDADE E PIB CARTA 2.        
    densidade2 = populacao2 / area2;
    pibpercapita2= PIB2 / populacao2;

//CÁLCULO SUPER PODER CARTA 2.
    superPoder2 = populacao2+area2+PIB2+Pontos_turísticos2+pibpercapita2;

// SWITCH

    int opcao;
    int opcaoComparar;

// menu exibir ou comparar.
    printf("Escolha umao opção: \n");
    printf("1- Ver cartas cadastradas.\n");
    printf("2- Comparar os dados das cartas.\n");
    scanf("%d", &opcao);

    switch (opcao){
        
        case 1: // exibindo dados cadastrados
            //Exibição CARTA1
            printf("Exibindo... \n\nCarta 1 e 2 cadastrada:\n\n", exibir);
            printf("Carta 1: \n", carta1); 
            printf("Estado: %c\n", letraestado);
            printf("Código: %s\n", codigocarta);
            printf("Cidade: %s\n", nomecidade);
            printf("População: %d\n", populacao);
            printf("Área: %.2f km² \n", area);
            printf("PIB: %.2f bilhões de reais\n", PIB);
            printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos);
            printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
            printf("PIB per Capita: %.2f reais \n", pibpercapita1);
            printf("Super Poder: %.2f\n \n", superPoder1);

            ///Exibição CARTA2
            printf("Carta 2: \n", carta2); 
            printf("Estado: %c\n", letraestado2);
            printf("Código: %s\n", codigocarta2);
            printf("Cidade: %s\n", nomecidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km² \n", area2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos2);
            printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
            printf("PIB per Capita: %.2f reais \n", pibpercapita2);
            printf("Super Poder: %.2f\n\n\n", superPoder2);

            break;

        case 2: // Escolhando atributo para comparar
            printf("Escolha um atributo para comparar\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos \n");
            printf("5. Densidade demográfica\n");
            scanf("%d", &opcaoComparar);

            //*********COMPARAÇÕES *********
                     
           switch (opcaoComparar){            

            case 1: //comparando população------------------------------------------
                printf("Comparando cartas 1 e 2...\n");
                printf("%s X %s \n", nomecidade, nomecidade2);
                printf("Atributo: População.\n");
                printf("Carta 1 : %d habitantes\n", populacao);
                printf("Carta 2 : %d habitantes\n", populacao2);

                if(populacao>populacao2){ 
                    printf("Resultado: Carta 1 (%s), VENCEU!\n\n",nomecidade);
                }else if (populacao2>populacao){
                    printf("Resultado: Carta 2 (%s), VENCEU!\n\n",nomecidade2);
                }else{
                    printf("Houve um EMPATE!");
                }
            break;

            case 2: //comparando area-----------------------------------------------
                printf("Comparando cartas 1 e 2...\n");
                printf("%s X %s \n", nomecidade, nomecidade2);
                printf("Atributo: Área.\n");
                printf("Carta 1 - %s : %.2f \n", nomecidade, area);
                printf("Carta 2 - %s : %.2f \n", nomecidade2, area2);

                if(area>area2){ 
                    printf("Resultado: Carta 1 (%s), VENCEU!\n\n",nomecidade);
                }else if (area2>area){
                    printf("Resultado: Carta 2 (%s), VENCEU!\n\n",nomecidade2);
                }else{
                    printf("Houve um EMPATE!");
                }
            break;

            case 3: // comparando PIB------------------------------------------------
                printf("Comparando cartas 1 e 2...\n");
                printf("%s X %s \n", nomecidade, nomecidade2);
                printf("Atributo: PIB.\n");
                printf("Carta 1 - %s : %.2f \n", nomecidade, PIB);
                printf("Carta 2 - %s : %.2f \n", nomecidade2, PIB2);

                if(PIB>PIB2){ 
                    printf("Resultado: Carta 1 (%s), VENCEU!\n\n",nomecidade);
                }else if (PIB2>PIB){
                    printf("Resultado: Carta 2 (%s), VENCEU!\n\n",nomecidade2);
                }else{
                    printf("Houve um EMPATE!");
                }
            break;

            case 4: // comparando Número de pontos turísticos-----------------------
                printf("Comparando cartas 1 e 2...\n");
                printf("%s X %s \n", nomecidade, nomecidade2);
                printf("Atributo: Número de pontos turísticos.\n");
                printf("Carta 1 - %s : %d \n", nomecidade, Pontos_turísticos);
                printf("Carta 2 - %s : %d \n", nomecidade2, Pontos_turísticos2);

                if(Pontos_turísticos>Pontos_turísticos2){ 
                    printf("Resultado: Carta 1 (%s), VENCEU!\n\n",nomecidade);
                }else if (Pontos_turísticos2>Pontos_turísticos){
                    printf("Resultado: Carta 2 (%s), VENCEU!\n\n",nomecidade2);
                }else{
                    printf("Houve um EMPATE!");
                }
            break;
            
            case 5: // comparando Densidade demográfica-----------------------------
                printf("Comparando cartas 1 e 2...\n");
                printf("%s X %s \n", nomecidade, nomecidade2);
                printf("Atributo: Densidade demográfica.\n");
                printf("Carta 1 - %s : %d \n", nomecidade, densidade1);
                printf("Carta 2 - %s : %d \n", nomecidade2, densidade2);

                if(densidade2>densidade1){ 
                    printf("Resultado: Carta 1 (%s), VENCEU!\n\n",nomecidade);
                }else if (densidade1>densidade2){
                    printf("Resultado: Carta 2 (%s), VENCEU!\n\n",nomecidade2);
                }else{
                    printf("Houve um EMPATE!");
                }
            
            break;//parando segunda switch
                default:
                    printf("Opção de comparativo inválida.\n");
            }

        break;//parando primeiro switch
        default:
            printf("Opção indisponível.\n");  
             }        



             

return 0; // Indica que o programa terminou corretamente


}
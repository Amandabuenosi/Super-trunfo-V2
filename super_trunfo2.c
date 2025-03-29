#include <stdio.h>


int main(){

//****************VARIAVEIS CARTA 1 *******************// 
    char letraestado = 'S';
    char codigocarta[4] =("S01");
    char nomecidade[40]="São Paulo";
    unsigned int populacao =1000000;
    float area= 1521.0;
    float PIB= 73.00;
    int Pontos_turísticos=500;
    float densidade1 = populacao / area;
   
 

//****************VARIAVEIS CARTA 2 *******************//   
    char letraestado2 = 'F';
    char codigocarta2[4]=("F01");
    char nomecidade2[40]="Fortaleza";
    unsigned int populacao2= 2000000;
    float area2= 313.8;
    float PIB2= 46.0;
    int Pontos_turísticos2= 100;
    float densidade2=populacao2 / area2;
    
       
//***************PRIMEIRO MENU************************//

    int opcao1;
    int opcaoComparar;

// menu exibir ou comparar.
    printf("Escolha uma opção: \n");
    printf("1- Ver cartas cadastradas.\n");
    printf("2- Comparar dois atributos das cartas.\n");
    scanf("%d", &opcao1);

    switch (opcao1){
        
        case 1: // exibindo dados cadastrados
            //Exibição CARTA1
            printf("Exibindo... \n\nCarta 1 e 2 cadastrada:\n\n");
            printf("Carta 1: \n"); 
            printf("Estado: %c\n", letraestado);
            printf("Código: %s\n", codigocarta);
            printf("Cidade: %s\n", nomecidade);
            printf("População: %d\n", populacao);
            printf("Área: %.2f km² \n", area);
            printf("PIB: %.2f bilhões de reais\n", PIB);
            printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos);
            printf("Densidade Populacional: %.2f hab/km² \n\n", densidade1);
           
            

            ///Exibição CARTA2
            printf("Carta 2: \n"); 
            printf("Estado: %c\n", letraestado2);
            printf("Código: %s\n", codigocarta2);
            printf("Cidade: %s\n", nomecidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km² \n", area2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos2);
            printf("Densidade Populacional: %.2f hab/km² \n\n", densidade2);


//----------------------------------------------------------------------------------  ESCOLHA ATRIBUTOS.

            break;
            int atributo;
        case 2: 

            printf("Escolha o primeiro atributo\n");
            printf("1- População\n");
            printf("2- Área\n");
            printf("3- PIB\n");
            printf("4- Número de Pontos Turísticos\n");
            printf("5- Densidade demográfica\n");
            scanf("%d", &atributo);
            switch (atributo){


 //----------------------------------------------------------------------------------               
            
            case 1:                      

            int atributo1Populacao;         //Se o atributo for o 1, então aparece 2, 3, 4, e 5 de segunda opções.
                
                printf("Escolha o segundo atributo\n");
                printf("2- Área\n");
                printf("3- PIB\n");
                printf("4- Número de Pontos Turísticos\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1Populacao);
                switch (atributo1Populacao){  // menu segundo atributo.
                    case 2:
                    printf("%s e %s\n\n", nomecidade, nomecidade2);
                    printf("Os atributos utlizados são: População e Área.\n");
                    printf("A de cidade %s, possui %d habitantes e uma área de %2.f.\n",nomecidade, populacao, area);
                    printf("A de cidade %s, possui %d habitantes e uma área de %2.f.\n",nomecidade2, populacao2, area2);
                    float soma = (populacao+area);
                    float soma2 = (populacao2+area2);
                    printf("A soma para %s é: %.2f\n", nomecidade, soma);
                    printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                    if (soma>soma2){
                        printf("Carta 1 ganhou!\n");
                    }else if (soma<soma2){
                        printf("Carta 2 ganhou!\n");
                    }else {
                        printf("Deu empate!\n");
                    
                    
                

                    break;

                    case 3:
                    printf("3- PIB\n");
                    break;

                    case 4:
                    printf("4- Número de Pontos Turísticos\n");
                    break;

                    case 5:
                    printf("5- Densidade demográfica\n");
                    break;
                
                default:
                printf("Opção inválida!\n");
                    break;
                }    

                break;

//----------------------------------------------------------------------------------

                case 2: 
                
                int atributo1Area;     //Se o atributo for o 2, então aparece 1, 3, 4, e 5 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("3- PIB\n");
                printf("4- Número de Pontos Turísticos\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1Area);
                switch (atributo1Area){  // menu segundo atributo.
                    case 1:
                    printf("1 - População\n");
                    break;

                    case 3:
                    printf("3- PIB\n");
                    break;

                    case 4:
                    printf("4- Número de Pontos Turísticos\n");
                    break;

                    case 5:
                    printf("5- Densidade demográfica\n");
                    break;
                
                default:
                printf("Opção inválida!\n");
                    break;
                }  

//----------------------------------------------------------------------------------
                break;
            case 3:
                
                int atributo1PIB;      //Se o atributo for o 3, então aparece 1, 2, 4, e 5 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("4- Número de Pontos Turísticos\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1PIB);
                switch (atributo1PIB){  // menu segundo atributo.
                    case 1:
                    printf("1 - População\n");
                    break;

                    case 2:
                    printf("2 - Área\n");
                    break;

                    case 4:
                    printf("4- Número de Pontos Turísticos\n");
                    break;

                    case 5:
                    printf("5- Densidade demográfica\n");
                    break;
                
                default:
                printf("Opção inválida!\n");
                    break;
                }  



//----------------------------------------------------------------------------------
                break;
            case 4:
                
                int atributo1NumeroPt;   //Se o atributo for o 4, então aparece 1, 2, 3, e 5 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3- PIB\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1NumeroPt);
                switch (atributo1NumeroPt){  // menu segundo atributo.
                    case 1:
                    printf("1 - População\n");
                    break;

                    case 2:
                    printf("2 - Área\n");
                    break;

                    case 3:
                    printf("3- PIB\n");
                    break;

                    case 5:
                    printf("5- Densidade demográfica\n");
                    break;
                
                default:
                printf("Opção inválida!\n");
                    break;
                }  


//----------------------------------------------------------------------------------
                break;
            case 5:
               
                int atributo1Densidade; //Se o atributo for o 5, então aparece 1, 2, 3, e 4 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3- PIB\n");
                printf("4- Número de Pontos Turísticos\n");
                scanf("%d", &atributo1Densidade);
                switch (atributo1Densidade){  
                    case 1:
                    printf("1 - População\n");
                    break;

                    case 2:
                    printf("2 - Área\n");
                    break;

                    case 3:
                    printf("3- PIB\n");
                    break;

                    case 4:
                    printf("4- Número de Pontos Turísticos\n");
                    break;
                
                default:
                printf("Opção inválida!\n");
                    break;
                }  

            break;
            default:
                printf("Opção inválida\n");}
                
        break;     
        default:
            printf("Opção inválida!\n");
            }

return 0;
        }                    
        
        
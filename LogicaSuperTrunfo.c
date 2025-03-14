#include <stdio.h> 
    // --- variantes para armazenar os dados das cartas ---
    int main(){ 
    char estado1, estado2;                      // sigla do estado (ex:'A','B')
    char codigo1[30], codigo2[30];              // codigo da carta (ex: 'A01','B01')
    char cidade1[30], cidade2[30];              // nome da cidade
    unsigned long int populacao1, populacao2;   // populaçao total
    int NPT1, NPT2;                             // NPT = numero de pontos turisticos
    float PIB1, PIB2;                           // PIB
    float area1, area2;                         // area
    float power1, power2;                       // Nivel de poder da carta
    float DP1, DP2, PIBP1, PIBP2;               // DP = Densidade populacional, PIBP = PIB per CAPITA
    int opcao, opcao2;                          // opçoes dos switch de interações

    // --- menu principal ---
    printf(" ______ ____ ___ __ _ _ \n");
    printf("|                       \n");
    printf("|     SUPER TRUNFO      \n");
    printf("|    MENU PRINCIPAL     \n");
    printf("|                       \n");
    printf("| 1. INICIAR O JOGO     \n");
    printf("| 2. REGRAS             \n");
    printf("| 3. SAIR               \n");
    printf("|______ ____ ___ __ _ _ \n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        // --- leitura dos dados da primeira carta ---
        printf(" _____ ___ ___ __ _ _ \n");
        printf("|                     \n");
        printf("| CADASTRO DA CARTA 1 \n");
        printf("|_____ ___ ___ __ _ _ \n");
        printf("\nDigite a sigla do estado da carta 1 (ex:'A','B'): \n");
        scanf(" %c", &estado1);
        printf("Digite o codigo da carta 1 (ex:'A01','B01'): \n");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade (carta 1): \n");
        scanf("%s", cidade1);
        printf("Digite a população total (carta 1): \n");
        scanf("%lu", &populacao1);
        printf("Digite o numero de pontos turisticos (carta 1): \n");
        scanf("%d", &NPT1);
        printf("Digite o pib (carta 1): \n");
        scanf("%f", &PIB1);
        printf("Digite a area da cidade (carta 1): \n");
        scanf("%f", &area1);

        // --- leitura de dados da segunda carta ---
        printf(" _____ ___ ___ __ _ _ \n");
        printf("|                     \n");
        printf("| CADASTRO DA CARTA 2 \n");
        printf("|_____ ___ ___ __ _ _ \n");
        printf("\nDigite a sigla do estado da carta 2 (ex:'A','B'): \n");
        scanf(" %c", &estado2);
        printf("Digite o codigo da carta 2 (ex:'A01','B01'): \n");
        scanf("%s", codigo2);
        printf("Digite o nome da cidade (carta 2): \n");
        scanf("%s", cidade2);
        printf("Digite a população total (carta 2): \n");
        scanf("%lu", &populacao2);
        printf("Digite o numero de pontos turisticos (carta 2): \n");
        scanf("%d", &NPT2);
        printf("Digite o pib (carta 2): \n");
        scanf("%f", &PIB2);
        printf("Digite a area da cidade (carta 2): \n");
        scanf("%f", &area2);

        // --- calculos ---
        DP1 = (float)populacao1 / area1;
        PIBP1 = (PIB1 * 1000000.0) / populacao1;
        power1 = (float)populacao1 + NPT1 + PIB1 + area1 + PIBP1 - DP1; 

        DP2 = (float)populacao2 / area2;   
        PIBP2 = (PIB2 * 1000000.0) / populacao2;  
        power2 = (float)populacao2 + NPT2 + PIB2 + area2 + PIBP2 - DP2; 

        // --- exibiçao dos dados da primeira carta ---
        printf(" __________ ______ ____ __ _ _          \n"); 
        printf("|                                       \n"); 
        printf("|       CARTA 1 | PODER: %.2f           \n", power1); 
        printf("|                                       \n"); 
        printf("| ESTADO: %c                            \n", estado1); 
        printf("| CODIGO: %s                            \n", codigo1); 
        printf("| NOME DA CIDADE: %s                    \n", cidade1); 
        printf("| POPULAÇÃO: %lu                        \n", populacao1); 
        printf("| AREA: %.2f km²                        \n", area1); 
        printf("| PIB: %.2f bilhões de reais            \n", PIB1); 
        printf("| NUMERO DE PONTOS TURISTICOS: %d       \n", NPT1);     
        printf("| DENSIDADE POPULACIONAL: %.2f hab/km²  \n", DP1);
        printf("| PIB per CAPITA: %.2f reais            \n", PIBP1); 
        printf("|__________ ______ ____ __ _ _          \n");

        // --- exibiçao dos dados da segunda carta ---
        printf(" __________ ______ ____ __ _ _          \n"); 
        printf("|                                       \n"); 
        printf("|       CARTA 2 | PODER: %.2f           \n", power2); 
        printf("|                                       \n"); 
        printf("| ESTADO: %c                            \n", estado2); 
        printf("| CODIGO: %s                            \n", codigo2); 
        printf("| NOME DA CIDADE: %s                    \n", cidade2); 
        printf("| POPULAÇÃO: %lu                        \n", populacao2); 
        printf("| AREA: %.2f km²                        \n", area2); 
        printf("| PIB: %.2f bilhões de reais            \n", PIB2); 
        printf("| NUMERO DE PONTOS TURISTICOS: %d       \n", NPT2);     
        printf("| DENSIDADE POPULACIONAL: %.2f hab/km²  \n", DP2);
        printf("| PIB per CAPITA: %.2f reais            \n", PIBP2); 
        printf("|__________ ______ ____ __ _ _          \n");

        // --- menu de interação para escolher qual atributo vai ser comparado ---
        printf(" __________ ______ ____ __ _ _ \n");
        printf("|                              \n"); 
        printf("|          SUPER TRUNFO        \n");
        printf("|    ESCOLHA UM DOS ATRIBUTOS  \n");
        printf("|       PARA SER COMPARADO     \n");
        printf("|                              \n");
        printf("| 1. POPULAÇÃO                 \n");
        printf("| 2. AREA                      \n");
        printf("| 3. PIB                       \n");
        printf("| 4. PONTOS TURISTICOS         \n");
        printf("| 5. DENSIDADE POPULACIONAL    \n");
        printf("| 6. PIB per CAPITA            \n");
        printf("| 7. NIVEL DE PODER            \n");
        printf("|__________ ______ ____ __ _ _ \n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao2);

        // ---- logica do jogo ---
        switch (opcao2)
        {
        case 1:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:POPULAÇÃO) ---\n");
        printf("\nCARTA 1 - %s: %lu\n", cidade1, populacao1);
        printf("CARTA 2 - %s: %lu\n", cidade2, populacao2);
    
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (populacao1 == populacao2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        case 2:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:AREA) ---\n");
        printf("\nCARTA 1 - %s: %.2f km²\n", cidade1, area1);
        printf("CARTA 2 - %s: %.2f km²\n", cidade2, area2);
    
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (area1 == area2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        case 3:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:PIB) ---\n");
        printf("\nCARTA 1 - %s: %.2f bilhões de reais\n", cidade1, PIB1);
        printf("CARTA 2 - %s: %.2f bilhões de reais\n", cidade2, PIB2);
    
        if (PIB1 > PIB2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (PIB1 == PIB2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        case 4:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:PONTOS TURISTICOS) ---\n");
        printf("\nCARTA 1 - %s: %d\n", cidade1, NPT1);
        printf("CARTA 2 - %s: %d\n", cidade2, NPT2);
    
        if (NPT1 > NPT2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (NPT1 == NPT2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        case 5:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:DENSIDADE POPULACIONAL) ---\n");
        printf("\nCARTA 1 - %s: %.2f hab/km²\n", cidade1, DP1);
        printf("CARTA 2 - %s: %.2f hab/km²\n", cidade2, DP2);
    
        if (DP1 < DP2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (DP1 == DP2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        case 6:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:PIB per CAPITA) ---\n");
        printf("\nCARTA 1 - %s: %.2f reais\n", cidade1, PIBP1);
        printf("CARTA 2 - %s: %.2f reais\n", cidade2, PIBP2);
    
        if (PIBP1 > PIBP2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (PIBP1 == PIBP2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        case 7:
        printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO:NIVEL DE PODER) ---\n");
        printf("\nCARTA 1 - %s: %.2f\n", cidade1, power1);
        printf("CARTA 2 - %s: %.2f\n", cidade2, power2);
    
        if (power1 > power2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            if (power1 == power2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        }
            break;
        default:
            printf("Opção invalida!");
            break;
        }
        break;
    case 2:
    printf("REGRAS...");
        break;
    case 3:
    printf("FIM DE JOGO!");
        break;
    default:
        printf("Opção invalida!");
        break;
    }

    return 0;
}
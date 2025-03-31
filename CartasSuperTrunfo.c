#include <stdio.h>

int main () {
    // Declaração de variáveis para armazenar informações sobre dois estados

    char estado, estado2;                           // Variáveis para armazenar uma única letra representando o estado
    char codigo[4], codigo2[4];                     // Arrays de caracteres para armazenar códigos dos estados (ex: "A01", "B02")
    char nome[20], nome2[20];                       // Arrays de caracteres para armazenar os nomes dos estados

    int pontos_turisticos, pontos_turisticos2;      // Número de pontos turísticos em cada estado
    int populacao, populacao2;                      // População total de cada estado

    float pib, pib2;                                // PIB total de cada estado
    float area, area2;                              // Área territorial de cada estado
    float densidade, densidade2;                    // Densidade populacional
    float pib_capita, pib_capita2;                  // PIB per capita (Produto Interno Bruto per capita)

    printf("\n");
    //TÍTULO
    printf("========== SUPER TRUNFO ==========\n\n");

    //DESENVOLVENDO AS CARTAS
    printf("VAMOS INICIAR PELO DESENVOLVIMENTO DAS CARTAS DO JOGO\n");

    //CARTA 1
    printf("CARTA 1: \n\n");

    printf("Estado. (A a H): ");
    scanf(" %c", &estado);
    printf("Código. (A01, B02): ");
    scanf(" %s", &codigo);
    printf("Nome: ");
    scanf(" %[^\n]s", &nome);
    printf("Pontos Turísticos: ");
    scanf(" %i", &pontos_turisticos);
    printf("População: ");
    scanf(" %i", &populacao);
    printf("PIB: ");
    scanf(" %f", &pib);
    printf("Área: ");
    scanf(" %f", &area);

    densidade = populacao / area;

    pib_capita = pib / populacao;

    // Calcular o inverso da densidade populacional
    float inverso_densidade = (densidade != 0) ? 1 / densidade : 0;

    // Calcular o Super Poder somando os atributos
    float super_poder1 = 0;
    super_poder1 += (float)populacao;             // Converte população para float para somar
    super_poder1 += area;                         // Soma área diretamente
    super_poder1 += pib;                          // Soma PIB diretamente
    super_poder1 += (float)pontos_turisticos;     // Converte pontos turísticos para float
    super_poder1 += pib_capita;                   // Soma PIB per capita diretamente
    super_poder1 += inverso_densidade;            // Soma o inverso da densidade populacional
    //FIM CARTA 1

    printf("\n");

    //CARTA 2
    printf("CARTA 2\n\n");

    printf("Estado. (A a H): ");
    scanf(" %c", &estado2);
    printf("Código. (A01, B02): ");
    scanf(" %s", &codigo2);
    printf("Nome: ");
    scanf(" %[^\n]s", &nome2);
    printf("Pontos Turísticos: ");
    scanf(" %i", &pontos_turisticos2);
    printf("População: ");
    scanf(" %i", &populacao2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Área: ");
    scanf(" %f", &area2);

    densidade2 = populacao2 / area2;

    pib_capita2 = pib2 / populacao2;

    // Calcular o inverso da densidade populacional
    float inverso_densidade2 = (densidade2 != 0) ? 1 / densidade2 : 0;

    // Calcular o Super Poder somando os atributos
    float super_poder2 = 0;
    super_poder2 += (float)populacao2;             // Converte população para float para somar
    super_poder2 += area2;                         // Soma área diretamente
    super_poder2 += pib2;                          // Soma PIB diretamente
    super_poder2 += (float)pontos_turisticos2;     // Converte pontos turísticos para float
    super_poder2 += pib_capita2;                   // Soma PIB per capita diretamente
    super_poder2 += inverso_densidade2;            // Soma o inverso da densidade populacional

    //FIM CARTA 2
    //FIM DO DESENVOLVIMENTO DAS CARTAS
    printf("\n");

    //EXIBIÇÃO DAS CARTAS
    printf("========== EXIBIÇÃO DAS CARTAS ==========\n\n");

    //CARTA 1
    printf("CARTA 1:\n\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Pontos Turísticos: %i\n", pontos_turisticos);
    printf("População: %i\n", populacao);
    printf("PIB: R$ %.2f bilhões de reais\n", pib);
    printf("Área: %.2f km²\n", area);
    printf("Densidade: %.2f hab/km²\n", densidade);
    printf("PIB per Capta: R$ %.2f reais\n", pib_capita);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n");

    //CARTA 2
    printf("CARTA 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Pontos Turísticos: %i\n", pontos_turisticos2);
    printf("População: %i\n", populacao2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capta: R$ %.2f reais\n", pib_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n");
    //COMPARANDO A CARTA VENCEDORA
    printf("COMPARANDO:\n");
    int vencedor = pontos_turisticos > pontos_turisticos2 ? 1 : 2;
    printf("Pontos Turísticos: Carta %i venceu\n", vencedor);

    int vencedor1 = populacao > populacao2 ? 1 : 2;
    printf("População: Carta %i venceu\n", vencedor1);

    int vencedor2 = pib > pib2 ? 1 : 2;
    printf("PIB: Carta %i venceu\n", vencedor2);

    int vencedor3 = area > area2 ? 1 : 2;
    printf("Área: Carta %i venceu\n", vencedor3);

    int vencedor4 = densidade < densidade2 ? 1 : 2;
    printf("Densidade: Carta %i venceu\n", vencedor4);
    
    int vencedor5 = pib_capita > pib_capita2 ? 1 : 2;
    printf("PIB per capita: Carta %i venceu\n", vencedor5);

    int vencedor6 = super_poder1 > super_poder2 ? 1 : 2;
    printf("Super Poder: Carta %i venceu\n", vencedor6);

}
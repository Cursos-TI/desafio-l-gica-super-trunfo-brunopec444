#include <stdio.h>

int main() {
    int opcao, atributo1, atributo2;
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, resultado1 = 0, resultado2 = 0, soma1, soma2;
    char pais1[50], pais2[50];

    printf("Bem-vindo ao Jogo Super Trunfo: Países\nEscolha uma opção:\n");
    printf("1. Jogar\n2. Verificar regras do jogo\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
        case 1:
    //Entrada Segunda Carta
        printf("Vamos começar:\n## Primeira Carta ##\nNome do País: ");
        fgets(pais1, 50, stdin);
        printf("População: ");
        scanf("%d", &populacao1);
        printf("Área (km²): ");
        scanf("%f", &area1);
        printf("PIB: ");
        scanf("%f", &pib1);
        printf("Pontos Turísticos: ");
        scanf("%d", &pontos1);
        densidade1 =  (float)populacao1 / area1;
        getchar();

        
    //Entrada Segunda Carta
        printf("\n## Segunda Carta ##\nNome do País: ");
        fgets(pais2, 50, stdin);
        printf("População: ");
        scanf("%d", &populacao2);
        printf("Área (km²): ");
        scanf("%f", &area2);
        printf("PIB: ");
        scanf("%f", &pib2);
        printf("Pontos Turísticos: ");
        scanf("%d", &pontos2);
        densidade2 = (float)populacao2 / area2;
        getchar();

        printf("\nEscolha o primeiro atributo:\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        scanf("%d", &atributo1);
        getchar();

        // Atributos 1
        switch (atributo1) {
            case 1: 
            resultado1 = (populacao1 > populacao2) ? 1 :  -1; 
            break;
            case 2: 
            resultado1 = (area1 > area2) ? 1 :  -1; 
            break;
            case 3: 
            resultado1 = (pib1 > pib2) ? 1 :  -1; 
            break;
             case 4: 
            resultado1 = (pontos1 > pontos2) ? 1 :  -1; 
            break;
            case 5: 
            resultado1 = (densidade1 < densidade2) ? 1 :  -1; 
            break;
            default: printf("Atributo inválido!\n"); 
            break;
            }

            printf("\nEscolha o segundo atributo:\n\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
            scanf("%d", &atributo2);
            getchar();

      // Atributos 2
    if (atributo1 == atributo2){
       printf("Os atributos escolhidos são os mesmos\n");
    } else  
    switch (atributo2) {
        case 1: 
        resultado2 = (populacao1 > populacao2) ? 1 :  -1; 
        break;
        case 2: 
        resultado2 = (area1 > area2) ? 1 : -1; 
        break;
        case 3: 
        resultado2 = (pib1 > pib2) ? 1 :  -1; 
        break;
        case 4: 
        resultado2 = (pontos1 > pontos2) ? 1 : -1; 
        break;
        case 5: 
        resultado2 = (densidade1 < densidade2) ? 1 : -1; 
        break;
        default: printf("Atributo inválido!\n");
        break;
        }

        soma1 = populacao1 + area1 + pib1 + pontos1 + densidade1;
        soma2 = populacao2 + area2 + pib2 + pontos2 + densidade2;
        int vencedor = resultado1 + resultado2;
            printf("\nResultado:\n");
        if ((vencedor > 0) && (soma1 > soma2)) {
            printf("O vencedor é o país %s", pais1);
        } else if (vencedor < 0) {
            printf("O vencedor é o país %s", pais2);
        } else {
             printf("Empate!\n");
        }
        break;

        case 2:
        printf("\nRegras do Jogo:\n- Escolha dois atributos para comparar entre dois países.\n");
        printf("- A carta com maior valor vence, exceto para Densidade Demográfica (menor valor vence).\n");
        printf("- Se valor da soma entre todos atributos, o maior valor vence.\n");
        break;

        default:
            printf("Opção inválida!\n");
        break;
    }
    return 0;
}
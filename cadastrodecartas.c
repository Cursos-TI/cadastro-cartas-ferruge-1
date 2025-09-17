

int main() {

    int carta1;
    char estado;
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao;
    float area_em_km2;
    int numero_de_pontos_turisticos;
    float PIB_em_bilhoes_de_reais;

    printf("CARTA 1:\n");
    printf("digite o estado(uma letra de A a H) :\n");
    scanf(" %c", &estado); // espaço antes do %c

    printf("digite o codigo da carta (letra do estado seguida de um numero de 01 a 04):\n");
    scanf("%s", codigo_da_carta);

    printf("digite o nome da cidade :\n");
    scanf(" %[^\n]", nome_da_cidade); // lê até o enter, incluindo espaços

    printf("digite a populacao :\n");
    scanf("%d", &populacao);

    printf("digite a area em km2 :\n");
    scanf("%f", &area_em_km2);

    printf("digite o numero de pontos turisticos :\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("digite o PIB :\n");
    scanf("%f", &PIB_em_bilhoes_de_reais);

    printf("CARTA 1:\n");
    printf("estado: %c\n", estado);
    printf("codigo da carta: %s\n", codigo_da_carta);
    printf("nome da cidade: %s\n", nome_da_cidade);
    printf("populacao: %d\n", populacao);
    printf("area em km2: %.2f\n", area_em_km2);
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);
    printf("PIB: %.2f\n", PIB_em_bilhoes_de_reais);

    printf("CARTA 2:\n");
    printf("digite o estado(uma letra de A a H) :\n");
    scanf(" %c", &estado); // espaço antes do %c

    printf("digite o codigo da carta (letra do estado seguida de um numero de 01 a 04):\n");
    scanf("%s", codigo_da_carta);

    printf("digite o nome da cidade :\n");
    scanf(" %[^\n]", nome_da_cidade); // lê até o enter, incluindo espaços

    printf("digite a populacao :\n");
    scanf("%d", &populacao);

    printf("digite a area em km2 :\n");
    scanf("%f", &area_em_km2);

    printf("digite o numero de pontos turisticos :\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("digite o PIB :\n");
    scanf("%f", &PIB_em_bilhoes_de_reais);

    printf("CARTA 2:\n");
    printf("estado: %c\n", estado);
    printf("codigo da carta: %s\n", codigo_da_carta);
    printf("nome da cidade: %s\n", nome_da_cidade);
    printf("populacao: %d\n", populacao);
    printf("area em km2: %.2f\n", area_em_km2);
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);
    printf("PIB: %.2f\n", PIB_em_bilhoes_de_reais);








    return 0;
}
#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cartas (cidades)
    // Cada carta terá um estado, código, nome da cidade, população, área, PIB, número de pontos turísticos,
    // e as variáveis para calcular densidade populacional e PIB per capita.

    // Atributos da Carta 1 (Cidade 1)
    char estadoA[3] = "SP";           // Estado da cidade A
    char codigoA[10] = "123";         // Código da cidade A
    char cidadeA[50] = "São Paulo";   // Nome da cidade A
    int populacaoA = 12300000;        // População da cidade A
    float areaA = 1500.0;             // Área da cidade A (em km²)
    float pibA = 500000000.0;         // PIB da cidade A
    int pontosTuristicosA = 100;      // Número de pontos turísticos da cidade A
    float densidadeA = populacaoA / areaA;  // Densidade populacional da cidade A
    float pibPerCapitaA = pibA / populacaoA; // PIB per capita da cidade A

    // Atributos da Carta 2 (Cidade 2)
    char estadoB[3] = "RJ";           // Estado da cidade B
    char codigoB[10] = "456";         // Código da cidade B
    char cidadeB[50] = "Rio de Janeiro";  // Nome da cidade B
    int populacaoB = 6000000;         // População da cidade B
    float areaB = 1200.0;             // Área da cidade B (em km²)
    float pibB = 300000000.0;         // PIB da cidade B
    int pontosTuristicosB = 50;       // Número de pontos turísticos da cidade B
    float densidadeB = populacaoB / areaB;  // Densidade populacional da cidade B
    float pibPerCapitaB = pibB / populacaoB; // PIB per capita da cidade B

    // Escolha do atributo para comparação: Vamos comparar o atributo "População".
    // Para outros atributos, basta alterar o código na parte da comparação.
    // A carta com maior valor vence, exceto para a Densidade Populacional, que vence a carta com menor valor.

    printf("Comparação de cartas (Atributo: População):\n");

    // Comparação das populações
    if (populacaoA > populacaoB) {
        printf("Carta 1 - %s (%s): %d\n", cidadeA, estadoA, populacaoA);
        printf("Carta 2 - %s (%s): %d\n", cidadeB, estadoB, populacaoB);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
    } else {
        printf("Carta 1 - %s (%s): %d\n", cidadeA, estadoA, populacaoA);
        printf("Carta 2 - %s (%s): %d\n", cidadeB, estadoB, populacaoB);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
    }

    // Exibição dos resultados detalhados:
    // Aqui, mostramos os valores das cidades para o atributo escolhido (População, no caso).
    // A carta vencedora é aquela com o maior valor para o atributo.

    return 0;
}

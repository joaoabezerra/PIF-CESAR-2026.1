// 25
#include <stdio.h>
int main(void) {
    float salario_base, salario_liquido;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);
    salario_liquido = salario_base + (salario_base * 0.05f) - (salario_base * 0.07f);
    printf("Salario Liquido a receber: R$ %.2f\n", salario_liquido);
    system("pause");
    return 0;
}
// 26
#include <stdio.h>
int main(void) {
    float comprimento, largura, preco_metro;
    float perimetro, metros_arame, custo_total;
    printf("Digite o comprimento e a largura do terreno (em metros): ");
    scanf("%f %f", &comprimento, &largura);
    printf("Digite o preco unitario do metro de arame (R$): ");
    scanf("%f", &preco_metro);
    perimetro = 2.0f * (comprimento + largura);
    metros_arame = perimetro * 3.0f;
    custo_total = metros_arame * preco_metro;
    printf("Metros de arame necessarios: %.2f m\n", metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);
    system("pause");
    return 0;
}
// 27
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand((unsigned int)time(NULL));
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;
    printf("Resultado dos tres dados: %d, %d, %d\n", dado1, dado2, dado3);
    system("pause");
    return 0;
}
// 28
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float horas_normais, horas_extras;
    float salario_bruto, excedente, imposto;
    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);
    salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);
    excedente = (salario_bruto > 12000.0f) ? (salario_bruto - 12000.0f) : 0.0f;
    imposto = excedente * 0.10f;
    printf("\n--- Resumo Anual ---\n");
    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido: R$ %.2f\n", imposto);
    system("pause");
    return 0;
}

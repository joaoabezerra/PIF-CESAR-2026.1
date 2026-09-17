// 17
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593
int main(void) {
    float raio, area, circunferencia;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = PI * (raio * raio);
    circunferencia = 2.0f * PI * raio;
    printf("Area do circulo: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);
    system("pause");
    return 0;
}
// 18
#include <stdio.h>
#define PI 3.141593
int main(void) {
    float raio, area, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    area = 4.0f * PI * (raio * raio);
    volume = (4.0f / 3.0f) * PI * (raio * raio * raio);
    printf("Area da superficie: %.4f\n", area);
    printf("Volume da esfera: %.4f\n", volume);
    system("pause");
    return 0;
}
// 19
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
    int dias_trabalhados;
    float valor_dia = 30.0f;
    float salario_bruto, imposto, salario_liquido;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);
    salario_bruto = dias_trabalhados * valor_dia;
    imposto = salario_bruto * 0.08f;
    salario_liquido = salario_bruto - imposto;
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido (8%%): R$ %.2f\n", imposto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    system("pause");
    return 0;
}
// 20
#include <stdio.h>
#include <math.h>
int main(void) {
    float lado_a, lado_b, hipotenusa;
    printf("Digite os valores dos dois catetos (lado_a e lado_b): ");
    scanf("%f %f", &lado_a, &lado_b);
    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));
    printf("Comprimento da hipotenusa: %.2f\n", hipotenusa);
    system("pause");
    return 0;
}

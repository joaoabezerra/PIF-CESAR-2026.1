// 7
#include <stdio.h>
int main(void) {
    int dia, mes, ano;
    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);
    return 0;
}
// 8
#include <stdio.h>
int main(void) {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    int quadrado = num * num;
    float decima_parte = (float)num / 10.0f;
    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);
    return 0;
}
// 9
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    float divisao = (float)a / (float)b;
    printf("Divisao real: %.2f\n", divisao);
    return 0;
}
// 10
#include <stdio.h>
int main(void) {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    float kelvin = celsius + 273.15f;
    printf("Fahrenheit: %.2f *F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);
    return 0;
}

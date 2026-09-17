// 13
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Digite a base e a altura (separadas por espaco): ");
    scanf("%f %f", &base, &altura);
    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0f;
    printf("\n--- Resultados ---\n");
    printf("Area do Quadrado: %.2f\n", area_quadrado);
    printf("Area do Retangulo: %.2f\n", area_retangulo);
    printf("Area do Triangulo Retangulo: %.2f\n", area_triangulo);
    return 0;
}
// 14
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(void) {
    float a, b, c, p, area;
    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c) / 2.0f;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Semi-perimetro (p): %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);
    system("pause");
    return 0;
}

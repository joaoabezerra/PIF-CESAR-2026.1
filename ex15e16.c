// 15
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
    float n1, n2, n3, n4;
    float media_simples, media_ponderada;
    printf("Digite as quatro notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media_simples = (n1 + n2 + n3 + n4) / 4.0f;
    media_ponderada = (n1 * 1.0f + n2 * 1.0f + n3 * 2.0f + n4 * 2.0f) / 6.0f;
    printf("Media Aritmetica Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);
    system("pause");
    return 0;
}
// 16
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    int degraus;
    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);
    printf("Digite a altura total a alcancar (em metros): ");
    scanf("%f", &altura_total_m);
    altura_total_cm = altura_total_m * 100.0f;
    degraus = (int)ceil(altura_total_cm / altura_degrau_cm);
    printf("Quantidade minima de degraus: %d\n", degraus);
    system("pause");
    return 0;
}

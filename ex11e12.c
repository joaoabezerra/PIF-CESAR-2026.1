// 11
#include <stdio.h>
#define PI 3.141593
int main(void) {
    float graus, radianos;
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);
    radianos = graus * (PI / 180.0f);
    printf("Angulo em radianos: %.6f rad\n", radianos);
    system("pause");
    return 0;
}
// 12
#include <stdio.h>
int main(void) {
    int num, antecessor, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    antecessor = num;
    --antecessor;
    sucessor = num;
    ++sucessor;
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    return 0;
}

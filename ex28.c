#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1, n2, n3;
    double media;
    printf("informe três valores inteiros separados por espaco: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    media = (double)(n1 + n2 + n3) / 3.0;
    printf("A media aritmetica e: %.2f\n", media);
    system("pause");
    return 0;
}
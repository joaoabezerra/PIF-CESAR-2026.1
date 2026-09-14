#include <stdio.h>
#include <stdlib.h>
int main() {
    float lapis = 4.88;
    float borracha = 234.54;
    float caneta = 42.04;
    float caderno = 8.00;
    float fitas = 13.05;
    printf("%-8s%12.2f\n", "lapis", lapis);
    printf("%-8s%12.2f\n", "borrachas", borracha);
    printf("%-8s%12.2f\n", "canetas", caneta);
    printf("%-8s%12.2f\n", "cadernos", caderno);
    printf("%-8s%12.2f\n", "fitas", fitas);
    system("pause");
    return 0;
}
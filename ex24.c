#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("%-16s%s\n", "ALUNO(A)", "NOTA");
    printf("%-16s%s\n", "=========", "=====");
    printf("%-16s%s\n", "ALINE", "9.0");
    printf("%-16s%s\n", "M\xC1RIO", "DEZ");
    printf("%-16s%s\n", "S\xC9RGIO", "4.5");
    printf("%-16s%s\n", "SHIRLEY", "7.0");
    system("pause");
    return 0;
}
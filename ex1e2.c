// (1)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int valor_inteiro;
    valor_inteiro = 2.97;
    printf("O valor armazenado eh: %d\n", valor_inteiro);
    system("pause");
    return 0;
}
// (A) saída: 2
// (B) ocorre uma coerção implícita. pois ao atribuir o valor em ponto flutuante 2.97 na variável int, o compilador descarta a parte fracionária sem realizar arredondamento.
// (C) para evitar as perdas invertidas, utiliza-se um (int)valor para documentar a intenção, ou utilizar <math.h> como round() antes de converter para int().

// (2)
// (A) é uma biblioteca legada do MS-DOS não especificada pelo padrão ANSI C.
// (B) getchar(), fgetc(stdin) e getc(stdin)
// (C)
#include <stdio.h>
int main(void) {
    char ch;
    printf("digite um caractere: ");
    scanf("%c", &ch);
    printf("caracterre lido: %c\n", ch);
    system("pause");
    return 0;
}

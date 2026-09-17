// (3)

#include <stdio.h>
int main(void) {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", num, num, num, num);
    return 0;
}

// (4)
// (A)
a += b + c;
a = 1 + (2 + 3);
a = 6;
// (B)
b *= c = d + 2;
c = 4 + 2 = 6;
b *= 6;
b = 2 * 6;
b = 12, c = 6;
// (C)
d -= c -= b -= a;
b -= a;
b = 12 - 6 = 6;
c -= b;
c = 6 - 6 = 0;
d -= c;
d = 4 - 0 = 4;
// (D)
a += b += c += 7;
c += 7;
c = 0 + 7 = 7;
b += c;
b = 6 + 7 = 13;
a += b;
a = 6 + 13 = 19;
// (E)
d %= a + a + a;
a + a + a = 19 + 19 + 19 = 57;
d %= 57;
d = 4 % 57 = 4;
// VALORES FINAIS
a = 19, b = 13, c = 7, d = 4;

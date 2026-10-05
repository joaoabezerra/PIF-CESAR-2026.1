// 04
// i = 2, j = 3, k = 0, x = 2.5, y = 5.0

// 04 (A)
// i < j + 2
// 2 < (3 + 2) => 2 < 5 (1)

// 04 (B)
// 2 * i - 5 <= j - 4
// (2 * 2) - 5 <= 3 - 4 => 4 - 5 <= -1 => -1 <= -1 (1)

// 04 (C)
// !k && (x + y >= 7.5)
// !0 = 1
// (2.5 + 5.0 >= 7.5) => 7.5 >= 7.5
// 1 && 1 = (1)

// 04 (D)
// !(i == j) || (y / x == 2.0)
// !(2 == 3) => !0 => 1 (1)

// 04 (E)
// i == 2 && j == -4 || k == 0
// (i == 2 && j == -4) || (k == 0)
// (1 && 0) || (0 == 0) => 0 || 1 (1)

// 05 (A)
while // pré-teste (testa a condição antes de executar o bloco);
do-while // pós-teste (testa a condição após executar o bloco).

// 05 (B)
for // usado quando o número de iterações é previamente conhecido ou determinado por um intervalo.

// 05 (C)
// "while (condicao);" é um erro de lógica.

// 06
#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
if (i == 5) continue;
if (i == 8) break;
int soma = 0;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}

// 06 (A)
// a variável soma foi declarada dentro do escopo do laço for (int soma = 0). ao tentar acessá-la no printf fora do laço for, o compilador gera um erro informando que a variável soma não foi declarada naquele escopo.

// 06 (B)
// i = 1, 2, 3, 4 (executável);
// i = 5 (o continue salta o restante do bloco e vai direto para a próxima iteração (i++));
// i = 6, 7 (executável);
// i = 8 (o break encerra imediatamente a execução do laço for).

// iterações somadas: i = 1, 2, 3, 4, 6, 7.

// 06 (C)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    } printf("Soma final = %d\n", soma);
    return 0;
} // $1^2 + 2^2 + 3^2 + 4^2 + 6^2 + 7^2 = 1 + 4 + 9 + 16 + 36 + 49 = 115

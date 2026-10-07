// 01 (A)
while: // pré-teste. a condição é avaliada antes de qualquer execução do bloco de código. caso a condição seja falsa no início, o bloco é executado no mínimo zero vezes;
do-while: // pós-teste. o bloco de código é executado primeiro e a condição é avaliada ao final da iteração. assim, o bloco é executado no mínimo uma vez.

// 01 (B)
for: // ideal quando se sabe previamente o número exato de iterações ou para percorrer intervalos numéricos ou coleções;
while: // ideal para cenários em que o número de iterações é incerto e depende de uma condição lógica externa verificada antes de iniciar;
do-while: // ideal quando o bloco de código precisa ser executado obrigatoriamente ao menos uma vez antes do teste de verificação, como em validação de entradas do usuário e menus de opções.

// 01 (C)
"while (condicao) { }" // é um erro de lógica. o ponto e vírgula funciona como uma instrução nula (corpo do laço vazio). se "condicao" for verdadeira, o programa entrará em um laço infinito travado, executando repetidamente a instrução nula sem alterar o valor da condição.

// 02
#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i < 10; i++) {
int soma = 0;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}

// 02 (A)
// a variável "soma" foi declarada dentro do laço for. há escopo de bloco nas variáveis declaradas dentro de um bloco, existindo exclusivamente dentro da par de chaves {}.

// 02 (B)
// como a declaração "int soma = 0;" está no topo do bloco interno, a cada iteração do laço a variável soma é recriada e reinicializada com zero. dessa forma, ela não acumula os valores anteriores, calculando apenas $i^2$ da iteração atual.

// 02 (C)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    } printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

// 03
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
    int a;
    int soma = 0;
    // Trecho A: Incremento por divisão
    for (a = 36; a > 0; a /= 2) {
        printf("%d\t", a);
    } // Trecho B: Omissão de inicialização e incremento
    for (; (ch = getch()) != 'X' ;) {
        printf("%c", ch + 1);
    } // Trecho C: Omissão completa de expressões
    for (;;) {
        printf("Laço Infinito\n");
    } system("PAUSE");
    return 0;
}

// 03 (A)
// o laço inicia com a = 36 e divide a por 2 a cada iteração enquanto a > 0.

// 03 (B)
// a operação ch + 1 pega o valor ASCII do caractere lido pela função getch() e soma 1, avançando para o caractere seguinte na tabela ASCII.

// 03 (C)
// o laço infinito for (;;) pode ser encerrado programaticamente através do comando break (ou por meio das instruções return e goto).

// 04 (A)
break: // encerra imediatamente a execução do laço (for, while ou do-while) no qual está inserido;

// 04 (B)
continue: // interrompe a iteração atual do laço e ignora o restante do código dentro do bloco, saltando para a próxima iteração;

// 04 (C)
break: // interrompe apenas o laço mais interno no qual ele está contido. o laço externo continua sua execução normal.

// 05
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j;
    for (i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    } system("PAUSE");
    return 0;
}

// 05 (A)
// i = 0, j = 10 (0 < 10 -> V)
// i = 1; j = 9 (1 < 9 -> V)
// i = 2, j = 8 (2 < 8 -> V)
// i = 3, j = 7 (3 < 7 -> V)
// i = 4, j = 6 (4 < 6 -> V)

// 05 (B)
// saída:
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

// 05 (C)
#include <stdio.h>
int main() {
    int i = 0, j = 10;
    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }
    return 0;
}

// 06
#include <stdio.h>
#include <stdlib.h>
int main () {
    int x = 0;
    while (x++ < 5) {
        printf("Valor final de x = %d\n", x);
} system("PAUSE");
    return 0;
}

// 06 (A)
x  = 6

// 06 (B)
x = 0: 0 < 5 (1)
x = 1: 1 < 5 (1)
x = 2: 2 < 5 (1)
x = 3: 3 < 5 (1)
x = 4: 4 < 5 (1)
x = 5: 5 < 5 (0)

// 06 (C)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 0;
    while (x < 5) {
        x++;
    } x++;
    printf("Valor final de x = %d\n", x);
    system("PAUSE");
    return 0;
}

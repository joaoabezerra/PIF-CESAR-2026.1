 *
 * PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS (RESPOSTAS)
 *
 * Questão 01.
 * a) O uso de `if (x = 0)` atribui o valor 0 à variável x em vez de comparar.
 *    Como a atribuição resulta em 0 (falso), o bloco do `if` nunca é executado[cite: 2].
 * b) Em C, o valor 0 representa 'falso' e qualquer valor diferente de zero 
 *    (positivo ou negativo) é avaliado como 'verdadeiro'[cite: 2].
 * c) A instrução `if (x = -5)` armazena -5 em x. Como -5 != 0, a condição é 
 *    verdadeira segundo o padrão ANSI C e o bloco associado é EXECUTADO[cite: 2].
 *
 * Questão 02.
 * a) A mensagem impressa será "Opção B". O `else` se associa ao `if (y > 10)`
 *    mais interno. Como x=15 (>10) e y=5 (não >10), o fluxo vai para o else[cite: 2].
 * b) Regra do "dangling else": o `else` associa-se sempre ao `if` sem chaves 
 *    mais próximo[cite: 3].
 * c) Código corrigido com chaves[cite: 3]:
 *    if (x > 10) {
 *        if (y > 10) printf("Opção A\n");
 *    } else {
 *        printf("Opção B\n");
 *    }
 *
 * Questão 03.
 * a) Avalia `(media >= 7.0)`. Se verdadeira, retorna 'A', senão 'R'. Para 
 *    media = 6.8, `situacao` recebe 'R'[cite: 3].
 * b) if (media >= 7.0) situacao = 'A'; else situacao = 'R';[cite: 3]
 * c) Não. O ternário é uma expressão que retorna valor. Não suporta blocos
 *    de múltiplos comandos ou comandos de fluxo sem retorno[cite: 3].
 *
 * Questão 04.
 * a) Saída impressa[cite: 3]:
 *    Prata
 *    Ouro
 *    Sem Medalha
 *    Ocorre por causa do efeito "Fall-Through", pois falta o comando `break`[cite: 3].
 * b) O `break` encerra o bloco `switch`. A omissão gera o efeito "Fall-Through"[cite: 3].
 * c) Apenas tipos inteiros/caracteres (int, char, short, etc.). Tipos float e 
 *    double não são permitidos por conta de imprecisões em comparações exatas[cite: 3].
 *
 * Questão 05.
 * a) Saída: `a=0 b=5 c=8`. Devido ao curto-circuito no `&&`, como `a!=0` é falso,
 *    a expressão `++b > 5` nem é avaliada (b continua 5)[cite: 3, 4].
 * b) No `&&`, se o 1º operando for falso, a avaliação para.
 *    No `||`, se o 1º operando foi verdadeiro, a avaliação para[cite: 4].
 * c) Com `if (a == 0 || ++b > 5)`: `a==0` é verdadeiro, o `||` aplica curto-circuito,
 *    b continua 5 e c vira 20 (`c += 10`)[cite: 4].
 *
 * Questão 06.
 * a) Para idade = 65, imprime: "Idoso", "Adulto" e "Jovem". Comandos `if` 
 *    independentes testam todas as condições[cite: 4].
 * b) `if`s independentes testam todas as condições; cadeias `else-if` param na 
 *    primeira condição verdadeira[cite: 4].
 * c) Código com `else-if`[cite: 4]:
 *    if (idade >= 60) printf("Idoso\n");
 *    else if (idade >= 18) printf("Adulto\n");
 *    else if (idade >= 12) printf("Jovem\n");
 *    else printf("Criança\n");
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

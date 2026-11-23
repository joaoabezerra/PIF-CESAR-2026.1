// --- PARTE II:
// 07
#include <stdio.h>

int soma(int a, int b);

int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", soma(a, b));
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
// 08
#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("Celsius: %.2f\n", celsius(f));
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
// 09
#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior: %d\n", maior(a, b));
    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}
// 10
#include <stdio.h>

#define PI 3.14159f

float area(float r);

int main(void) {
    float r;
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    printf("Area da esfera: %.2f\n", area(r));
    return 0;
}

float area(float r) {
    return 4.0f * PI * r * r;
}
// 11
#include <stdio.h>

int ehPar(int n);

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("%d e par.\n", n);
    } else {
        printf("%d e impar.\n", n);
    }
    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
// 12
#include <stdio.h>

void exibeMenu(void);

int main(void) {
    int opcao;
    exibeMenu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opcao selecionada: Cadastrar.\n");
            break;
        case 2:
            printf("Opcao selecionada: Listar.\n");
            break;
        case 3:
            printf("Opcao selecionada: Remover.\n");
            break;
        case 0:
            printf("A sair do programa...\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    return 0;
}

void exibeMenu(void) {
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
// 13
#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int op;
    float x, y;

    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nEscolha: ");
    scanf("%d", &op);

    if (op < 1 || op > 4) {
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    switch (op) {
        case 1:
            printf("Resultado: %.2f\n", soma(x, y));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(x, y));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(x, y));
            break;
        case 4:
            if (y == 0.0f) {
                printf("Erro: divisao por zero nao permitida.\n");
            } else {
                printf("Resultado: %.2f\n", divide(x, y));
            }
            break;
    }
    return 0;
}

float soma(float a, float b) { return a + b; }
float subtrai(float a, float b) { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }
// 14
#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 0;
    }

    printf("Soma dos digitos: %d\n", somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    /* Caso base: quando nao ha mais digitos a separar */
    if (n < 10) {
        return n;
    }
    /* Passo recursivo: ultimo digito + soma dos digitos restantes */
    return (n % 10) + somaDigitos(n / 10);
}
// 15
#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(void) {
    float n1, n2, n3, media;
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = mediaPonderada(n1, n2, n3);
    printf("Media: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}
// 16
#include <stdio.h>

int ehBissexto(int ano);

int main(void) {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }
    return 0;
}

int ehBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}
// 17
#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long resIter, resRec;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido (deve ser nao negativo).\n");
        return 0;
    }

    resIter = fatorialIterativo(n);
    resRec = fatorialRecursivo(n);

    printf("Fatorial iterativo: %ld\n", resIter);
    printf("Fatorial recursivo: %ld\n", resRec);

    if (resIter == resRec) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados nao coincidem.\n");
    }
    return 0;
}

long fatorialIterativo(int n) {
    long fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
// 18
#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;
    printf("Digite a base e o expoente (nao negativo): ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
        return 0;
    }

    printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    /* Caso base: qualquer numero elevado a 0 e 1 */
    if (expoente == 0) {
        return 1;
    }
    /* Passo recursivo: base * base^(expoente - 1) */
    return (long)base * potencia(base, expoente - 1);
}
// 19
#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    printf("\nContagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    /* Na contagem regressiva, o printf ocorre antes da chamada recursiva
       (na ida/empilhamento). Aqui, a chamada recursiva vem antes do printf,
       fazendo com que a impressao ocorra apenas no retorno/desempilhamento,
       do menor valor (1) ate n. */
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
// 20
#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    printf("\nNumeros primos de 1 a 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
// 21
#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Quadrado de %d: %d\n", a, SQR(a));
    printf("Quadrado de %d: %d\n", b, SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    return 0;
}
// 22
#ifndef AREAS_H
#define AREAS_H

#define PI 3.14159f
#define A_CIRC(raio) (PI * (raio) * (raio))
#define A_RET(base, alt) ((base) * (alt))
#define A_TRI(base, alt) (((base) * (alt)) / 2.0f)

#endif
#include <stdio.h>
#include "areas.h"

int main(void) {
    float raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Area do circulo: %.2f\n", A_CIRC(raio));

    printf("Digite base e altura do retangulo: ");
    scanf("%f %f", &baseRet, &altRet);
    printf("Area do retangulo: %.2f\n", A_RET(baseRet, altRet));

    printf("Digite base e altura do triangulo: ");
    scanf("%f %f", &baseTri, &altTri);
    printf("Area do triangulo: %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}
// 23
#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_CORRETO(x) ((x) * 2)

int dobro(int x);

int main(void) {
    /* DOBRO(2+3) expande para 2+3*2 -> 2 + 6 = 8 (precedencia de * sobre +).
       Ja a funcao dobro(2+3) avalia 2+3 = 5 antes da chamada e retorna 10. */
    printf("Macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3): %d\n", dobro(2+3));

    /* Com parenteses de protecao: ((2+3) * 2) -> 5 * 2 = 10 */
    printf("Macro corrigida DOBRO_CORRETO(2+3): %d\n", DOBRO_CORRETO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
// 24
#include <stdio.h>

/* Para testar com depuracao ativa sem passar -DDEBUG no comando de compilacao,
   descomenta a linha abaixo: */
/* #define DEBUG */

/* Diferenca de comportamento entre as compilacoes:
   - Com DEBUG definido (ex.: gcc -DDEBUG q24.c -o q24): o bloco #ifdef DEBUG e incluido
     no codigo compilado e imprime o valor parcial da soma a cada iteracao do laco.
   - Sem DEBUG definido (ex.: gcc q24.c -o q24): o preprocessador remove o bloco #ifdef DEBUG,
     nenhuma mensagem parcial e exibida e o executavel final imprime apenas o resultado final. */

int somaAteN(int n);

int main(void) {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma total de 1 ate %d: %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] iteracao %d -> soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
// 25
#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int num, den;
    printf("Digite dois inteiros positivos (numerador e denominador): ");
    scanf("%d %d", &num, &den);

    if (num <= 0 || den <= 0) {
        printf("Erro: os numeros devem ser positivos.\n");
        return 0;
    }

    printf("MDC(%d, %d) = %d\n", num, den, mdc(num, den));
    simplifica(num, den);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
// 26
#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int qtd;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Digite uma quantidade positiva.\n");
        return 0;
    }

    for (int i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    /* A versao recursiva pura recalcula os mesmos subproblemas repetidas vezes
       (arvore de chamadas exponencial, O(2^n)). Para valores maiores de n,
       o numero de chamadas cresce muito rapido, tornando a execucao lenta. */
    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// 27
#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int op;
    float temp, res;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &op);

    if (op < 1 || op > 4) {
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (op) {
        case 1:
            res = celsiusParaFahrenheit(temp);
            break;
        case 2:
            res = celsiusParaKelvin(temp);
            break;
        case 3:
            res = fahrenheitParaCelsius(temp);
            break;
        case 4:
            res = kelvinParaCelsius(temp);
            break;
    }

    printf("Temperatura convertida: %.2f\n", res);
    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
// 28
#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco unitario: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento (1 - A vista [10%% desc.] / 2 - A prazo): ");
    scanf("%d", &opcaoPagamento);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    troco = calculaTroco(total, pago);

    printf("\nSubtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("Troco: R$ %.2f\n", troco);

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    if (pago < total) {
        return 0.0f;
    }
    return pago - total;
}

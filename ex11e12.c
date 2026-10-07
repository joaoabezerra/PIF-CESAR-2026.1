// 07
#include <stdio.h>
int main() {
    int i;
    printf("--- Versao FOR ---\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    printf("--- Versao WHILE ---\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    printf("--- Versao DO-WHILE ---\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
    return 0;
}

// 08
#include <stdio.h>
int main() {
    float nota;
    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: Nota invalida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);
    printf("Nota registrada com sucesso!\n");
    return 0;
}

// 09
#include <stdio.h>
int main() {
    float valor, soma = 0.0;
    int qtd = 0;
    printf("Digite valores reais positivos (ou um valor negativo para encerrar):\n");
    while (1) {
        printf("Valor: ");
        scanf("%f", &valor);
        if (valor < 0.0) {
            break;
        }
        soma += valor;
        qtd++;
    }
    if (qtd > 0) {
        printf("\n--- RESULTADOS ---\n");
        printf("Quantidade de valores validos: %d\n", qtd);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", soma / qtd);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }
    return 0;
}

// 10
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}

// 11
#include <stdio.h>
int main() {
    int A, B, i;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

// 12
#include <stdio.h>
int main() {
    float celsius, fahrenheit, kelvin;
    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("----------------------------------------\n");
    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;
        printf("%6.2f*C\t\t%6.2f*F\t\t%6.2f K\n", celsius, fahrenheit, kelvin);
    }
    return 0;
}

// 13
#include <stdio.h>
int main() {
    int N, i;
    long long int fatorial = 1;
    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Erro: Nao e possivel calcular fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", N, fatorial);
    }
    return 0;
}

// 14
#include <stdio.h>
int main() {
    int i;
    long long int soma_quadrados = 0;
    for (i = 1; i <= 100; i++) {
        long long int quadrado = (long long int)i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_quadrados += quadrado;
    }
    printf("\nSoma total dos quadrados: %lld\n", soma_quadrados);
    return 0;
}

// 15
#include <stdio.h>
int main() {
    int NUM, i, encontrados = 0;
    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &NUM);
    if (NUM <= 0) {
        printf("Erro: O numero deve ser positivo.\n");
        return 1;
    }
    printf("Multiplos de 3 e 5 ate %d:\n", NUM);
    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("Nenhum numero satisfaz a condicao no intervalo.");
    }
    printf("\n");
    return 0;
}

// 16
#include <stdio.h>
int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;
    int tentativas = 0;
    int max_tentativas = 3;
    while (tentativas < max_tentativas) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        tentativas++;
        if (senha_digitada == SENHA_CORRETA) {
            printf("Acesso Concedido! (Tentativas utilizadas: %d)\n", tentativas);
            return 0;
        } else if (tentativas < max_tentativas) {
            printf("Senha incorreta! Tentativa %d de %d.\n", tentativas, max_tentativas);
        }
    }
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}

// 17
#include <stdio.h>
int main() {
    float nota, maior, menor, soma = 0.0;
    int total_alunos = 0;
    while (1) {
        printf("Digite a nota do aluno (-1.0 para encerrar): ");
        scanf("%f", &nota);
        if (nota == -1.0) {
            break;
        }
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite entre 0.0 e 10.0.\n");
            continue;
        }
        if (total_alunos == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
        soma += nota;
        total_alunos++;
    }
    if (total_alunos > 0) {
        printf("\n--- ESTATISTICAS DA TURMA ---\n");
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral: %.2f\n", soma / total_alunos);
    } else {
        printf("\nNenhum aluno foi avaliado.\n");
    }
    return 0;
}

// 18
#include <stdio.h>
int main() {
    int num, original, invertido = 0, digito;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Erro: Digite um numero positivo.\n");
        return 1;
    }
    original = num;
    while (num > 0) {
        digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", invertido);
    return 0;
}

// 19
#include <stdio.h>
int main() {
    int N, i;
    long long int t1 = 1, t2 = 1, proximo;
    printf("Digite o termo desejado N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Erro: N deve ser maior que zero.\n");
        return 1;
    }
    printf("Sequencia ate o %d-esimo termo: ", N);
    if (N == 1) {
        printf("1\n");
        printf("O 1-esimo termo e: 1\n");
        return 0;
    }
    printf("1 1 ");
    for (i = 3; i <= N; i++) {
        proximo = t1 + t2;
        printf("%lld ", proximo);
        t1 = t2;
        t2 = proximo;
    }
    printf("\nO %d-esimo termo e: %lld\n", N, (N == 2) ? 1 : t2);
    return 0;
}

// 20
#include <stdio.h>
int main() {
    int i;
    printf("Decimal\tHexa\tCaractere\n");
    printf("---------------------------\n");

    for (i = 32; i <= 126; i++) {
        printf("%d\t%X\t%c\n", i, i, (char)i);
    }
    return 0;
}

// 21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char letra_secreta, palpite;
    int tentativas = 0;
    srand(time(NULL));
    letra_secreta = rand() % 26 + 'a';

    printf("--- JOGO DE ADIVINHACAO DA LETRA ---\n");
    printf("Adivinhe a letra minuscula secreta (a-z)!\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;
        if (palpite < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS no alfabeto.\n");
        } else if (palpite > letra_secreta) {
            printf("Dica: A letra secreta vem ANTES no alfabeto.\n");
        } else {
            printf("\nParabens! Voce acertou a letra '%c' em %d tentativas!\n", letra_secreta, tentativas);
        }
    } while (palpite != letra_secreta);
    return 0;
}

// 22
#include <stdio.h>
int main() {
    int N, i, j, valor = 1;
    printf("Digite o numero de linhas N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", valor);
            valor++;
        }
        printf("\n");
    }
    return 0;
}

// 23
#include <stdio.h>
int main() {
    int L, i, j;
    printf("Digite o lado do quadrado L (3 a 20): ");
    scanf("%d", &L);
    if (L < 3 || L > 20) {
        printf("Erro: Dimensao fora do intervalo suportado.\n");
        return 1;
    }
    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L; j++) {
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 24
#include <stdio.h>
int main() {
    int N, i, j;
    printf("Digite uma dimensao impar N (3 a 19): ");
    scanf("%d", &N);
    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Erro: N deve ser um numero impar entre 3 e 19.\n");
        return 1;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 25
#include <stdio.h>
int main() {
    int N, i, divisores = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    if (N <= 1) {
        printf("O numero %d NAO e primo.\n", N);
        return 0;
    }
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }
    printf("Quantidade de divisores encontrados: %d\n", divisores);
    if (divisores == 2) {
        printf("O numero %d E PRIMO!\n", N);
    } else {
        printf("O numero %d NAO e primo.\n", N);
    }
    return 0;
}

// 26
#include <stdio.h>
int e_primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int A, B, i, soma = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B (B > A): ");
    scanf("%d", &B);
    if (A >= B) {
        printf("Erro: A deve ser estritamente menor que B.\n");
        return 1;
    }
    printf("Primos no intervalo [%d, %d]: ", A, B);
    for (i = A; i <= B; i++) {
        if (e_primo(i)) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma total dos primos encontrados: %d\n", soma);
    return 0;
}

// 27
#include <stdio.h>
int main() {
    int valor, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;
    printf("Digite o valor do saque em R$: ");
    scanf("%d", &valor);
    if (valor <= 0 || valor == 1 || valor == 3) {
        printf("Erro: Valor invalido para as cedulas disponiveis.\n");
        return 1;
    }
    int sob = valor;
    while (sob >= 100) { sob -= 100; c100++; }
    while (sob >= 50)  { sob -= 50;  c50++;  }
    while (sob >= 20)  { sob -= 20;  c20++;  }
    while (sob >= 10)  { sob -= 10;  c10++;  }
    while (sob >= 5)   { sob -= 5;   c5++;   }
    while (sob >= 2)   { sob -= 2;   c2++;   }
    if (sob != 0) {
        printf("Erro: Nao e possivel fornecer o valor exato com as cedulas disponiveis.\n");
        return 1;
    }
    printf("\n--- CEDULAS FORNECIDAS ---\n");
    if (c100 > 0) printf("Cedulas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("Cedulas de R$  50: %d\n", c50);
    if (c20 > 0)  printf("Cedulas de R$  20: %d\n", c20);
    if (c10 > 0)  printf("Cedulas de R$  10: %d\n", c10);
    if (c5 > 0)   printf("Cedulas de R$   5: %d\n", c5);
    if (c2 > 0)   printf("Cedulas de R$   2: %d\n", c2);
    return 0;
}

// 28
#include <stdio.h>
int main() {
    int opcao;
    float salario, novo_salario, desconto;
    do {
        printf("\n===================================\n");
        printf(" SISTEMA DE FOLHA DE PAGAMENTO\n");
        printf("===================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("\nDigite o salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.00) {
                    novo_salario = salario * 1.15; // 15%
                } else {
                    novo_salario = salario * 1.10; // 10%
                }
                printf("Novo salario apos reajuste: R$ %.2f\n", novo_salario);
                break;
            case 2:
                printf("\nDigite o salario para calculo de IR: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.00) {
                    desconto = salario * 0.08; // 8%
                } else {
                    desconto = salario * 0.15; // 15%
                }
                printf("Desconto de IR: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario - desconto);
                break;
            case 3:
                printf("\nPrograma encerrado com sucesso!\n");
                break;
            default:
                printf("\nOpcao invalida! Selecione 1, 2 ou 3.\n");
                break;
        }
    } while (opcao != 3);
    return 0;
}

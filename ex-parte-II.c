// 08
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double raio, area, volume;

    printf("Digite o valor do raio (R) da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("\n--- RESULTADOS ESFERA ---\n");
    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera:   %.3f\n", volume);

    return 0;
}

// 09
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nSemiperimetro (p): %.3f\n", p);
    printf("Area do triangulo:  %.3f\n", area);

    return 0;
}

// 10
#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           total_segundos, horas, minutos, segundos);

    return 0;
}

// 11
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias;
    double salario_bruto, gratificacao, imposto, salario_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 45.0;
    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("\n=== HOLERITE DETALHADO ===\n");
    printf("Dias Trabalhados: %d\n", dias);
    printf("Salario Bruto:    R$ %.2f\n", salario_bruto);
    printf("(+) Gratificacao: R$ %.2f (5%%)\n", gratificacao);
    printf("(-) Imposto IR:   R$ %.2f (8%%)\n", imposto);
    printf("---------------------------\n");
    printf("Salario Liquido:  R$ %.2f\n", salario_liquido);

    return 0;
}

// 12
#include <stdio.h>
#include <stdlib.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota valida (entre 0.0 e 10.0): ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: Nota invalida! Tente novamente.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("\nNota %.2f registrada com sucesso!\n", nota);

    return 0;
}

// 13
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}

// 14
#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < 3) {
        printf("Digite a senha secreta (Tentativa %d de 3): ", tentativas + 1);
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA_CORRETA) {
            acesso_concedido = 1;
            break;
        } else {
            printf("Senha incorreta!\n\n");
            tentativas++;
        }
    }

    if (acesso_concedido) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}

// 15
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int numero = 1;

    printf("Digite o numero de linhas (N) do Triangulo de Floyd: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}

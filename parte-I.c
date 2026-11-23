 *
 * PARTE I
#include <stdio.h>

/* 1. PROTOTIPO:
   Declara antes da main() o nome da funcao, o tipo de retorno (float)
   e o tipo do parametro (float). Permite ao compilador validar chamadas
   feitas antes da definicao completa. */
float celsius(float);

int main(void) {
    float c, f = 100.0f;

    /* 2. CHAMADA:
       Invoca celsius() passando o valor de f e atribui o retorno a c. */
    c = celsius(f);
    printf("Celsius = %.2f\n", c);

    return 0;
}

/* 3. DEFINICAO:
   Implementa o corpo e a logica da funcao apos a main(). */
float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}

/* Respostas (b) e (c):
   (b) O prototipo informa ao compilador a assinatura da funcao durante a
       leitura de cima para baixo, permitindo checar quantidade e tipos de
       argumentos e compatibilidade de retorno. Sem prototipo e com a
       definicao depois da main(), o compilador nao conhece a assinatura na
       chamada: em padroes antigos (C89) assume retorno int e sem checagem
       rigorosa (podendo gerar erro ou comportamento indefinido ao ver o
       retorno float depois), e em padroes modernos emite aviso/erro de
       declaracao implicita.
   (c) O tipo de celsius() e float. O tipo de uma funcao e definido pelo
       valor que ela retorna (e nao pelos parametros) porque a chamada atua
       numa expressao como o resultado devolvido; o compilador precisa saber
       o tipo desse resultado para validar atribuicoes e operacoes seguintes,
       independentemente do tipo das entradas. */
```[cite: 1]

---

### Questão 02. O Comando `return` e suas Limitações

```c
#include <stdio.h>

int calcular_media(int a, int b, int c);
int calcular_soma(int a, int b, int c);
void imprime_mensagem(int erro);

int main(void) {
    int x = 6, y = 9, z = 12;

    printf("Soma: %d\n", calcular_soma(x, y, z));
    printf("Media: %d\n", calcular_media(x, y, z));

    imprime_mensagem(-1);
    imprime_mensagem(5);

    return 0;
}

/* (c) Funcao separada que retorna apenas a soma */
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}

/* (c) Funcao separada que retorna apenas a media */
int calcular_media(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}

/* (b) Em void, 'return;' encerra imediatamente a funcao quando erro < 0,
       impedindo o printf seguinte. Nao e obrigatorio no fim de uma funcao
       void, pois ela encerra naturalmente ao chegar na chave '}'. */
void imprime_mensagem(int erro) {
    if (erro < 0) {
        printf("Erro invalido\n");
        return;
    }
    printf("Codigo processado: %d\n", erro);
}

/* Respostas (a) e (c):
   (a) Uma funcao em C pode devolver apenas 1 valor (ou nenhum em void)
       pelo comando return. Em calcular(), 'return soma, media;' usa o
       operador virgula: avalia 'soma', descarta esse valor e devolve
       apenas o da direita ('media').
   (c) Como o return devolve um unico valor por vez, precisamos de duas
       funcoes separadas (sem usar ponteiros ou structs) para devolver
       cada resultado independentemente. */
```[cite: 2]

---

### Questão 03. Funções `void`, Parâmetros e Assinaturas

```c
#include <stdio.h>

void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);

int main(void) {
    int codigo;

    exibe_mensagem("Iniciando sistema...");
    codigo = obter_codigo();
    printf("Codigo lido: %d\n", codigo);
    limpar_tela();

    /* (c) A chamada:
       x = limpar_tela();
       e INVALIDA e gera erro de compilacao, pois limpar_tela() tem retorno
       void (nao devolve valor algum para atribuir a x). */

    return 0;
}

void exibe_mensagem(char* msg) {
    printf("%s\n", msg);
}

int obter_codigo(void) {
    return 42;
}

void limpar_tela(void) {
    printf("[Tela limpa]\n");
}

/* Resposta (a) e (b):
   (a) - void exibe_mensagem(char* msg): 1 parametro (char* msg), sem retorno (void).
       - int obter_codigo(void): sem parametros (void), com retorno int.
       - void limpar_tela(void): sem parametros (void), sem retorno (void).
   (b) Funcao com retorno produz e devolve um valor para uso posterior
       (ex.: obter_codigo(void) para retornar um codigo a ser validado).
       Procedimento (void) executa uma acao/efeito sem devolver valor
       (ex.: limpar_tela(void) ou exibe_mensagem(char* msg)). */
```[cite: 2]

---

### Questão 04. Recursão: Caso Base, Passo Recursivo e Pilha de Execução

```c
#include <stdio.h>

long fatorial(int n);

int main(void) {
    printf("fatorial(4) = %ld\n", fatorial(4));
    return 0;
}

long fatorial(int n) {
    /* Caso base: (n == 0) ? (long)1
       Passo recursivo: (long)n * fatorial(n - 1)
       Se o caso base fosse removido, a recursao nao teria parada
       (n continuaria diminuindo indefinidamente). */
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}

/* Rastreamento de fatorial(4) - (b) e (c):
   Empilhamento (ida):
   - fatorial(4) aguarda 4 * fatorial(3)
   - fatorial(3) aguarda 3 * fatorial(2)
   - fatorial(2) aguarda 2 * fatorial(1)
   - fatorial(1) aguarda 1 * fatorial(0)
   - fatorial(0) atinge o caso base e devolve 1

   Desempilhamento (volta):
   - fatorial(1) calcula 1 * 1 e devolve 1
   - fatorial(2) calcula 2 * 1 e devolve 2
   - fatorial(3) calcula 3 * 2 e devolve 6
   - fatorial(4) calcula 4 * 6 e devolve 24

   (c) Cada chamada cria um frame na pilha de execucao (parametros,
       variaveis locais e endereco de retorno). Como a pilha tem limite de
       memoria, recursao sem caso base empilha frames ate esgotar a pilha,
       causando estouro de pilha (stack overflow) e falha do programa. */
```[cite: 3]

---

### Questão 05. Diretiva `#define`, Constantes e Macros com Argumentos

```c
#include <stdio.h>

#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2

/* (c) Forma correta (sem espaco entre PRN e '('): */
#define PRN(n) printf("%d\n", n)

int main(void) {
    /* (a) SQR(2+3) -> ((2+3)*(2+3)) -> 5 * 5 = 25
           DOBRO(2+3) -> 2+3*2 -> 2 + 6 = 8 (precedencia de * sobre +).
           Parenteses de protecao evitam que operadores externos/internos
           alterem a ordem esperada na expansao textual. */
    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));

    PRN(25);
    PRN(8);

    return 0;
}

/* Respostas (b) e (c):
   (b) #define faz substituicao literal antes da compilacao; colocar ';'
       colaria o ponto e virgula no meio de expressoes e causaria erro de
       sintaxe. Maiusculas sao convencao para identificar macros/constantes
       e lembrar que ha expansao textual.
   (c) '#define PRN (n) printf("%d", n)' tem espaco apos PRN, fazendo o
       preprocessador tratar PRN como macro sem argumentos cujo corpo comeca
       em '(n) printf("%d", n)'. Macro faz substituicao textual no
       pre-processamento sem checagem de tipos; funcao e compilada com
       verificacao de tipos e chamada formal em execucao. */
```[cite: 3]

---

### Questão 06. Diretivas `#include`, `#undef` e Compilação Condicional

```c
#include <stdio.h>
/* Exemplo de inclusao de cabecalho local (descomente se existir areas.h):
#include "areas.h" */

#define SOMA(x,y) ((x)+(y))
#undef SOMA

int main(void) {
#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    printf("Modo normal\n");
#endif
    return 0;
}

/* Respostas (a), (b) e (c):
   (a) <stdio.h> busca nos diretorios padrao do sistema/compilador;
       "areas.h" busca primeiro na pasta local do projeto e depois nos
       diretorios padrao.
   (b) #undef SOMA remove a definicao da macro SOMA dali em diante.
       #undef SOMA(x,y) e incorreto porque #undef so aceita o nome da
       macro, sem lista de parametros.
   (c) Se DEBUG nao estiver definido, imprime "Modo normal". A decisao
       ocorre no pre-processamento (antes da compilacao), e as diretivas
       nao aparecem no executavel final porque o pre-processador ja
       selecionou e deixou apenas o codigo resultante para o compilador. */
```[cite: 3, 4]

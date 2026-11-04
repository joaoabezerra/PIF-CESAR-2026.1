// --- PARTE II: CÓDIGOS DAS QUESTÕES ---

// Questão 07: Raiz Quadrada ou Quadrado de um Número Real
void questao07() {
    float num;
    printf("\n--- Questão 07 ---\n");
    printf("Digite um número real: ");
    scanf("%f", &num);
    if (num >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(num));
    } else {
        printf("Quadrado do número: %.2f\n", num * num);
    }
}

// Questão 08: Verificação de Ano Bissexto
void questao08() {
    int ano;
    printf("\n--- Questão 08 ---\n");
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano);
    }
}

// Questão 09: Cálculo de Média Ponderada e Situação Acadêmica
void questao09() {
    float n1, n2, n3, media;
    printf("\n--- Questão 09 ---\n");
    printf("Digite as notas do Lab, Semestral e Exame Final: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
    printf("Média Ponderada: %.2f\n", media);
    if (media >= 5.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}

// Questão 10: Análise de Paridade e Sinal de Inteiros
void questao10() {
    int num;
    printf("\n--- Questão 10 ---\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Paridade: %s\n", (num % 2 == 0) ? "PAR" : "ÍMPAR");
    if (num > 0) printf("Sinal: POSITIVO\n");
    else if (num < 0) printf("Sinal: NEGATIVO\n");
    else printf("Sinal: ZERO\n");
}

// Questão 11: Ordenação Crescente de Três Valores Numéricos
void questao11() {
    int a, b, c, temp;
    printf("\n--- Questão 11 ---\n");
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    
    printf("Ordem crescente: %d, %d, %d\n", a, b, c);
}

// Questão 12: Dia da Semana com Comando switch-case
void questao12() {
    int dia;
    printf("\n--- Questão 12 ---\n");
    printf("Digite o dia da semana (1-7): ");
    scanf("%d", &dia);
    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terça-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sábado\n"); break;
        default: printf("Erro: Opção Inválida!\n");
    }
}

// Questão 13: Calculadora Aritmética e Científica com Menu switch
void questao13() {
    char op;
    float n1, n2;
    printf("\n--- Questão 13 ---\n");
    printf("Escolha a operação (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2);
    
    switch (op) {
        case '+': printf("Resultado: %.2f\n", n1 + n2); break;
        case '-': printf("Resultado: %.2f\n", n1 - n2); break;
        case '*': printf("Resultado: %.2f\n", n1 * n2); break;
        case '/': 
            if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
            else printf("Erro: Divisão por zero!\n");
            break;
        case '^': printf("Resultado: %.2f\n", pow(n1, n2)); break;
        default: printf("Operação inválida!\n");
    }
}

// Questão 14: Matriz de Classificação de Conceito por Nota e Faltas
void questao14() {
    float nota;
    int faltas;
    printf("\n--- Questão 14 ---\n");
    printf("Digite a nota e o número de faltas: ");
    scanf("%f %d", &nota, &faltas);
    
    if (nota >= 9.0 && nota <= 10.0) printf("Conceito: %s\n", faltas <= 20 ? "A" : "B");
    else if (nota >= 7.5) printf("Conceito: %s\n", faltas <= 20 ? "B" : "C");
    else if (nota >= 5.0) printf("Conceito: %s\n", faltas <= 20 ? "C" : "D");
    else if (nota >= 4.0) printf("Conceito: %s\n", faltas <= 20 ? "D" : "E");
    else printf("Conceito: E\n");
}

// Questão 15: Verificação de Elegibilidade para Aposentadoria
void questao15() {
    int idade, tempo;
    printf("\n--- Questão 15 ---\n");
    printf("Digite a idade e o tempo de serviço (em anos): ");
    scanf("%d %d", &idade, &tempo);
    
    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("Pode se aposentar!\n");
    } else {
        printf("Não pode se aposentar.\n");
    }
}

// Questão 16: Classificação de Eficiência de Consumo de Combustível
void questao16() {
    float dist, litros, consumo;
    printf("\n--- Questão 16 ---\n");
    printf("Digite a distância (km) e os litros consumidos: ");
    scanf("%f %f", &dist, &litros);
    consumo = dist / litros;
    printf("Consumo: %.2f km/l - ", consumo);
    if (consumo < 8.0) printf("Venda o carro!\n");
    else if (consumo <= 14.0) printf("Econômico!\n");
    else printf("Super econômico!\n");
}

// Questão 17: Cálculo de Pagamento e Comissão de Vendas
void questao17() {
    float total, comissao;
    int op;
    printf("\n--- Questão 17 ---\n");
    printf("Digite o valor total da compra: ");
    scanf("%f", &total);
    printf("Opção (1 = À Vista - 10%% desc, 2 = Parcelado 3x): ");
    scanf("%d", &op);
    
    if (op == 1) {
        float final_val = total * 0.90;
        comissao = final_val * 0.05;
        printf("Valor com desconto: R$ %.2f | Comissão: R$ %.2f\n", final_val, comissao);
    } else if (op == 2) {
        float parcela = total / 3.0;
        comissao = total * 0.05;
        printf("3x de R$ %.2f | Comissão: R$ %.2f\n", parcela, comissao);
    }
}

// Questão 18: Conversor Multidirecional de Escalas Termométricas
void questao18() {
    int op;
    float temp, res;
    printf("\n--- Questão 18 ---\n");
    printf("1. C -> F | 2. C -> K | 3. F -> C | 4. K -> C: ");
    scanf("%d", &op);
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    
    switch (op) {
        case 1: res = temp * 1.8 + 32; printf("Resultado: %.2f °F\n", res); break;
        case 2: res = temp + 273.15; printf("Resultado: %.2f K\n", res); break;
        case 3: res = (temp - 32) / 1.8; printf("Resultado: %.2f °C\n", res); break;
        case 4: res = temp - 273.15; printf("Resultado: %.2f °C\n", res); break;
        default: printf("Opção inválida!\n");
    }
}

// Questão 19: Validação de Condição de Existência e Tipo de Triângulo
void questao19() {
    float a, b, c;
    printf("\n--- Questão 19 ---\n");
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) printf("Triângulo Equilátero\n");
        else if (a == b || b == c || a == c) printf("Triângulo Isósceles\n");
        else printf("Triângulo Escaleno\n");
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }
}

// Questão 20: Resolução da Equação do Segundo Grau (Bhaskara)
void questao20() {
    float a, b, c, delta, x1, x2;
    printf("\n--- Questão 20 ---\n");
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) { printf("Não é uma equação de 2º grau.\n"); return; }
    
    delta = b*b - 4*a*c;
    if (delta < 0) printf("A equação não possui raízes reais.\n");
    else if (delta == 0) printf("Raiz única x = %.2f\n", -b / (2*a));
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Raízes: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
}

// Questão 21: Cálculo de Reajuste Salarial com Base em Categorias
void questao21() {
    float sal, aumento, novo_sal;
    int cod;
    printf("\n--- Questão 21 ---\n");
    printf("Digite o salário atual e o código do cargo (1=Técnico, 2=Gerente, 3=Demais): ");
    scanf("%f %d", &sal, &cod);
    
    switch (cod) {
        case 1: aumento = (sal <= 3000) ? sal * 0.15 : sal * 0.10; break;
        case 2: aumento = (sal <= 5000) ? sal * 0.10 : sal * 0.05; break;
        case 3: aumento = sal * 0.08; break;
        default: printf("Código inválido!\n"); return;
    }
    novo_sal = sal + aumento;
    printf("Aumento: R$ %.2f | Novo Salário: R$ %.2f\n", aumento, novo_sal);
}

// Questão 22: Cálculo de Impostos Estaduais sobre Produtos
void questao22() {
    float valor, imposto;
    int est;
    printf("\n--- Questão 22 ---\n");
    printf("Digite o valor do produto e o estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%f %d", &valor, &est);
    
    switch (est) {
        case 1: imposto = 0.07; break;
        case 2: imposto = 0.12; break;
        case 3: imposto = 0.15; break;
        case 4: imposto = 0.08; break;
        default: printf("Erro: Estado inválido!\n"); return;
    }
    printf("Preço final acrescido de imposto: R$ %.2f\n", valor * (1 + imposto));
}

// Questão 23: Impressão de Data Por Extenso com switch-case
void questao23() {
    int dia, mes, ano;
    printf("\n--- Questão 23 ---\n");
    printf("Digite a data (Dia Mês Ano, ex: 25 12 2026): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    if (mes < 1 || mes > 12) { printf("Mês inválido!\n"); return; }
    
    printf("%02d de ", dia);
    switch (mes) {
        case 1: printf("janeiro"); break;
        case 2: printf("fevereiro"); break;
        case 3: printf("março"); break;
        case 4: printf("abril"); break;
        case 5: printf("maio"); break;
        case 6: printf("junho"); break;
        case 7: printf("julho"); break;
        case 8: printf("agosto"); break;
        case 9: printf("setembro"); break;
        case 10: printf("outubro"); break;
        case 11: printf("novembro"); break;
        case 12: printf("dezembro"); break;
    }
    printf(" de %d\n", ano);
}

// Questão 24: Classificação de Triângulos quanto aos Ângulos Internos
void questao24() {
    int a1, a2, a3;
    printf("\n--- Questão 24 ---\n");
    printf("Digite os três ângulos internos: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    
    if (a1 + a2 + a3 == 180) {
        if (a1 == 90 || a2 == 90 || a3 == 90) printf("Triângulo Retângulo\n");
        else if (a1 > 90 || a2 > 90 || a3 > 90) printf("Triângulo Obtusângulo\n");
        else printf("Triângulo Acutângulo\n");
    } else {
        printf("Soma dos ângulos inválida para um triângulo.\n");
    }
}

// Questão 25: Decomposição de Troco na Menor Quantidade de Cédulas
void questao25() {
    int total, pago, troco;
    printf("\n--- Questão 25 ---\n");
    printf("Digite o valor total e o valor entregue: ");
    scanf("%d %d", &total, &pago);
    if (pago < total) { printf("Erro: Valor entregue insuficiente!\n"); return; }
    
    troco = pago - total;
    printf("Troco total: R$ %d\n", troco);
    
    printf("Cédulas de R$ 100: %d\n", troco / 100); troco %= 100;
    printf("Cédulas de R$ 50:  %d\n", troco / 50);  troco %= 50;
    printf("Cédulas de R$ 20:  %d\n", troco / 20);  troco %= 20;
    printf("Cédulas de R$ 10:  %d\n", troco / 10);  troco %= 10;
    printf("Cédulas de R$ 5:   %d\n", troco / 5);   troco %= 5;
    printf("Cédulas de R$ 2:   %d\n", troco / 2);   troco %= 2;
}

// Questão 26: Quantidade de Dias de um Mês e Validação de Fevereiro
void questao26() {
    int mes, ano, bissexto;
    printf("\n--- Questão 26 ---\n");
    printf("Digite o mês (1-12) e o ano: ");
    scanf("%d %d", &mes, &ano);
    
    bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
    switch (mes) {
        case 2: printf("Fevereiro: %s\n", bissexto ? "29 dias" : "28 dias"); break;
        case 4: case 6: case 9: case 11: printf("30 dias\n"); break;
        default: printf("31 dias\n");
    }
}

// Questão 27: Tarifador de Estacionamento com Faixas Progressivas
void questao27() {
    int horas;
    float total = 0;
    printf("\n--- Questão 27 ---\n");
    printf("Digite o número de horas no estacionamento: ");
    scanf("%d", &horas);
    
    if (horas <= 2) total = horas * 2.0;
    else if (horas <= 4) total = 2 * 2.0 + (horas - 2) * 2.5;
    else total = 2 * 2.0 + 2 * 2.5 + (horas - 4) * 3.0;
    
    printf("Tempo total: %d hrs | Valor cobrado: R$ %.2f\n", horas, total);
}

// Questão 28: Sistema de Atendimento Automático Bancário (SAC)
void questao28() {
    int op;
    printf("\n--- Questão 28 ---\n");
    printf("1- Consultar Saldo | 2- Efetuar Extrato | 3- Transferência | 4- Atendente: ");
    scanf("%d", &op);
    
    switch (op) {
        case 1: printf("Direcionando para Consulta de Saldo...\n"); break;
        case 2: printf("Direcionando para Emissão de Extrato...\n"); break;
        case 3: printf("Direcionando para Transferências...\n"); break;
        case 4: printf("Aguarde, conectando ao atendente...\n"); break;
        default: printf("Opção inválida! Tente novamente.\n");
    }
}

int main() {
    // Descomente a função da questão que deseja testar:
    // questao07();
    // questao08();
    // questao09();
    // questao10();
    // questao11();
    // questao12();
    // questao13();
    // questao14();
    // questao15();
    // questao16();
    // questao17();
    // questao18();
    // questao19();
    // questao20();
    // questao21();
    // questao22();
    // questao23();
    // questao24();
    // questao25();
    // questao26();
    // questao27();
    // questao28();
    
    printf("Código carregado com sucesso!\n");
    return 0;
}

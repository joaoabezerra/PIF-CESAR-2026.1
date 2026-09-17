// 5
a) i < j + 3 => Resultado: 1
b) 2 * i - 7 <= j - 8 => Resultado: 0
c) -x + y >= 2.0 * y => Resultado: 0
d) x == y => Resultado: 0
e) !(n - j) => Resultado: 1
f) !n - j => Resultado: -2
g) i && j && k => Resultado: 1
h) i || j - 3 && k => Resultado: 1
i) i < j && 2 >= k => Resultado: 0
j) i == 2 || j == 4 || k == 5 => Resultado: 0
// 6
// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);
// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);
// (A) trecho A: n = 6, x = 6
// trecho B: m = 6, y = 5

// (B) modificar e ler a mesma variável múltiplas vezes na mesma sequência de avaliação gera um Undefined Behavior no padrão C. a ordem de avaliação dos argumentos passados em uma chamada de função não é garantida pelo compilador (pode ser da direita para a esquerda ou vice-versa). 

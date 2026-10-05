// 01
// (C)

// 02
#include <stdio.h>
#include <stdlib.h>; // erro 01
int Main() // erro 02
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade); // erro 03
cout << endl; // erro 04
system("PAUSE");
return 0;
}

// 03
// a += b + c;
// a = a + (b + c) => 2 + (4 + 5) = 11

// b *= c = d - 2;
// c = d - 2 => c = 10 - 2 = 8
// b = b * c => b = 4 * 8 = 32

// a += b += c += 5; (usando a = 11, b = 32, c = 8)
// c += 5 => c = 8 + 5 = 13
// b += c => b = 32 + 13 = 45
// a += b => a = 11 + 45 = 56

// d %= a + 3 (usando d = 10, a = 56)
// d = d % (a + 3) => 10 % (56 + 3) = 10 % 59 = 10

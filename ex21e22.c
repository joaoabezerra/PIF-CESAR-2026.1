// 21

#include <stdio.h>
int main(void) {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    printf("Caractere: '%c' | Codigo ASCII: %d\n", ch, ch);
    system("pause");
    return 0;
}

// 22
#include <stdio.h>
int main(void) {
    char maiuscula, minuscula;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);
    minuscula = maiuscula + ('a' - 'A');
    printf("Letra minuscula: %c\n", minuscula);
    system("pause");
    return 0;
}

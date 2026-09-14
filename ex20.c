#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xBB);
    printf("%c  %c\n", 0xBA, 0xBA);
    printf("%c  %c\n", 0xBA, 0xBA);
    printf("%c%c%c%c\n", 0xC8, 0xCD, 0xCD, 0xBC);
    system("pause");
    return 0;
}
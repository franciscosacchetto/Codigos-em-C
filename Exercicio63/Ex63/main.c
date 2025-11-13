#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    while (texto[i] != '\0') {
        i++;
    }

    if (texto[i - 1] == '\n') {
        i--;
    }

    printf("A string possui %d caracteres.\n", i);

    return 0;
}

#include <stdio.h>

int main() {
    char texto[100];
    int i = 0, cont = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    while (texto[i] != '\0') {
        char c = texto[i];

        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            cont++;
        }

        i++;
    }

    printf("A string possui %d vogais.\n", cont);

    return 0;
}

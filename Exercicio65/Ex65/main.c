#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    while (texto[i] != '\0') {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32;
        }
        i++;
    }

    printf("String em maiusculas: %s", texto);

    return 0;
}

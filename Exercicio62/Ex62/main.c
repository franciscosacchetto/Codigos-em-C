#include <stdio.h>

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    printf("Voce digitou: %s", texto);

    return 0;
}

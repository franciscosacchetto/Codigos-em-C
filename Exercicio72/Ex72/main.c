#include <stdio.h>

int main() {
    char texto[200];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    FILE *arq = fopen("texto.txt", "w");
    if (arq == NULL) return 1;

    fputs(texto, arq);
    fclose(arq);

    return 0;
}

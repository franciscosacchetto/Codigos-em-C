#include <stdio.h>

int main() {
    char linha[200];
    FILE *arq = fopen("texto.txt", "r");
    if (arq == NULL) return 1;

    while (fgets(linha, sizeof(linha), arq)) {
        printf("%s", linha);
    }

    fclose(arq);
    return 0;
}

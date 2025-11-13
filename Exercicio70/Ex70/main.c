#include <stdio.h>

int contaPalavras(char str[]) {
    int i = 0, palavras = 0, dentroPalavra = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (!dentroPalavra) {
                palavras++;
                dentroPalavra = 1;
            }
        } else {
            dentroPalavra = 0;
        }
        i++;
    }
    return palavras;
}

int main() {
    char texto[200];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    printf("A string possui %d palavras.\n", contaPalavras(texto));

    return 0;
}

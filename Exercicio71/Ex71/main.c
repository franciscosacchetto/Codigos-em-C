#include <stdio.h>

int ehPalindromo(char str[]) {
    int i = 0, j = 0;
    while (str[j] != '\0') j++;
    j--;
    if (str[j] == '\n') j--;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    if (ehPalindromo(texto))
        printf("A string e um palindromo.\n");
    else
        printf("A string nao e um palindromo.\n");

    return 0;
}

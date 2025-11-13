#include <stdio.h>

void inverteString(char str[]) {
    int i = 0, j = 0;
    char temp;
    while (str[j] != '\0') j++;
    j--;
    if (str[j] == '\n') j--;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    inverteString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}

#include <stdio.h>

void copiaString(char origem[], char destino[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    copiaString(str1, str2);

    printf("String copiada: %s", str2);

    return 0;
}

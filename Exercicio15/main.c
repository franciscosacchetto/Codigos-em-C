#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char titulo[50];
    char autor[40];
    int anodePublicacao;
} Livro;

int main()
{
    Livro livro1;
    printf("📚 Digite o título do livro:\n");
    scanf("%s", livro1.titulo);
    printf("✍️ Digite o autor do livro:\n");
    scanf("%s", livro1.autor);
    printf("📅 Digite o ano do livro:\n");
    scanf("%d", &livro1.anodePublicacao);
    printf("📖 O título do livro é %s do autor %s, publicado em %d\n", livro1.titulo, livro1.autor, livro1.anodePublicacao);
    return 0;
}

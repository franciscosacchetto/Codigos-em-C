#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int matricula;
    int notas[3];
    float media;
} aluno;

int main()
{
    aluno aluno1;
    aluno1.media = 0;
    printf("📝 Digite o nome do aluno:\n");
    scanf("%s", aluno1.nome);
    printf("🎓 Digite a matrícula do aluno:\n");
    scanf("%d", &aluno1.matricula);
    for(int i = 0; i < 3; i++)
    {
        printf("📝 Digite a nota %d do aluno:\n", i + 1);
        scanf("%d", &aluno1.notas[i]);
    }

    for(int h = 0; h < 3; h++)
    {
        aluno1.media = (aluno1.media + aluno1.notas[h]);
    }
    aluno1.media /= 3;
    printf("📊 A média das notas foi %.2f\n", aluno1.media);
    return 0;
}

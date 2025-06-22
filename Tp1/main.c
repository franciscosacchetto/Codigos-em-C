#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    int escolha;
    printf("Bem-vindo ao jogo da adivinhação!\n");
    printf("Escolha a dificuldade:\n");
    printf("1 - Modo fácil (1 a 10) - 6 tentativas\n");
    printf("2 - Modo médio (1 a 50) - 5 tentativas\n");
    printf("3 - Modo difícil (1 a 100) - 4 tentativas\n");
    printf("4 - Modo manual - escolha os números limite da adivinhação e as tentativas\n");
    printf("Digite o número correspondente à dificuldade desejada:\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Você selecionou o modo fácil.\n");
        int chuteA;
        srand(time(NULL));
        int numeroAleatorioA = rand();
        int numeroAleatorioAte10 = rand() % 10;
        printf("Tente adivinhar o número aleatório entre 1 e 10.\n");
        printf("Você tem 6 tentativas.\n");
        for (int tentativas = 0; tentativas < 6; tentativas++)
        {
            printf("Digite seu chute:\n");
            scanf("%d", &chuteA);
            if (chuteA == numeroAleatorioAte10)
            {
                printf("Parabéns, você acertou!\n");
                return 0;
            }
            else
            {
                if (numeroAleatorioAte10 < chuteA)
                {
                    printf("O número secreto é menor!\n");
                }
                else
                {
                    printf("O número secreto é maior!\n");
                }
            }
        }
        break;

    case 2:
        printf("Você selecionou o modo médio.\n");
        int chuteB;
        srand(time(NULL));
        int numeroAleatorioB = rand();
        int numeroAleatorioAte50 = rand() % 50;
        printf("Tente adivinhar o número aleatório entre 1 e 50.\n");
        printf("Você tem 5 tentativas.\n");
        for (int tentativas = 0; tentativas < 5; tentativas++)
        {
            printf("Digite seu chute:\n");
            scanf("%d", &chuteB);
            if (chuteB == numeroAleatorioAte50)
            {
                printf("Parabéns, você acertou!\n");
                return 0;
            }
            else
            {
                if (numeroAleatorioAte50 < chuteB)
                {
                    printf("O número secreto é menor!\n");
                }
                else
                {
                    printf("O número secreto é maior!\n");
                }
            }
        }
        break;

    case 3:
        printf("Você selecionou o modo difícil.\n");
        int chuteC;
        srand(time(NULL));
        int numeroAleatorioC = rand();
        int numeroAleatorioAte100 = rand() % 100;
        printf("Tente adivinhar o número aleatório entre 1 e 100.\n");
        printf("Você tem 4 tentativas.\n");
        for (int tentativas = 0; tentativas < 4; tentativas++)
        {
            printf("Digite seu chute:\n");
            scanf("%d", &chuteC);
            if (chuteC == numeroAleatorioAte100)
            {
                printf("Parabéns, você acertou!\n");
                return 0;
            }
            else
            {
                if (numeroAleatorioAte100 < chuteC)
                {
                    printf("O número secreto é menor!\n");
                }
                else
                {
                    printf("O número secreto é maior!\n");
                }
            }
        }
        break;

    case 4:
        printf("Você selecionou o modo manual.\n");
        printf("Digite o número de tentativas: \n");
        printf("Digite o numero de inicio: \n");
        printf("Digite o numeor de final: \n");

        break;

    default:
        printf("Digite uma opção válida.\n");
    }

    return 0;
}

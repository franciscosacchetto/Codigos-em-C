#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"");

    int opcao;
    printf("Bem-vindo\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("O que você deseja?\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        int escolha = 1, pontuacaofinal = 0, pontuacaoMAX = 100, contador = 1, soma = 0;
            do{
            printf("Bem-vindo ao jogo de Adivinhação!\n");
            printf("1. Fácil\n");
            printf("2. Médio\n");
            printf("3. Difícil\n");
            int dificuldade;
            printf("Escolha o nível de dificuldade\n");
            scanf("%d", &dificuldade);
            switch(dificuldade)
            {
                case 1:
                    {
                    int chute, numerosecretoate10, pontuacao = 100;
                    printf("Você selecionou o Modo Fácil\n");
                    printf("Bem-vindo ao jogo de Adivinhação Modo Fácil!\n");
                    printf("Você irá começar com 100 pontos, a cada erro sua pontuação cai em 10 pontos\n");
                    printf("Número entre 1 e 10, 5 tentativas\n");
                    srand(time(NULL));
                    numerosecretoate10 = (rand() % 10) + 1;
                    for(int tentativas = 1; tentativas < 6; tentativas++)
                    {
                        printf("Tentativa %d\n", tentativas);
                        printf("Digite seu chute: \n");
                        scanf("%d", &chute);
                        if(chute == numerosecretoate10)
                        {
                            printf("Parabéns! Você acertou!\n");
                            if(tentativas <= 2)
                            {
                                printf("Excelente! Você é muito bom nisso!\n");
                            }
                            else
                            {
                                printf("Boa! Mas tente melhorar!\n");
                            }
                            break;
                        }
                        else
                        {
                            if(chute < numerosecretoate10)
                            {
                                printf("O número secreto é maior.\n");
                            }
                            else
                            {
                                printf("O número secreto é menor.\n");
                            }
                            pontuacao = pontuacao - 10;
                        }
                    }
                    soma = soma + pontuacao;
                    printf("Sua pontuação final é %d\n", pontuacao);
                    printf("Deseja jogar novamente (1) ou encerrar o jogo (0)?\n");
                    scanf("%d", &escolha);
                    if(escolha == 0){
                        break;
                    }
                    break;
                    }
                case 2:
                    {
                    int chute, numerosecretoate50, pontuacao = 100;
                    pontuacaoMAX = pontuacaoMAX + 100;
                    printf("Você selecionou o Modo Médio\n");
                    printf("Bem-vindo ao jogo de Adivinhação Modo Médio!\n");
                    printf("Você irá começar com 100 pontos, a cada erro sua pontuação cai em 10 pontos\n");
                    printf("Número entre 1 e 50, 7 tentativas\n");
                    srand(time(NULL));
                    numerosecretoate50 = (rand() % 50) + 1;
                    for(int tentativas = 1; tentativas < 8; tentativas++)
                    {
                        printf("Tentativa %d\n", tentativas);
                        printf("Digite seu chute: \n");
                        scanf("%d", &chute);
                        if(chute == numerosecretoate50)
                        {
                            printf("Parabéns! Você acertou!\n");
                             if(tentativas <= 3)
                            {
                                printf("Excelente! Você é muito bom nisso!\n");
                            }
                            else
                            {
                                printf("Boa! Mas tente melhorar!\n");
                            }
                            break;
                        }
                        else
                        {
                            if(chute < numerosecretoate50)
                            {
                                printf("O número secreto é maior.\n");
                            }
                            else
                            {
                                printf("O número secreto é menor.\n");
                            }
                            pontuacao = pontuacao - 10;
                        }
                    }
                    soma = soma + pontuacao;
                    printf("Sua pontuação final é %d\n", pontuacao);
                    printf("Deseja jogar novamente (1) ou encerrar o jogo (0)?\n");
                    scanf("%d", &escolha);
                    if(escolha == 0){
                        break;
                    }
                    break;
                    }
                case 3:
                    {
                    int chute, numerosecretoate100, pontuacao = 100;
                    pontuacaoMAX = pontuacaoMAX + 100;
                    printf("Você selecionou o Modo Difícil\n");
                    printf("Bem-vindo ao jogo de Adivinhação Modo Difícil!\n");
                    printf("Você irá começar com 100 pontos, a cada erro sua pontuação cai em 10 pontos\n");
                    printf("Número entre 1 e 100, 10 tentativas\n");
                    srand(time(NULL));
                    numerosecretoate100 = (rand() % 100) + 1;
                    for(int tentativas = 1; tentativas < 11; tentativas++)
                    {
                        printf("Tentativa %d\n", tentativas);
                        printf("Digite seu chute: \n");
                        scanf("%d", &chute);
                        if(chute == numerosecretoate100)
                        {
                            printf("Parabéns! Você acertou!\n");
                             if(tentativas <= 4)
                            {
                                printf("Excelente! Você é muito bom nisso!\n");
                            }
                            else
                            {
                                printf("Boa! Mas tente melhorar!\n");
                            }
                            break;
                        }
                        else
                        {
                            if(chute < numerosecretoate100)
                            {
                                printf("O número secreto é maior.\n");
                            }
                            else
                            {
                                printf("O número secreto é menor.\n");
                            }
                            pontuacao = pontuacao - 10;
                        }
                    }
                    soma = soma + pontuacao;
                    pontuacaoMAX = pontuacaoMAX + 100;
                    printf("Sua pontuação final é %d\n", pontuacao);
                    printf("Deseja jogar novamente (1) ou encerrar o jogo (0)?\n");
                    scanf("%d", &escolha);
                    if(escolha == 0){
                        break;
                    }
                    break;
                    }
                default:
                    {
                    printf("Escolha uma opção dentro do escopo\n");
                    break;
                    }
            }
            pontuacaofinal =  soma/contador;
            pontuacaoMAX = pontuacaoMAX /contador;
            contador++;
            }while(escolha == 1);
            printf("%d é sua pontuação final\n", pontuacaofinal);
            printf("%d é a pontuação máxima que poderia ser alcançada\n", pontuacaoMAX);

            if(pontuacaofinal >= 80)
            {
                printf("Excelente desempenho geral!\n");
            }
            else if(pontuacaofinal <=79 && pontuacaofinal >=50)
            {
                printf("Bom trabalho, mas pode melhorar!\n");
            }
            else
            {
                printf("Precisa treinar mais. Continue tentando!\n");
            }


    }
                else{
                    printf("Você selecionou sair\n");
                    printf("Saindo\n");
                }

    return 0;
}

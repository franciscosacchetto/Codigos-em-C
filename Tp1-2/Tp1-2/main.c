#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    int vitoriasFacil = 0, derrotasFacil = 0;
    int vitoriasMedio = 0, derrotasMedio = 0;
    int vitoriasDificil = 0, derrotasDificil = 0;

    int menu, dificuldade;

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Jogar\n");
        printf("2. Ver Estatísticas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                do {
                    printf("\n===== SELECIONE A DIFICULDADE =====\n");
                    printf("1. Fácil\n");
                    printf("2. Médio\n");
                    printf("3. Difícil\n");
                    printf("Escolha o nível de dificuldade: ");
                    scanf("%d", &dificuldade);

                    switch(dificuldade) {
                        case 1: {
                            int chute, numerosecretoate10, pontuacao = 50;
                            int venceu = 0;
                            printf("Você selecionou o Modo Fácil\n");
                            printf("Número entre 1 e 10, 5 tentativas\n");
                            numerosecretoate10 = (rand() % 10) + 1;
                            for(int tentativas = 1; tentativas < 6; tentativas++) {
                                printf("Tentativa %d\n", tentativas);
                                printf("Digite seu chute: \n");
                                scanf("%d", &chute);
                                if(chute == numerosecretoate10) {
                                    printf("Parabens! Você acertou!\n");
                                    if(tentativas <= 2) {
                                        printf("Excelente! Você é muito bom nisso!\n");
                                    } else {
                                        printf("Boa! Mas tente melhorar!\n");
                                    }
                                    venceu = 1;
                                    break;
                                } else {
                                    if(chute < numerosecretoate10) {
                                        printf("O número secreto é maior.\n");
                                    } else {
                                        printf("O número secreto é menor.\n");
                                    }
                                    pontuacao = pontuacao - 10;
                                }
                            }
                            if(venceu) {
                                vitoriasFacil++;
                            } else {
                                derrotasFacil++;
                                printf("Suas tentativas acabaram! O número era %d\n", numerosecretoate10);
                            }
                            printf("Sua pontuação final é %d\n", pontuacao);
                            break;
                        }
                        case 2: {
                            int chute, numerosecretoate50, pontuacao = 70;
                            int venceu = 0;
                            printf("Você selecionou o Modo Médio\n");
                            printf("Número entre 1 e 50, 7 tentativas\n");
                            numerosecretoate50 = (rand() % 50) + 1;
                            for(int tentativas = 1; tentativas < 8; tentativas++) {
                                printf("Tentativa %d\n", tentativas);
                                printf("Digite seu chute: \n");
                                scanf("%d", &chute);
                                if(chute == numerosecretoate50) {
                                    printf("Parabens! Você acertou!\n");
                                    if(tentativas <= 3) {
                                        printf("Excelente! Você é muito bom nisso!\n");
                                    } else {
                                        printf("Boa! Mas tente melhorar!\n");
                                    }
                                    venceu = 1;
                                    break;
                                } else {
                                    if(chute < numerosecretoate50) {
                                        printf("O número secreto é maior.\n");
                                    } else {
                                        printf("O número secreto é menor.\n");
                                    }
                                    pontuacao = pontuacao - 10;
                                }
                            }
                            if(venceu) {
                                vitoriasMedio++;
                            } else {
                                derrotasMedio++;
                                printf("Suas tentativas acabaram! O número era %d\n", numerosecretoate50);
                            }
                            printf("Sua pontuação final é %d\n", pontuacao);
                            break;
                        }
                        case 3: {
                            int chute, numerosecretoate100, pontuacao = 100;
                            int venceu = 0;
                            printf("Você selecionou o Modo Difícil\n");
                            printf("Número entre 1 e 100, 10 tentativas\n");
                            numerosecretoate100 = (rand() % 100) + 1;
                            for(int tentativas = 1; tentativas < 11; tentativas++) {
                                printf("Tentativa %d\n", tentativas);
                                printf("Digite seu chute: \n");
                                scanf("%d", &chute);
                                if(chute == numerosecretoate100) {
                                    printf("Parabens! Você acertou!\n");
                                    if(tentativas <= 4) {
                                        printf("Excelente! Você é muito bom nisso!\n");
                                    } else {
                                        printf("Boa! Mas tente melhorar!\n");
                                    }
                                    venceu = 1;
                                    break;
                                } else {
                                    if(chute < numerosecretoate100) {
                                        printf("O número secreto é maior.\n");
                                    } else {
                                        printf("O número secreto é menor.\n");
                                    }
                                    pontuacao = pontuacao - 10;
                                }
                            }
                            if(venceu) {
                                vitoriasDificil++;
                            } else {
                                derrotasDificil++;
                                printf("Suas tentativas acabaram! O número era %d\n", numerosecretoate100);
                            }
                            printf("Sua pontuação final é %d\n", pontuacao);
                            break;
                        }
                        default:
                            printf("Escolha a opção dentro do escopo\n");
                            break;
                    }

                    int opcaoPosJogo;
                    printf("\n1. Jogar novamente\n");
                    printf("2. Voltar ao menu principal\n");
                    printf("Escolha: ");
                    scanf("%d", &opcaoPosJogo);
                    if(opcaoPosJogo == 2) break;

                } while(1);
                break;

            case 2:
                printf("\n===== ESTATÍSTICAS =====\n");
                printf("Modo Fácil -> Vitórias: %d | Derrotas: %d\n", vitoriasFacil, derrotasFacil);
                printf("Modo Médio -> Vitórias: %d | Derrotas: %d\n", vitoriasMedio, derrotasMedio);
                printf("Modo Difícil -> Vitórias: %d | Derrotas: %d\n", vitoriasDificil, derrotasDificil);
                printf("=========================\n\n");
                break;

            case 3:
                printf("Saindo do jogo... Até logo!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while(menu != 3);

    return 0;
}

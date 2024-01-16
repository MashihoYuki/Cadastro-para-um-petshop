#include <stdio.h>
#include <string.h>
#include <locale.h>

#include <stdio.h>

int obterResposta(const char *pergunta) {
    int resposta;
    do {
        printf("%s (0-10): ", pergunta);
        scanf("%d", &resposta);
    } while (resposta < 0 || resposta > 10);
    return resposta;
}

int main() {
    int resposta1, resposta2, resposta3, resposta4, resposta5, resposta6, resposta7, resposta8;
    char resposta;

    setlocale(LC_ALL, "Portuguese");
    printf("Bem-vindo ao teste de humor e bem-estar! Responda as perguntas de 0 a 10.\n");
    printf("Deseja iniciar o teste? (S para Sim, qualquer outra tecla para sair): ");
    scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's') {
        do {
            resposta1 = obterResposta("1-você se alimentou bem no café da manhã?");
            resposta2 = obterResposta("2-você se sente disposto hoje?");
            resposta3 = obterResposta("3-o quão inclinado a ajudar alguém você está disposto hoje?");
            resposta4 = obterResposta("4-você considera que está produtivo hoje?");
            resposta5 = obterResposta("5-você dormiu bastante essa noite?");
            resposta6 = obterResposta("6-o quão seu sono foi tranquilo essa noite?");
            resposta7 = obterResposta("7-o quão confiante você se sente agora?");
            resposta8 = obterResposta("8-o quão grato você está no momento?");

            double media = (resposta1 + resposta2 + resposta3 + resposta4 + resposta5 + resposta6 + resposta7 + resposta8) /
                           8.0;

            double porcentagem = (media / 10.0) * 100.0;

            printf("A porcentagem do seu teste de 0 a 100 é: %.2lf%%\n", porcentagem);

            int humor = 0;

            if (porcentagem == 100) {
                humor = 1;
            } else if (porcentagem >= 90) {
                humor = 2;
            } else if (porcentagem >= 80) {
                humor = 3;
            } else if (porcentagem >= 70) {
                humor = 4;
            } else if (porcentagem >= 60) {
                humor = 5;
            } else if (porcentagem < 59) {
                humor = 6;
            }

            switch (humor) {
                case 1:
                    printf("Seu humor hoje está ótimo!\n");
                    break;
                case 2:
                    printf("Seu humor hoje está muito bom!\n");
                    break;
                case 3:
                    printf("Seu humor hoje está bom!\n");
                    break;
                case 4:
                    printf("Seu humor hoje está ok!\n");
                    break;
                case 5:
                    printf("Seu humor hoje está mais ou menos!\n");
                    break;
                case 6:
                    printf("Seu humor hoje está ruim!\n");
                    break;
                default:
                    printf("Não foi possível definir seu humor!\n");
            }

            // Opção para seguir para o próximo teste
            printf("Deseja seguir para o próximo teste? (S para Sim, qualquer outra tecla para sair): ");
            scanf(" %c", &resposta);

        } while (resposta == 'S' || resposta == 's');
    } else {
        printf("Até mais!\n");
    }

    return 0;
}






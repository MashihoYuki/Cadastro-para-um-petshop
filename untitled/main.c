#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wformat"

char nome[60], nomedoanimal[60];
float peso, horario;
int gato, cachorro, tipodoanimal,mes,ano,pagamento;
gato = 1;
cachorro = 2;

    void recibo(){
        if (tipodoanimal == 1){
            printf("---------recibo--------\n\n");
            printf("O tipo do animal e gato o valor do pagamento e: 55,00 reais\n");
        }
        else if (tipodoanimal == 2){
            printf("---------recibo--------\n\n");
            printf("O tipo do animal e cachorro o valor do pagamento e: 40,00 reais\n");
        }
        printf("O nome do tutor e: %s\n", nome);
        printf("O nome do animal e: %s\n", nomedoanimal);
        printf("O peso do animal e: %.2f\n", peso);
        printf("O mes e o ano do nascimento do animal e: %d/%d\n", mes, ano);
        printf("O horario do banho e tosa do animal e: %.2f\n", horario);
        if(pagamento == 4) {
            printf("A forma de pagamento e: credito");
        } else if(pagamento == 3){
            printf("A forma de pagamento e: debito");
        } else{
            printf("A forma de pagamento e: a vista");
        }
    }

    void cadastrar() {
        printf("\nDigite o nome do tutor: \n");
        scanf("%s", &nome);
        printf("Digite o nome do animal: \n");
        scanf("%s", &nomedoanimal);
        printf("Digite o tipo do animal 1 para gato ou 2 para cachorro: \n");
        scanf("%d", &tipodoanimal);
        if (tipodoanimal == 1 || tipodoanimal == 2) {
            printf("Esse animal se pode ser banhado de tosado, continue: \n");
        }
        else {
            printf("Fernando lembre-se que seu petshop só trabalha com 2 tipos de animais, verifique novamente\n");
            printf("Digite o tipo do animal 1 para gato ou 2 para cachorro: \n");
            scanf("%d", &tipodoanimal);
        }
        printf("Digite o peso do animal: \n");
        scanf("%f", &peso);
        printf("Digite o mes do nascimento do animal em formato numerico: \n");
        scanf("%d", &mes);
        scanf("%c");
        printf("Digite o ano do nascimento do animal em formato numerico: \n");
        scanf("%d", &ano);
        printf("Digite o horario do banho/tosa do animal: \n");
        scanf("%f", &horario);
        scanf("%c");
        printf("Digite a forma de pagamento no [3] cartao no debito [4] cartao no credito ou [5] a vista: \n");
        scanf("%d", &pagamento);
}
int main() {
    int escolha;

    printf("Bem-vindo ao programa de cadastro no petshop torres!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar\n");
        printf("2. recibo\n");
        printf("Qualquer outro numero finaliza o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cadastrar();
                break;
            case 2:
                recibo();
                break;
            case 3:
                printf("O programa será encerrado. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (escolha != 3);

    return 0;
}
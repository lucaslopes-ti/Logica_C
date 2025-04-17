#include <stdio.h>

int main() {
    int num;
    int valid;

    // Loop até a entrada ser válida
    while (1) {
        printf("Digite um número: ");
        valid = scanf("%d", &num);

        // Verifica se o scanf leu um número inteiro
        if (valid == 1) {
            break; // Sai do loop se for válido
        }

        printf("Entrada inválida. Por favor, digite um número inteiro.\n");

        // Limpa o buffer (remove caracteres inválidos)
        while(getchar() != '\n');
    }

    // Faz a contagem até o número digitado
    int i = 0;
    while (i <= num) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

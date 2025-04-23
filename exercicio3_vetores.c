// Preencher um vetor com 6 números e mostrá-los na tela

#include <stdio.h>

int main() {
    int numeros[6];

    for(int i = 0; i < 6; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Números digitados:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

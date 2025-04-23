// Preencher um vetor com os números 10 a 20, mostrar pares de trás pra frente e ímpares

#include <stdio.h>

int main() {
    int vetor[11];
    int i, valor = 10;

    for(i = 0; i < 11; i++) {
        vetor[i] = valor++;
    }

    printf("Pares de trás pra frente:\n");
    for(i = 10; i >= 0; i--) {
        if(vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\nÍmpares:\n");
    for(i = 0; i < 11; i++) {
        if(vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}

// Preencher um vetor com 5 números, calcular o cubo e mostrar os dois vetores

#include <stdio.h>
#include <math.h>

int main() {
    int numeros[5], cubos[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &numeros[i]);
        cubos[i] = numeros[i] * numeros[i] * numeros[i]; // ou pow(numeros[i], 3)
    }

    printf("Número\tCubo\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t%d\n", numeros[i], cubos[i]);
    }

    return 0;
}

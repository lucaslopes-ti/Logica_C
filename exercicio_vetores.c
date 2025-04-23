#include <stdio.h>

int main() {
    char nome[30];
    int contA = 0, contE = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Digite o nome %d: ", i);
        scanf("%s", nome);

        // Percorre cada letra do nome
        for (int j = 0; nome[j] != '\0'; j++) {
            char letra = nome[j];

            if (letra == 'A' || letra == 'a')
                contA++;
            if (letra == 'E' || letra == 'e')
                contE++;
        }
    }

    printf("Total de letras A: %d\n", contA);
    printf("Total de letras E: %d\n", contE);

    return 0;
}
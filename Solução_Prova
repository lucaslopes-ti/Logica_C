// Exercicio 8

#include <stdio.h>

int main() {
    int n1, n2, n3;
    int maior, menor;

    // Ler os três números
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    // Determinar o maior
    if (n1 >= n2 && n1 >= n3) {
        maior = n1;
    } else {
        if (n2 >= n1 && n2 >= n3) {
            maior = n2;
        } else {
            maior = n3;
        }
    }

    // Determinar o menor
    if (n1 <= n2 && n1 <= n3) {
        menor = n1;
    } else {
        if (n2 <= n1 && n2 <= n3) {
            menor = n2;
        } else {
            menor = n3;
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    // Verificar se existem números iguais ao maior
    if ((n1 == maior && n2 == maior) || (n1 == maior && n3 == maior) || (n2 == maior && n3 == maior)) {
        printf("Existem dois ou mais números iguais ao maior.\n");
    }

    // Verificar se existem números iguais ao menor
    if ((n1 == menor && n2 == menor) || (n1 == menor && n3 == menor) || (n2 == menor && n3 == menor)) {
        printf("Existem dois ou mais números iguais ao menor.\n");
    }

    return 0;
}


//Criar um programa que: Peça ao usuário 3 notas (float entre 0 e 10), Calcule a média, Mostre:
// Média >= 8 → "Aprovado com louvor"
// Média entre 6 e 7.99 → "Aprovado"
// Média entre 5 e 5.99 → "Recuperação"
// Média abaixo de 5 → "Reprovado"

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f\n", media);

    if (media >= 8) {
        printf("Aprovado com louvor\n");
    } else if (media >= 6) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}


// Exercicio 10

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9;
    float soma, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    printf("Digite a nota 5: ");
    scanf("%f", &n5);

    printf("Digite a nota 6: ");
    scanf("%f", &n6);

    printf("Digite a nota 7: ");
    scanf("%f", &n7);

    printf("Digite a nota 8: ");
    scanf("%f", &n8);

    printf("Digite a nota 9: ");
    scanf("%f", &n9);

    soma = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
    media = soma / 9;

    printf("\nMédia geral: %.2f\n", media);

    // Agora usando só if e else (sem else if)
    if (media >= 9) {
        printf("Conceito: Incrível\n");
    } else {
        if (media >= 7) {
            printf("Conceito: Muito Bom\n");
        } else {
            if (media >= 5) {
                printf("Conceito: Mediano\n");
            } else {
                printf("Conceito: Fraco\n");
            }
        }
    }

    return 0;
}

// Outra solução com For

#include <stdio.h>

int main() {
    float notas[9];
    float soma = 0, media;
    int i;

    printf("Digite as 9 notas dos jurados (0 a 10):\n");
    for (i = 0; i < 9; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 9;

    printf("\nMédia geral: %.2f\n", media);

    if (media >= 9) {
        printf("Conceito: Incrível\n");
    } else if (media >= 7) {
        printf("Conceito: Muito Bom\n");
    } else if (media >= 5) {
        printf("Conceito: Mediano\n");
    } else {
        printf("Conceito: Fraco\n");
    }

    return 0;
}

// Exercicio 9

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nMédia: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        if (media >= 5) {
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}


// Exercicio 10

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9;
    float soma, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    printf("Digite a nota 5: ");
    scanf("%f", &n5);

    printf("Digite a nota 6: ");
    scanf("%f", &n6);

    printf("Digite a nota 7: ");
    scanf("%f", &n7);

    printf("Digite a nota 8: ");
    scanf("%f", &n8);

    printf("Digite a nota 9: ");
    scanf("%f", &n9);

    soma = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
    media = soma / 9;

    printf("\nMédia geral: %.2f\n", media);

    if (media >= 9) {
        printf("Conceito: Excelente\n");
    } else {
        if (media >= 7) {
            printf("Conceito: Bom\n");
        } else {
            if (media >= 5) {
                printf("Conceito: Regular\n");
            } else {
                printf("Conceito: Reprovado\n");
            }
        }
    }

    return 0;
}






#include <stdio.h>

void diferenca(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Diferença de A - B = {");
    for (int i = 0; i < tamanhoA; i++) {
        int j;
        for (j = 0; j < tamanhoB && A[i] != B[j]; j++);
        if (j == tamanhoB)
            printf("%d%s", A[i], (i != tamanhoA - 1) ? ", " : "");
    }
    printf("}\n");
}

int main() {
    int tamanhoA, tamanhoB;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoA);

    int A[tamanhoA];
    printf("Digite os elementos do vetor A separados por espaço: ");
    for (int i = 0; i < tamanhoA; scanf("%d", &A[i++]));

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoB);

    int B[tamanhoB];
    printf("Digite os elementos do vetor B separados por espaço: ");
    for (int i = 0; i < tamanhoB; scanf("%d", &B[i++]));

    diferenca(A, tamanhoA, B, tamanhoB);

    return 0;
}
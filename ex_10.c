#include <stdio.h>

void uniao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("União de A e B = {");

    for (int i = 0; i < tamanhoA; i++) {
        printf("%d%s", A[i], (i != tamanhoA - 1) ? ", " : "");
    }

    for (int i = 0; i < tamanhoB; i++) {
        int presente = 0;
        for (int j = 0; j < tamanhoA; j++) {
            if (B[i] == A[j]) {
                presente = 1;
                break;
            }
        }
        if (!presente) {
            printf("%s%d", (tamanhoA > 0 ? ", " : ""), B[i]);
        }
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

    uniao(A, tamanhoA, B, tamanhoB);

    return 0;
}

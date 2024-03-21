#include <stdio.h>

void intersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("A ∩ B = {");
    
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d", A[i]);
                if (i != tamanhoA - 1 || j != tamanhoB - 1)
                    printf(", ");
            }
        }
    }
    
    printf("}\n");
}

int main() {
    int tamanhoA, tamanhoB;
    
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoA);
    
    printf("Digite os elementos do vetor A separados por espaco: ");
    int A[tamanhoA];
    for (int i = 0; i < tamanhoA; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoB);
    
    printf("Digite os elementos do vetor B separados por espaco: ");
    int B[tamanhoB];
    for (int i = 0; i < tamanhoB; i++) {
        scanf("%d", &B[i]);
    }

    intersecao(A, tamanhoA, B, tamanhoB);

    return 0;
}

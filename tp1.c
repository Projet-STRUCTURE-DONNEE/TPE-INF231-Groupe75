#include <stdio.h>

// Fonction pour calculer la somme des matrices
void somme_matrices(int A[10][10], int B[10][10], int n, int m) {
    int C[10][10], i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Affichage du résultat
    printf("Somme des matrices :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j, A[10][10], B[10][10], n, m;

    do {
        printf("Entrer le nombre de lignes : ");
        scanf("%d", &n);
        printf("Entrer le nombre de colonnes : ");
        scanf("%d", &m);

        if (n != m) {
            printf("Le nombre de lignes et de colonnes doit être égal (matrices carrées).\n");
        }
    } while (n <= 0 || m <= 0 || n != m);

    // Entrée des éléments de la matrice A
    printf("Entrez les éléments de la matrice A :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Entrée des éléments de la matrice B
    printf("Entrez les éléments de la matrice B :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Appel de la fonction
    somme_matrices(A, B, n, m);

    return 0;
}

#include <stdio.h>

// Fonction pour calculer le produit des matrices
void produit_matrices(int A[10][10], int B[10][10], int n)
 {
    int C[10][10], i, j, k;

    // Initialisation de la matrice C
    for (i = 1; i <=n; i++) {
        for (j = 1; j <= n; j++) {
            C[i][j] = 0;
            for (k = 1; k <= n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Affichage du résultat
    printf("Produit des matrices :\n");
    for (i =1; i <= n; i++) {
        for (j =1; j <= n; j++) {
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
            printf("Le nombre de lignes et de colonnes doit etre egal (matrices carrer).\n");
        }
    } while (n <= 0 || m <= 0 || n != m);

    // Entrée des éléments de la matrice A
    printf("Entrez les elements de la matrice A :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Entrée des éléments de la matrice B
    printf("Entrez les elements de la matrice B :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Appel de la fonction
    produit_matrices(A, B, n);

    return 0;
}

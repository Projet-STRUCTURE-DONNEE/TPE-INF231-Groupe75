#include <stdio.h>

// Fonction pour calculer le produit vectoriel
void produit_vectoriel(int u[3], int v[3], int r[3]) {
    r[0] = u[1]*v[2] - u[2]*v[1]; // x
    r[1] = u[2]*v[0] - u[0]*v[2]; // y
    r[2] = u[0]*v[1] - u[1]*v[0]; // z
}

int main() {
    int u[3], v[3], r[3];
    int i;

    // Saisie du vecteur u
    printf("Entrez les composantes du vecteur u (x y z) :\n");
    for (i = 0; i < 3; i++) {
        printf("u[%d] = ", i);
        scanf("%d", &u[i]);
    }

    // Saisie du vecteur v
    printf("Entrez les composantes du vecteur v (x y z) :\n");
    for (i = 0; i < 3; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    // Calcul du produit vectoriel
    produit_vectoriel(u, v, r);

    // Affichage du résultat
    printf("\nProduit vectoriel u * v = (%d, %d, %d)\n", r[0], r[1], r[2]);

    return 0;
}

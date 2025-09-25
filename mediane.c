#include <stdio.h>

#define TAILLE_MAX 10000

int main() {
    int tableau[TAILLE_MAX];
    int taille, i, j, R;
    float mediane;
    
    printf("Entrez la taille du tableau (max %d) : ", TAILLE_MAX);
    scanf("%d", &taille);
    
    // Vérifie la taille
    if (taille <= 0 || taille > TAILLE_MAX) {
        printf("Taille invalide !\n");
        return 1;
    }
    
    printf("Entrez les %d valeurs :\n", taille);
    for (i = 0; i < taille; i++) {
        printf("Valeur %d : ", i + 1);
        scanf("%d", &tableau[i]);
        
        // Vérifier si positif
        if (tableau[i] < 0) {
            printf("Erreur : nombre negatif !\n");
            i--; // Redemander la même valeur
        }
    }
    
    // Trier le tableau (tri simple)
    for (i = 0; i < taille - 1; i++) {
        for (j = i + 1; j < taille; j++) {
            if (tableau[i] > tableau[j]) {
                R = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = R;
            }
        }
    }
    
    // Afficher le tableau trié
    printf("\nTableau trie : ");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    // Calculer la médiane
    if (taille % 2 == 1) {
        // Cas impair
        int position = taille / 2;
        mediane = tableau[position];
        printf("Mediane (position %d) : %.2f\n", position, mediane);
    } else {
        // Cas pair
        int position1 = taille / 2 - 1;
        int position2 = taille / 2;
        mediane = (tableau[position1] + tableau[position2]) / 2.0;
        printf("Mediane (positions %d et %d) : %.2f\n", position1, position2, mediane);
    }
    
    return 0;
}

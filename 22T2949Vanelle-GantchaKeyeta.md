Suivi de projet INF231 – Technique de Conception d’Algorithmes et Structures de Données
---------------------------------------------------------------------------------------
Nom : Gantcha keyeta vanelle  
Matricule** : 22t2949  
Groupe de TD/TP: Groupe   
Enseignant: Pr. Melatagia  
Année académique** : 2025–2026


Description générale du projet
------------------------------

Ce projet consiste à implémenter en langage C une série de programmes portant sur les structures de données et les algorithmes fondamentaux. Il s’inscrit dans le cadre du cours INF231 et est réalisé en groupe de 6 étudiants.

Les programmes à développer sont :

1. Somme de deux matrices carrées
2. Produit de deux matrices carrées
3. Recherche séquentielle dans un tableau
4. Multiplication ( a *b) pour ( a, b > 0) en utilisant uniquement des additions de 1
5. Test si un tableau est trié
6. Calcul de la médiane dans un tableau
7. Inversion d’un tableau
8. Produit vectoriel
9. Produit vecteur × matrice


Méthode de travail du groupe
-----------------------------

Les tâches ont été réparties de manière à ce que chaque membre du groupe implémente tous les programmes individuellement. Cela nous a permis de :
- Approfondir notre compréhension personnelle
- Comparer nos différentes approches
- Identifier les erreurs et les corriger ensemble

Une séance d’assise collective a été organisée à la fin pour :
- Revoir les implémentations
- Tester les programmes
- Harmoniser les résultats


 Détails des programmes réalisés
---------------------------------

 1. Somme de deux matrices carrées
- Création de deux matrices `A` et `B` de même taille (ex. : 3×3)
- Parcours des éléments avec deux boucles imbriquées
- Calcul élément par élément : `C[i][j] = A[i][j] + B[i][j]`
- Affichage de la matrice résultante `C`

2. Produit de deux matrices carrées
- Utilisation de trois boucles imbriquées
- Calcul du produit classique : `C[i][j] = somme des A[i][k] * B[k][j]`
- Vérification des dimensions compatibles

 3. Recherche séquentielle dans un tableau
- Parcours du tableau élément par élément
- Comparaison avec la valeur recherchée
- Affichage de la position si trouvée, ou message d’erreur

4. Multiplication \( a *b) avec uniquement des +1
- Utilisation d’une boucle pour ajouter `a` à lui-même `b` fois
- Implémentation sans opérateur `*`, uniquement avec `+1`

5. Test si un tableau est trié
- Parcours du tableau
- Vérification que chaque élément est inférieur ou égal au suivant
- Affichage du résultat : trié ou non trié

6. Calcul de la médiane dans un tableau
- Tri du tableau (méthode simple : tri à bulles)
- Si taille impaire : médiane = élément du milieu
- Si taille paire : moyenne des deux éléments du centre

7. Inversion d’un tableau
- Échange des éléments de début et de fin
- Utilisation de deux indices : `i` et `n - i - 1`

 8. Produit vectoriel
- Calcul du produit vectoriel entre deux vecteurs de dimension 3
- Utilisation de la formule classique avec déterminants

 9. Produit vecteur × matrice
- Multiplication d’un vecteur ligne par une matrice
- Résultat : vecteur ligne de taille égale au nombre de colonnes de la matrice


Fichiers associés
------------------

- `/code/somme_matrices.c`
- `/code/produit_matrices.c`
- `/code/recherche_sequentielle.c`
- `/code/multiplication_plus1.c`
- `/code/test_tri.c`
- `/code/mediane.c`
- `/code/inversion_tableau.c`
- `/code/produit_vectoriel.c`
- `/code/produit_vecteur_matrice.c`
- `/presentation/TP1_Git_Github_INF231.pdf`


Remarques 
----------

Ce projet m’a permis de :
- Renforcer mes compétences en programmation C
- Comprendre les algorithmes de base
- Travailler efficacement en groupe
- Utiliser GitHub pour collaborer et documenter mon travail


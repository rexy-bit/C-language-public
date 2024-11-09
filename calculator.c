
#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double a;
    
    // Saisie de N et a
    printf("Entrez un entier positif N: ");
    scanf("%d", &N);
    printf("Entrez un réel a: ");
    scanf("%lf", &a);
    
    if (N <= 0) {
        printf("N doit être un entier positif.\n");
        return 1;
    }

    int count = 0;
    
    // Boucle de 0 à N-1 et vérifier si f(i) est dans l'intervalle [-a, a]
    for (int i = 0; i < N; i++) {
        double value = 150 * sin(i) / (i + 1);
        if (value >= -a && value <= a) {
            count++;
        }
    }
    
    // Affichage du nombre de valeurs dans l'intervalle
    printf("Le nombre de valeurs de f(i) dans l'intervalle [-%.2f, %.2f] est: %d\n", a, a, count);

    return 0;
}

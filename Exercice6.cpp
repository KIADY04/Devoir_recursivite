#include <iostream>

//Itérative
int max_iteratif(int tab[], int taille) {
    int max_val = tab[0];
    int i = 1;
    while (i < taille) {
        if (tab[i] > max_val) {
            max_val = tab[i];
        }
        i++;
    }
    return max_val;
}

//Récursive
int max_recursif(int tab[], int taille) {
    if (taille == 1) {
        return tab[0];
    }

    int max_restant = max_recursif(tab, taille - 1);

    // Condition ternaire : (condition) ? valeur_si_vrai : valeur_si_faux
    return (tab[taille - 1] > max_restant) ? tab[taille - 1] : max_restant;
}

int main() {
    int tableau[] = {3, 8, 2, 5};
    int n = 4;
    std::cout << "Maximum (Iteratif) : " << max_iteratif(tableau, n) << std::endl;
    std::cout << "Maximum (Recursif) : " << max_recursif(tableau, n) << std::endl;

    return 0;
}

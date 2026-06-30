#include <iostream>

//Récursive
double somme_recursive(int tab[], int n) {
    if (n == 0) return 0;
    return tab[n - 1] + somme_recursive(tab, n - 1);
}

double moyenne_recursive(int tab[], int n) {
    if (n == 0) return 0;
    return somme_recursive(tab, n) / n;
}

//Itérative
double moyenne_iterative(int tab[], int n) {
    if (n == 0) return 0;
    double somme = 0;
    int i = 0;
    while (i < n) {
        somme += tab[i];
        i++;
    }
    return somme / n;
}


//Exemple
int main() {
    int mon_tableau[] = {10, 15, 20, 5, 10};
    int taille = 5;

    std::cout << "Recursive : " << moyenne_recursive(mon_tableau, taille) << std::endl;
    std::cout << "Iterative : " << moyenne_iterative(mon_tableau, taille) << std::endl;
    return 0;
}
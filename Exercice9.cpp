#include <iostream>

//Recursive
int combinaison_rec(int n, int k, int i) {
    if (i > k) {
        return 1;
    }
    return ((n - k + i) * combinaison_rec(n, k, i + 1)) / i;
}

//Iterative
int combinaison_iter(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;

    int resultat = 1;
    int i = 1;

    while (i <= k) {
        resultat = resultat * (n - k + i) / i;
        i++;
    }

    return resultat;
}

//Exemple
int main() {
    int n = 5;
    int k = 2;

    std::cout << "Version Iterative : " << combinaison_iter(n, k) << std::endl;
    std::cout << "Version Recursive : " << combinaison_rec(n, k, 1) << std::endl; // On passe 1 pour le i initial

    return 0;
}

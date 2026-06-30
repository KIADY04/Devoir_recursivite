#include <iostream>

//Récursive
int arrangement_recursif(int n, int k) {
    if (k == 0) return 1;
    if (k > n) return 0;
    return n * arrangement_recursif(n - 1, k - 1);
}

//Itérative
int arrangement_iteratif(int n, int k) {
    if (k > n) return 0;
    int resultat = 1;
    int i = 0;
    while (i < k) {
        resultat *= (n - i);
        i++;
    }
    return resultat;
}

//Exemple
int main() {
    int n = 4, k = 2;

    std::cout << "Recursif (" << n << ", " << k << ") = " << arrangement_recursif(n, k) << std::endl;
    std::cout << "Iteratif (" << n << ", " << k << ") = " << arrangement_iteratif(n, k) << std::endl;
    return 0;
}
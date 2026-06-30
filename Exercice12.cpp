#include <iostream>

//Récursive
int combinaison_recursive(int n, int k) {
    if (k == 0 || k == n) return 1;
    if (k > n) return 0;
    return combinaison_recursive(n - 1, k - 1) + combinaison_recursive(n - 1, k);
}

long long fact(int num) {
    long long res = 1;
    for(int i = 2; i <= num; i++) res *= i;
    return res;
}

//Itérative
int combinaison_iterative(int n, int k) {
    if (k > n) return 0;
    return fact(n) / (fact(k) * fact(n - k));
}

//Exemple
int main() {
    int n = 5, k = 2;
    
    std::cout << "Recursive (" << k << " parmi " << n << ") = " << combinaison_recursive(n, k) << std::endl;
    std::cout << "Iterative (" << k << " parmi " << n << ") = " << combinaison_iterative(n, k) << std::endl;
    return 0;
}
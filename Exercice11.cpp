#include <iostream>

//Récursive
int fibonacci_recursif(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursif(n - 1) + fibonacci_recursif(n - 2);
}

//Itérative
int fibonacci_iteratif(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int f0 = 0, f1 = 1, f_suiv = 0;
    int i = 2;
    while (i <= n) {
        f_suiv = f0 + f1;
        f0 = f1;
        f1 = f_suiv;
        i++;
    }
    return f1;
}

//Exemple
int main() {
    int n = 7;

    std::cout << "Recursif(" << n << ") = " << fibonacci_recursif(n) << std::endl;
    std::cout << "Iteratif(" << n << ") = " << fibonacci_iteratif(n) << std::endl;
    return 0;
}
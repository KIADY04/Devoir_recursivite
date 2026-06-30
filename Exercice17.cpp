#include <iostream>

//Récursives
bool est_paire_recursif(int n) {
    if (n == 0) {
        return true;
    }
    return !est_paire_recursif(n - 1);
}

bool est_impaire_recursif(int n) {
    return !est_paire_recursif(n);
}

//Itératives
bool est_paire_iteratif(int n) {
    return (n % 2 == 0);
}

bool est_impaire_iteratif(int n) {
    return (n % 2 != 0);
}

//Exemple
int main() {
    int test1 = 4;
    int test2 = 7;
    
    std::cout << "RECURSIVES" << std::endl;
    std::cout << "Est-ce que " << test1 << " est paire? " << (est_paire_recursif(test1) ? "True" : "False") << std::endl;
    std::cout << "Est-ce que " << test2 << " est paire? " << (est_paire_recursif(test2) ? "True" : "False") << std::endl;
    std::cout << "Est-ce que " << test2 << " est impaire? " << (est_impaire_recursif(test2) ? "True" : "False") << std::endl;

    std::cout << "ITERATIVES" << std::endl;
    std::cout << "Est-ce que " << test1 << " est paire? " << (est_paire_iteratif(test1) ? "True" : "False") << std::endl;
    std::cout << "Est-ce que " << test2 << " est paire? " << (est_paire_iteratif(test2) ? "True" : "False") << std::endl;
    std::cout << "Est-ce que " << test2 << " est impaire? " << (est_impaire_iteratif(test2) ? "True" : "False") << std::endl;

    return 0;
}
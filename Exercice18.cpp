#include <iostream>
#include <cmath> 

//Récursive
double evaluer_expression_recursive(int n) {
    if (n == 0) {
        return 1.0;
    }
    return (1.0 / std::pow(2, n)) + evaluer_expression_recursive(n - 1);
}

//Itérative
double evaluer_expression_iterative(int n) {
    double somme = 0.0;
    double puissance_de_deux = 1.0;
    
    for (int i = 0; i <= n; i++) {
        somme += (1.0 / puissance_de_deux);
        puissance_de_deux *= 2.0;
    }
    
    return somme;
}

//Exemple
int main() {
    int n = 3; 
    std::cout << "Calcul pour n = " << n << std::endl;
    
    std::cout << "Recursive : " << evaluer_expression_recursive(n) << std::endl;
    std::cout << "Iterative: " << evaluer_expression_iterative(n) << std::endl;

    return 0;
}
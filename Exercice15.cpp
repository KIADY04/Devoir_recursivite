#include <iostream>
#include <string>
#include <algorithm>

void genererPermutations(std::string str, int index_debut, int index_fin) {
    if (index_debut == index_fin) {
        std::cout << str << std::endl;
        return;
    }

    for (int i = index_debut; i <= index_fin; i++) {
        std::swap(str[index_debut], str[i]);
        genererPermutations(str, index_debut + 1, index_fin);
        std::swap(str[index_debut], str[i]);
    }
}


//Exemple
int main() {
    std::string mot = "Salama oh";
    genererPermutations(mot, 0, mot.length() - 1);
    return 0;
}
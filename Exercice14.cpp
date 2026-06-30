#include <iostream>

void hanoi(int n, char depart, char arrivee, char intermediaire) {
    if (n == 1) {
        std::cout << "Deplace le disque 1 de " << depart << " vers " << arrivee << std::endl;
        return;
    }
    hanoi(n - 1, depart, intermediaire, arrivee);
    std::cout << "Deplace le disque " << n << " de " << depart << " vers " << arrivee << std::endl;
    hanoi(n - 1, intermediaire, arrivee, depart);
}

//Exemple
int main() {
	std::cout << "Tour d'Hanoi"<< std::endl;
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
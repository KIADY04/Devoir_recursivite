#include <iostream>

//Recursive
int pgcd_rec(int a, int b) {
    if (b == 0) {
        return a;
    }
    return pgcd_rec(b, a % b);
}

//Iterative
int pgcd_iter(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    return a;
}
}

//Exemple

int main(){
int a = 48;
int b = 18;

std::cout << "PGCD de " << a << " et " << b << " :" << std::endl;
    std::cout << "Version Iterative : " << pgcd_iter(a, b) << std::endl;
    std::cout << "Version Recursive : " << pgcd_rec(a, b) << std::endl;
return 0;
}

#include <iostream>

//Recursive
int nb_chiffres_rec(int n){
if (n < 10){
    return 1;
}
return 1 + nb_chiffres_rec(n / 10);
}

//Iterative
int nb_chiffres_iter(int n){
int c = 0;
if (n == 0){
    return 1;
}

while(n > 0){
    c++;
    n /= 10;
}
return c;
}

//Exemple
int main(){
int n1 = 1234;
int n2 = 0;

std::cout << "Recursive 1234 : " << nb_chiffres_rec(n1) << " Chiffres " << std::endl;
std::cout << "Iterative 1234 : " << nb_chiffres_iter(n1) << " Chiffres  " << std::endl;
std::cout << "Recursive 0 : " << nb_chiffres_rec(n2) << " Chiffres " << std::endl;
std::cout << "Iterative 0 : " << nb_chiffres_iter(n2) << " Chiffres " << std::endl;

return 0;
}

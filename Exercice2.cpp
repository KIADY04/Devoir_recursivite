#include <iostream>

//puissance iterative Lineaire
long long puissance_iterative_lineaire(int a,int b){
long long result = 1;
for (int i = 0;i < b; i++){
    result = result * a;
}
return result;
}

//puissance_iterative_rapide
long long puissance_iterative_rapide(int c,int d){
long long resultat = 1;
long long base = c;

while(d > 0){
    if (d % 2 != 0){
        return resultat * base;
    }
base = base * base;
d = d/2;
}
return resultat;
}

//Exemples
int main(){
long long base = 2;
long long exposant = 4;

std::cout << "Iteratif lineaire : " << base << "^" << exposant << " = " << puissance_iterative_lineaire(base,exposant) << std::endl;
std::cout << "Iteratif rapide : " << base << "^" << exposant << " = " << puissance_iterative_rapide(base,exposant) << std::endl;
return 0;
}

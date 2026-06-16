#include <iostream>

//Puissance_Lineaire
long long puissance_lineaire(int a , int b){
if (b == 0){
    return 1;
}
return a * puissance_lineaire(a,b-1);
}

//Puissance rapide
long long puissance_rapide(int c,int d){
if (d == 0){
    return 1;
}
if (d % 2 == 0){
    long long temp = puissance_rapide(c,d/2);
    return temp * temp;
}
else {
    long long temp = puissance_rapide(c, (d - 1)/2);
    return c*temp*temp;
}

}


//Exemple
int main(){
int base = 2;
int exposant = 4;

std::cout << "Lineaire : " << base << "^" << exposant << " = " << puissance_lineaire(base,exposant) << std::endl;
std::cout << "Rapide : " << base << "^" << exposant << " = " << puissance_rapide(base,exposant) << std::endl;

return 0;
}

#include <iostream>
#include <string>

//conversion binaire recursive
std::string binaire_rec(int n){
if (n == 0){
    return "";
}
return binaire_rec(n / 2) + std::to_string(n % 2);
}

//conversion binaire iterative
std::string binaire_int (int n){
std::string binaire  = "";

if (n == 0){
    return "0";
}

while (n > 0){
    int rest = n % 2;
    binaire = std::to_string(rest) + binaire;
    n /= 2;
}
return binaire;
}

//Exemple
int main(){
int number = 5;
std::cout << "Iterative : " << binaire_int(number) << std::endl;

std::string recursive = binaire_rec(number);
if (recursive == ""){
    recursive = "0";
}
std::cout << "Recursive : " << recursive << std::endl;
return 0;
}

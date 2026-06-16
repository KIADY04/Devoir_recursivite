#include <iostream>

//factorielle recursive
long long factorielle_recursive(int a){
if (a== 0){
    return 1;
}
return a * factorielle_recursive(a - 1);
}

//factirielle iterative
long long factorielle_iterative(int b){
long long result = 1;
for (int i = 1; i <= b; i++){
    result = result * i;
}
return result;
}

//Exemple
int main(){
long long number = 4;

std::cout << "Recursive : " << number << "! = " << factorielle_recursive(number) << std::endl;
std::cout << "Iterative : " << number << "! = " << factorielle_iterative(number) << std::endl;
return 0;
}

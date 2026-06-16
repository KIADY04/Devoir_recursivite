#include <iostream>


//Recursif
int somme_rec(int t[], int n){
if ( n == 0){
    return 0;
}
return t[n - 1] + somme_rec(t,n - 1);
}

//Iterative
int somme_iter(int t[],int n){
int s = 0;
int i = 0;

while(i < n){
    s += t[i];
    i++;
}
return s;
}

//Exemple
int main (){
int t[] = {1,2,3,4};
int n = 4;

std::cout << "Somme (Iteratif) : " << somme_iter(t,n) << std::endl;
std::cout << "Somme (Recursif) : " << somme_rec(t,n) << std::endl;
return 0;
}

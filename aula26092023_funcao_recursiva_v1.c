//Escreva uma função recursiva para escrever os números pares maiores que 0 e menores que 12 na tela.

#include <iostream>

using namespace std;

void mostrarPares(int n){
    if(n<12){
        printf("%d\n", n);
        mostrarPares(n+=2);
    }
}

int main(){

    mostrarPares(2);

    return 0;

}

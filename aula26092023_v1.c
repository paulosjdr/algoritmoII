//Faça um programa que leia dois números inteiros, caso os dois forem pares imprima na tela "São pares".

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int A, B;

    printf("Digite o valor de A: \n");
    scanf("%d", &A);

    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    if(A%2==0 && B%2==0)
        printf("São pares\n");

    return 0;
}

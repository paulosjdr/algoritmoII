#include <iostream>

using namespace std;

void leitura(int &A, int &B){
    printf("Digite o valor de A: \n");
    scanf("%d", &A);

    printf("Digite o valor de B: \n");
    scanf("%d", &B);
}

int pares(int A, int B){
    if(A%2==0 && B%2==0){
        printf("São pares\n");
        return 1;
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "");

    int X, Y;

    leitura(X, Y);
    pares(X, Y);

    return 0;
}

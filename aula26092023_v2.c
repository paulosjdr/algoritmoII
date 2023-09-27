#include <iostream>

using namespace std;



int leitura(int &A, int &B){
    printf("Digite o valor de A: \n");
    scanf("%d", &A);

    printf("Digite o valor de B: \n");
    scanf("%d", &B);
}

int pares(int &A, int &B){
    if(A%2==0 && B%2==0)
        printf("São pares\n");
}

int main()
{
    setlocale(LC_ALL, "");

    int A, B;

    leitura(A, B);
    pares(A, B);

    return 0;
}

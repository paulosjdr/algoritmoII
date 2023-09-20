// Escreva uma função que receba por parâmetro dois números e retorne o maior deles.
#include <iostream>

using namespace std;

double comparaValores(double x, double y);

int main()
{
    double n1, n2;
    cin >> n1 >> n2;
    double maior = comparaValores(n1,n2);
    cout << "MAIOR = " << maior << endl;
    return 0;
}

double comparaValores(double x, double y){
    if(x > y){
        return x;
    }else{
        return y;
    }

}

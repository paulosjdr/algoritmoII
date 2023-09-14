#include <iostream>

using namespace std;

int fatorial(int x){
    int fat;
    fat=1;
    for(int i=x; i>=1; i--){
        fat = fat*i;
    }
    return fat;
}
int main()
{
    int f, valor;
    cout << "INFORME O VALOR" << endl;
    cin >> valor;
    f = fatorial(valor);
    for(int i=valor; i>=1; i--){
        f = f*i;
    }
    cout << valor << "! = " << f << endl;
    return 0;
}

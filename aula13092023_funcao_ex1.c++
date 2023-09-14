#include <iostream>

using namespace std;

int main()
{
    int f, valor;

    cout << "INFORME O VALOR" << endl;
    cin >> valor;

    f = 1;
    for(int i=valor; i>=1; i--){
        f = f*i;
    }
    cout << valor << "! = " << f << endl;

    return 0;
}

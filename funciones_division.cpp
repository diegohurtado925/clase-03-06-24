#include <iostream>
using namespace std;

float division(float n1, float n2)
{
    float resultado =0;
    resultado = (n1 / n2);
    return resultado;
}

int main ()
{
    float numero1=0, numero2=0, res;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    division(numero1, numero2);
    res = division(numero1, numero2);
    cout << "El resultado es: " << res << endl;

return 0;


}
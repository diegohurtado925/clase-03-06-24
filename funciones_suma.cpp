#include <iostream>
using namespace std;

int suma(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 + entero2);
    return resultado; 
}

int main ()
{
    int n1=0, n2=0, respuesta;

    
    n1 = 8;
    n2 = 6;

    suma(n1, n2);
    respuesta = suma(n1, n2);
    cout << "El valor de la suma de dos numeros es: " << respuesta << endl;




    return 0;
}


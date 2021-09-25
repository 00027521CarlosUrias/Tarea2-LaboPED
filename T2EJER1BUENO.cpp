#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int mayor, menor, residuo, mcd; 

int mcdREC(int mayor, int menor);

int main (void)
{
    cout <<" Bienvenidos a la calculadora del MCD " << endl;
    cout << endl;

    cout << " Ingresar el dato mayor de su calculo: " <<endl;
    cin >> mayor;

    cout << " Ingresar el dato menor de su calculo; " <<endl;
    cin >> menor;

    residuo = mcdREC(mayor,menor);

    cout << "El MCD (Recursivo) de los dos numeros ingresados es: " <<endl;
    cout << residuo <<endl;

    return 0;
}


int mcdREC(int mayor, int menor)
{
    residuo = mayor%menor;

    if (mayor == 0 && menor == 0) 
    {
        return 0;
    }
    if (residuo != 0){
        return mcdREC(menor, mayor % menor);
    }
    else 
    {
        return menor;
    }
}


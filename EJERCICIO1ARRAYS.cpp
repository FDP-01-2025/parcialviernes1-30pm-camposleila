// Dado un array, cuenta cuantos elementos aparecen más de una vez.

#include <iostream>
using namespace std;

int main()
{
    int numero, suma, i;
    
    numero = 0 ; 

    cout << "inserta los 5 numeros para contar los que se repiten" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;
    }
    cout << numero << " se repite " << i << "veces" << endl;

    return 0;
}
// Dado un array, cuenta cuantos elementos aparecen más de una vez.

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "inserta los 5 numeros para contar los que se repiten" << endl;
    
    for (int i = 0; i >= 5; i++)
    {
        cin >> numero;
        cout << i << "se repite" << endl;
    }
    return 0;
}
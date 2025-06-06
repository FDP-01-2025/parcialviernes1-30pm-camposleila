//NO TOMAR EN CUENTA POR FIS, SON LOS OTROS
// Ejercicio 2. Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño

#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "What was your score? (1-5 stars)" << endl;
    cin >> score;
    switch (score)
    {
    case 1:
        cout << "You only got 1 star. Keep trying" << endl;
        break;

    case 2:
        cout << "You got 2 stars. Not bad at all" << endl;
        break;

    default:
    }

    return 0;
}

// Ejercicio 2. Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño

#include <iostream>
using namespace std;

int main()
{
    int score; //Declaracion de variables
    cout << "What was your score? (1-5 stars)" << endl; 
    cin >> score; //El usuario ingresa su score

    switch (score) //switch para hacer cada caso dependiendo de las estrellas que obtuvo el jugador
    {
    case 1: //Un caso por estrella, se da el mensaje acorde
        {cout << "You only got 1 star. Keep trying" << endl;
        break;}

    case 2:
        cout << "You got 2 stars. Not bad at all" << endl;
        break;
    
    case 3: 
        cout <<"3 stars!! Keep the rythm:)" << endl; 
        break; 

    case 4: 
        cout << "Almost perfect score. Great" << endl; 
        break;

    case 5: 
        cout << "Excellent!! You nailed it:)" << endl; 
        break;

    default: //en caso que escriba un numero que no este en el rango entre 1 y 5
        cout << "Insert a valid answer" << endl; 
    }

    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int main()
{

    int numero;
    int adivinanza;
    int intentosNumero = 4;
    int intentosPista = 2;
    string opcion;
    string pista;

    adivinar:
    cout << "adivina el numero entre 1 y 20" << endl;

    srand(time(0));

    numero = rand()% 20 + 1;

    while(adivinanza != numero){

       intentosNumero--;
       cin >> adivinanza;
       cout << "no adivinaste, escribe pista para tener una pista, tienes " << intentosNumero << " intentos para adivinar y " << intentosPista << " pistas" << endl;
       cin >> pista;

       if (intentosNumero == 0){
        cout << "no tienes mas intentos" << endl;
        return 0;
       }

       if(pista == "pista"){

             if(intentosPista == 0){
                cout << "no tienes mas pistas" << endl;
            }

        if(adivinanza < numero){
                intentosPista--;

            cout << "el numero que ingresaste " << adivinanza << " es muy bajo" << endl;
        }

        else if (adivinanza > numero){
                intentosPista--;

            cout << "el numero que ingresaste " << adivinanza << " es muy alto" << endl;
        }
       }
    }

        cout << "el numero es " << numero << " adivinaste" << endl;
        cout << "quieres jugar otra vez" << endl;
        cin >> opcion;

        if(opcion == "si" || opcion == "ok"){

            goto adivinar;
        }
        else{
            return 0;
        }
}

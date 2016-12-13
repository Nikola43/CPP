#include <iostream>
#include "Persona.h"
#include <windows.h>

using namespace std;

int main()
{
    Persona persona;
    int edad;

    persona.setNombre("pepe");
    persona.setEdad(16);

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    return 0;
}
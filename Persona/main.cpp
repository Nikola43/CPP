#include <iostream>
#include "Persona.h"



using namespace std;

int main()
{
    Persona persona;

    persona.setNombre("piter");
    persona.setEdad(34);

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;

    return 0;
}
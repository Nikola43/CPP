#include "Persona.h"

//Constructor vacio
Persona::Persona(  )
{
    nombre = " ";
    edad = 1;
}

//Contructor con parametros
Persona::Persona( char* nombre, int edad )
{
    this->nombre = nombre;
    this->edad = edad;
}

// Metodos consultores
char* Persona::getNombre()
{
    return ( nombre );
}

int Persona::getEdad()
{
    return ( edad );
}

void Persona::setNombre(char* nombre)
{
    this->nombre = nombre;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

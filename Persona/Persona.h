#ifndef PERSONA_PERSONA_H
#define PERSONA_PERSONA_H

class Persona
{
    private:
        //Atributos
        char* nombre;
        int edad;

    public:
        //Metodos getter y setter
        void setNombre( char nombre[20] );
        char* getNombre( void );
        void setEdad( int edad );
        int  getEdad( void );

        // Contructores
        Persona( ); //Constructor vacio
        Persona( char nombre[20], int edad ); //Contructor con parametros
};


#endif //PERSONA_PERSONA_H

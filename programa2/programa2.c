
// includes
#include <stdio.h>
#include <stdlib.h>


// main
void main() {

    char * cadena;
    char caracter;
    int repeticiones = 0;
    cadena = malloc( sizeof( char ) * 150 );

    printf( "\nIngrese la cadena (maximo 150 caracteres): " );
    gets( cadena );

    printf( "Ingrese el caracter a buscar: " );
    scanf( "%c", &caracter );

    int i = 0;
    do {
        if ( * ( cadena + i ) == caracter ) {
            repeticiones ++;
        };
        i ++;
    } while ( * ( cadena + i ) );
    printf( "El caracter %c se repitio: %i", caracter, repeticiones );

};
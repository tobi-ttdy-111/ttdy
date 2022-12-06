
// includes
#include <stdio.h>
#include <stdlib.h>


// main
void main() {

    int longitud;
    printf( "Ingresa la longitud del vector: " );
    scanf( "%i", &longitud );

    int * arreglo = malloc( sizeof( int ) * longitud );
    printf( "Mostrado del arreglo ( con apuntadores y numeros random )\n" );
    for ( int i = 0; i < longitud; i++ ) {
        * ( arreglo + i ) = rand() % 11;
        printf( "* ( arreglo + %i ) = %i\n", i, * ( arreglo + i ) );
    };
    free( arreglo );

};
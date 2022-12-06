
// includes
#include <stdio.h>
#include <stdlib.h>


// main
void main() {

    int longitud;
    printf( "\nLongitud de la matriz n x m: " );
    scanf( "%i", &longitud );

    int numero;
    printf( "Numero de relleno: " );
    scanf( "%i", &numero );

    int arreglo[ longitud ][ longitud ];
    for ( int i = 0; i < longitud; i++ ) {
        for ( int j = 0; j < longitud; j++ ) {
            arreglo[ i ][ j ] = numero;
        };
        arreglo[ i ][ i ] = i;
    };

    for ( int i = 0; i < longitud; i++ ) {
        printf( "\n" );
        for ( int j = 0; j < longitud; j++ ) {
            printf( "%i   ", arreglo[ i ][ j ] );
        };
    };


};
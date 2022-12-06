
// includes
#include <stdio.h>
#include <stdlib.h>


// globalVariables
int dimension1;
int dimension2;
int cero = 0;
int uno = 1;


// getDimensiones
void getDimensiones() {

    do {
        system( "cls" );
        if ( dimension1 != dimension2 ) {
            printf( "Las dimensiones deben ser de igual longitud, para que la matriz tenga una diagonal principal y secundaria\n" );
        };
        printf( "Valor de dimension 1: " );
        scanf( "%i", &dimension1 );
        printf( "Valor de dimension 2: " );
        scanf( "%i", &dimension2 );
    } while ( dimension1 != dimension2 );

};


// main
int main() {

    getDimensiones();
    int * pArray[ dimension1 ][ dimension2 ];

    for ( int i = 0; i < dimension1; i++ ) {
        for ( int j = 0; j < dimension2; j++ ) {
            pArray[ i ][ j ] = &cero;
        };
    };

    int diagonal2 = dimension1 - 1;
    for ( int i = 0; i < dimension1; i++ ) {
        pArray[ i ][ i ] = &uno;
        pArray[ i ][ diagonal2 - i ] = &uno;
    };

    system( "cls" );
    printf( "Matriz de %i x %i", dimension1, dimension2 );
    for ( int i = 0; i < dimension1; i++ ) {
        printf( "\n" );
        for ( int j = 0; j < dimension2; j++ ) {
            printf( "%i   ", * pArray[ i ][ j ] );
        };
    };

    return 0;

};
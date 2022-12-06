
// includes
#include <stdio.h>
#include <stdlib.h>


// main
void main() {

    char * cadena;
    cadena = malloc( sizeof( char ) * 150 );

    printf( "\nIngrese la cadena (maximo 150 caracteres): " );
    gets( cadena );

    printf( "\nLetras:\n" );
    int i = 0;
    do {
        printf( "%c ", * ( cadena + i ) );
        i ++;
    } while ( * ( cadena + i ) );
    printf( "\nNumero de caracteres %i", i );
    free( cadena );

};
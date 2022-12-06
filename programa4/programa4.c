
// includes
#include <stdio.h>
#include <stdlib.h>


// main
void main() {

    int nDatos;
    printf( "Cantidad de datos: " );
    scanf( "%i", &nDatos );

    float * numeros;
    numeros = malloc( sizeof( float ) * nDatos );

    float valor = 0;
    for ( int i = 0; i < nDatos; i++ ) {
        printf( "Valor numero %i : ", i );
        scanf( "%f", &valor );
        * ( numeros + i ) = valor;
    };

    float suma;
    float media;
    float valorMenor = * ( numeros );
    float valorMayor = * ( numeros );

    for ( int i = 0; i < nDatos; i++ ) {
        suma += * ( numeros + i );
        if ( * ( numeros + i ) < valorMenor ) { valorMenor = * ( numeros + i ); };
        if ( * ( numeros + i ) > valorMayor ) { valorMayor = * ( numeros + i ); };
    };

    media = suma / nDatos;
    printf( "La media es: %.2f\n", media );
    printf( "Valor menor: %.2f\n", valorMenor );
    printf( "Valor mayor: %.2f\n", valorMayor );

};

// includes
#include <stdio.h>
#include <stdlib.h>


// mainVariables
float * calificacionesM1;
float * calificacionesM2;
float * calificacionesM3;


// llenarCalificaciones
float llenarCalificaciones() {

    for ( int i = 0; i < 10; i++ ) {
        * ( calificacionesM1 + i ) = rand() % 11;
        * ( calificacionesM2 + i ) = rand() % 11;
        * ( calificacionesM3 + i ) = rand() % 11;
    };

};


// promedioMateria
float promedioMateria( int materia ) {

    float suma = 0;
    for ( int i = 0; i < 10; i++ ) {
        if ( materia == 1 ) { suma += * ( calificacionesM1 + i ); };
        if ( materia == 2 ) { suma += * ( calificacionesM2 + i ); };
        if ( materia == 3 ) { suma += * ( calificacionesM3 + i ); };
    };
    float promedio = suma / 10;
    return promedio;

};


// mostrarCalificaciones
float mostrarCalificaciones ( int materia ) {

    if ( materia == 1 ) {
        printf( "\nCalificaciones materia 1" );
        for ( int i = 0; i < 10; i++ ) {
            printf( "\ncalificacion alumno %i = %.2f", i, * ( calificacionesM1 + i ) );
        };
        printf( "\nPromedio actual: %.2f", promedioMateria( 1 ) );
    };
    if ( materia == 2 ) {
        printf( "\nCalificaciones materia 1" );
        for ( int i = 0; i < 10; i++ ) {
            printf( "\ncalificacion alumno %i = %.2f", i, * ( calificacionesM2 + i ) );
        };
        printf( "\nPromedio actual: %.2f", promedioMateria( 2 ) );
    };
    if ( materia == 3 ) {
        printf( "\nCalificaciones materia 1" );
        for ( int i = 0; i < 10; i++ ) {
            printf( "\ncalificacion alumno %i = %.2f", i, * ( calificacionesM3 + i ) );
        };
        printf( "\nPromedio actual: %.2f", promedioMateria( 3 ) );
    };

};


// modificarCalificaciones
void modificarCalificaciones( int materia ) {

    if ( materia == 1 ) {
        float calificacion = 0;
        for ( int i = 0; i < 10; i++ ) {
            printf( "calificacion alumno %i = ", i );
            scanf( "%f", &calificacion );
            * ( calificacionesM1 + i ) = calificacion;
        };
    };
    if ( materia == 2 ) {
        float calificacion = 0;
        for ( int i = 0; i < 10; i++ ) {
            printf( "calificacion alumno %i = ", i );
            scanf( "%f", &calificacion );
            * ( calificacionesM2 + i ) = calificacion;
        };
    };
    if ( materia == 3 ) {
        float calificacion = 0;
        for ( int i = 0; i < 10; i++ ) {
            printf( "calificacion alumno %i = ", i );
            scanf( "%f", &calificacion );
            * ( calificacionesM3 + i ) = calificacion;
        };
    };

};


// main
void main() {

    calificacionesM1 = malloc( sizeof( float ) * 10 );
    calificacionesM2 = malloc( sizeof( float ) * 10 );
    calificacionesM3 = malloc( sizeof( float ) * 10 );
    llenarCalificaciones();

    mostrarCalificaciones( 1 );printf( "\n" );
    mostrarCalificaciones( 2 );printf( "\n" );
    mostrarCalificaciones( 3 );printf( "\n" );

    printf( "\nModificar calificaciones materia 1\n" );
    modificarCalificaciones( 1 );
    printf( "\n" );
    mostrarCalificaciones( 1 );printf( "\n" );

    printf( "\nModificar calificaciones materia 2\n" );
    modificarCalificaciones( 2 );
    printf( "\n" );
    mostrarCalificaciones( 2 );printf( "\n" );

    printf( "\nModificar calificaciones materia 3\n" );
    modificarCalificaciones( 3 );
    printf( "\n" );
    mostrarCalificaciones( 3 );printf( "\n" );


};
# include <stdio.h>
# include <stdlib.h>


int main(){

    int filas  = 0, colmunas = 0;
    char ** p, caracter = '*';
    char someName;

    printf( "\nNumero filas y columnas: ");
    scanf( "%i", &filas );
    colmunas = filas ;
    printf("\nCaracter de llenado: ");
    scanf( "%s", &caracter );

    p = malloc( filas * ( sizeof( char* ) ) );
    for ( int i = 0; i < filas ; i++ ) {
        someName = i+'0';
        * ( p + i ) = malloc( colmunas * ( sizeof( char ) ) );
        for ( int j = 0; j < colmunas; j++ ) {
            if ( i == j ) *(*(p+i)+j) = someName;
            else *( *(p+i)+j ) = caracter;
        };
    };

    for ( int i = 0; i < filas ; i++ ) {
        printf("[");
        for (int j = 0; j < colmunas; j++) {
            printf(" %c ", *(*(p+i)+j));
        };
        printf("]\n");
    };

    for (int i = 0; i < filas ; i++) { 
        free(*(p+i));
    };

    return 0;

}

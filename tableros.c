#include <stdio.h>
#include <stdlib.h>
#include "tableros.h"



// Inicializa el tablero sin barcos en el mapa.
void inicializarTablero(char tablero[FILAS][COLUMNAS]){
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            tablero[i][j] = 'A';
        }
        
    }
    
}

// Funcion para imprimir el tablero actualizado
void imprimirTablero(char tablero[FILAS][COLUMNAS]){
    printf("          1     2       3       4       5       6       7       8       9       10\n");
    for (int i = 0; i < FILAS ; i++)
    {
        printf("%d\t ", i + 1);
        for (int j = 0; j < COLUMNAS; j++)
        {
            printf("[ %c ]\t", tablero[i][j]);
        }
        printf("\n");
        printf("\n");
    }
    
}
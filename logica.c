#include <stdio.h>
#include <stdlib.h>
#include "tableroYBarcos.h"
#include "logica.h"

void imprimirInfoBarco(struct Barco *barco) {
    printf("El '%s' comienza en las coordenadas %d, %d", barco->nombre, barco->pos_X, barco->pos_Y);
    if (barco->sentido == 'H') {
        printf(" hasta la columna %d.\n", barco->pos_Y + barco->longitud - 1);
    } else if (barco->sentido == 'V') {
        printf(" hasta la fila %d.\n", barco->pos_X + barco->longitud - 1);
    }
}

/*int disparosJugador(char tablero[FILAS][COLUMNAS]) {
    // Implementar lógica para que el jugador realice disparos
    int fila, columna;
    printf("Ingresa coordenadas de disparo (eje Y, eje X): ");
    scanf("%d %d", &fila, &columna);

    if (tablero[fila - 1][columna - 1] == 'B') {
        printf("¡En el blanco!\n");
        tablero[fila - 1][columna - 1] = 'O';
        return 1; // Acertó en un barco
    } else if (tablero[fila - 1][columna - 1] == 'A') {
        printf("¡Agua!\n");
        tablero[fila - 1][columna - 1] = 'X'; // Marcar como agua
        return 0; // Agua
    } else {
        printf("¡Ya disparaste ahí antes! Elige otra posición.\n");
        return -1; // Repetición de disparo
    }
}*/


/*int barcoHundido(struct Barco *barco, char tablero[FILAS][COLUMNAS], int fila, int columna) {
    
}*/
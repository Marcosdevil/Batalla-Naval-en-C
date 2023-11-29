#ifndef LOGICA_H
#define LOCICA_H

struct disparosJugador
{
    int intentos;
    int disparos[100][3];
    int barcosHundidos;
};

void imprimirInfoBarco(struct Barco *barco);
int disparosJugador(char tablero[FILAS][COLUMNAS]);
int barcoHundido(struct Barco *barco, char tablero[FILAS][COLUMNAS], int fila, int columna);

#endif

#ifndef TABLEROYBARCOS_H
#define TABLEROYBARCOS_H

#define FILAS 10
#define COLUMNAS 10

struct Barco
{
    char nombre[20];
    int pos_X;
    int pos_Y;
    char sentido;// 'H' para horizontal y 'V' para vertical
    int longitud;//  
};

void colocarBarcoEnTablero(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarBarcosMaquina(char tablero[FILAS][COLUMNAS]);
void colocarBarcosUsuario(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
int validarPosicion(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
int validarAdyacencia(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarPortaaviones(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarBuque1(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarBuque2(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarSubmarino1(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarSubmarino2(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarSubmarino3(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarCrucero1(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarCrucero2(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarCrucero3(struct Barco *barco, char tablero[FILAS][COLUMNAS]);
void colocarCrucero4(struct Barco *barco, char tablero[FILAS][COLUMNAS]);

#endif
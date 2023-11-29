#include <stdio.h>
#include <string.h>
#include "tableroYBarcos.h"
#include <time.h>
#include "saludoEInstrucciones.h"
#include <stdlib.h>
#include <windows.h>
#include "logica.h"
#include "tableros.h"

int main(){
    //Defino las variables
    char jugador[50];
    char tableroJugador[FILAS][COLUMNAS];
    char tableroMaquina[FILAS][COLUMNAS];
    
    // Defino la estructura para los barcos
    struct Barco
    {
        char nombre[30];
        int fila;
        int columna;
        int longitud;
        char orientacion;
    };
    
    
    //Defino las variables para cada tipo de barco
    struct Barco portaaviones;
    struct Barco buque1;
    struct Barco buque2;
    struct Barco submarino1;
    struct Barco submarino2;
    struct Barco submarino3;
    struct Barco crucero1;
    struct Barco crucero2;
    struct Barco crucero3;
    struct Barco crucero4;

    


    //Solicitar el nombre al jugador
    printf("Ingresa tu nombre: \n");
    scanf("%s", jugador);
    saludo(jugador);
    getchar();

    //El programa saludara al jugador e imprimira por pantalla la consigna del juego
    instrucciones();


    inicializarTablero(tableroJugador);
    imprimirTablero(tableroJugador);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("------------------------------------");
    printf("\n");
    printf("\n");
    printf("\n");

    // El jugador coloca sus embarcaciones
    colocarPortaaviones(&portaaviones, tableroJugador);
    // Ahora colocamos los dos buques
    colocarBuque1(&buque1, tableroJugador);
    printf("Ahora el segundo buque\n");
    colocarBuque2(&buque2, tableroJugador);
    // Ahora colocamos los 3 submarinos
    colocarSubmarino1(&submarino1, tableroJugador);
    printf("Coloquemos el segundo submarino\n");
    colocarSubmarino2(&submarino2, tableroJugador);
    printf("Ahora vamos por el tercero\n");
    colocarSubmarino3(&submarino3, tableroJugador);
    // Ahora colocamos los 4 cruceros
    colocarCrucero1(&crucero1, tableroJugador);
    printf("Ahora vamos por el segundo\n");
    colocarCrucero2(&crucero2, tableroJugador);
    printf("Ahora el tercero\n");
    colocarCrucero3(&crucero3, tableroJugador);
    printf("Y el ultimo crucero\n");
    colocarCrucero4(&crucero4, tableroJugador);
    printf("Has terminado tu turno para poner los barcos!");


    return 0;
}
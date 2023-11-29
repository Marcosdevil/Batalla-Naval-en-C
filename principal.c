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
    colocarBuque2(&buque2, tableroJugador);
    // Ahora colocamos los 3 submarinos
    colocarSubmarino1(&submarino1, tableroJugador);
    colocarSubmarino2(&submarino2, tableroJugador);
    colocarSubmarino3(&submarino3, tableroJugador);
    // Ahora colocamos los 4 cruceros
    colocarCrucero1(&crucero1, tableroJugador);
    colocarCrucero2(&crucero2, tableroJugador);
    colocarCrucero3(&crucero3, tableroJugador);
    colocarCrucero4(&crucero4, tableroJugador);
    printf("Has terminado tu turno para poner los barcos!");

    imprimirInfoBarco(&portaaviones);
    imprimirInfoBarco(&buque1);
    imprimirInfoBarco(&buque2);
    imprimirInfoBarco(&submarino1);
    imprimirInfoBarco(&submarino2);
    imprimirInfoBarco(&submarino3);
    imprimirInfoBarco(&crucero1);
    imprimirInfoBarco(&crucero2);
    imprimirInfoBarco(&crucero3);
    imprimirInfoBarco(&crucero4);

    imprimirTablero(tableroJugador);
    // Ahora le toca el turno a la maquina para colocar sus embarcaciones.
    printf("Ahora es el turno de la maquina de poner sus barcos en el mapa!\n\n");
    inicializarTablero(tableroMaquina);
    
    colocarBarcosMaquina(tableroMaquina);
    imprimirTablero(tableroMaquina);

    return 0;
}
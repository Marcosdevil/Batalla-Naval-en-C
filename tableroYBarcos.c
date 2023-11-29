#include <stdio.h>
#include <stdlib.h>
#include "tableroYBarcos.h"
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>


// Funciones para colocar los barcos
void colocarPortaaviones(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Primero vamos a colocar el portaaviones (recuerda que ocupa 5 casillas)\n");
    strcpy(barco->nombre, "portaaviones");
    colocarBarcosUsuario(barco, tablero);
    imprimirTablero(tablero);
    Sleep(7000);
    system("clear");
}    

void colocarBuque1(struct Barco *barco, char tablero[FILAS][COLUMNAS]){    // Ahora colocamos los dos buques
    printf("Ahora vamos a colocar el buque! (ocupa 4 casillas)\n");
    strcpy(barco->nombre, "buque1");
    colocarBarcosUsuario(barco, tablero);
}
void colocarBuque2(struct Barco *barco, char tablero[FILAS][COLUMNAS]){    
    printf("Ahora el segundo buque\n");
    strcpy(barco->nombre, "buque2");
    colocarBarcosUsuario(barco, tablero);
    imprimirTablero(tablero);
    Sleep(7000);
    system("clear");
}
void colocarSubmarino1(struct Barco *barco, char tablero[FILAS][COLUMNAS]){    // Ahora colocamos los tres submarinos
    printf("Ahora vamos a colocar los tres submarinos! (cada uno ocupa 3 casillas)\n");
    printf("Vamos por el primero");
    strcpy(barco->nombre, "Submarino1");
    colocarBarcosUsuario(barco, tablero);
}
void colocarSubmarino2(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Coloquemos el segundo submarino\n");
    strcpy(barco->nombre, "submarino2");
    colocarBarcosUsuario(barco, tablero);
}
void colocarSubmarino3(struct Barco *barco, char tablero[FILAS][COLUMNAS]){    
    printf("Ahora vamos por el tercero\n");
    strcpy(barco->nombre, "submarino3");
    colocarBarcosUsuario(barco, tablero);
    imprimirTablero(tablero);
    Sleep(7000);
    system("clear");
}
void colocarCrucero1(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Ahora vamos a colocar los cuatro cruceros! (cada uno ocupa 2 casillas)\n");
    strcpy(barco->nombre, "crucero1");
    colocarBarcosUsuario(barco, tablero);
}
void colocarCrucero2(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Ahora vamos por el segundo\n");
    strcpy(barco->nombre, "crucero2");
    colocarBarcosUsuario(barco, tablero);
}
void colocarCrucero3(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Ahora el tercero\n");
    strcpy(barco->nombre, "crucero3");
    colocarBarcosUsuario(barco, tablero);
}
void colocarCrucero4(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Y el ultimo crucero\n");
    strcpy(barco->nombre, "crucero4");
    colocarBarcosUsuario(barco, tablero);
    imprimirTablero(tablero);
    Sleep(7000);
    system("clear");
}


int validarPosicion(struct Barco *barco, char tablero[FILAS][COLUMNAS]) {
    // Implementar lógica para validar la posición del barco
    if (barco->sentido == 'H') {
        for (int i = 0; i < barco->longitud; ++i) {
            if (tablero[barco->pos_X - 1][barco->pos_Y + i - 1] != 'A') {
                return 0; // Posición ocupada
            }
        }
    } else if (barco->sentido == 'V') {
        for (int i = 0; i < barco->longitud; ++i) {
            if (tablero[barco->pos_X + i - 1][barco->pos_Y - 1] != 'A') {
                return 0; // Posición ocupada
            }
        }
    }
    return 1; // Posición válida
}

/*int validarAdyacencia(struct Barco *barco, char tablero[FILAS][COLUMNAS]) {
    // Verifica la adyacencia horizontal
    if (barco->sentido == 'H') {
        // Verifica a izquierda y a derecha
        for (int j = barco->pos_Y - 1; j <= barco->pos_Y + barco->longitud; j++) {
            for (int i = barco->pos_X - 1; i <= barco->pos_X + 1; i++) {
                if (i >= 0 && i < FILAS && j >= 0 && j < COLUMNAS) {
                    if (tablero[i][j] == 'B') {
                        return 0; // Ubicación inválida
                    }
                }
            }
        }
    }
    // Verifica la adyacencia vertical
    else if (barco->sentido == 'V') {
        // Verifica arriba y abajo
        for (int i = barco->pos_X - 1; i <= barco->pos_X + barco->longitud; i++) {
            for (int j = barco->pos_Y - 1; j <= barco->pos_Y + 1; j++) {
                if (i >= 0 && i < FILAS && j >= 0 && j < COLUMNAS) {
                    if (tablero[i][j] == 'B') {
                        return 0; // Ubicación inválida
                    }
                }
            }
        }
    }
    return 1; // Ubicación válida
}*/


void colocarBarcosUsuario(struct Barco *barco, char tablero[FILAS][COLUMNAS]){
    printf("Dime una coordenada del eje X  (Desde el 1   al 10): \n");
    scanf(" %d", &barco->pos_Y);
    printf("Dime una coordenada del eje Y  (Desde el 1 al 10): \n");
    scanf("%d", &barco->pos_X);
    printf("Dime si lo quieres posicionar de forma horizontal o vertical  ('H' o 'V'): \n");
    scanf(" %c", &barco->sentido);
    if (strcmp(barco->nombre, "portaaviones") == 0)
    {
        barco->longitud = 5;
    }else if (strcmp(barco->nombre, "buque1") == 0 || strcmp(barco->nombre, "buque2") == 0)
    {
        barco->longitud = 4;
    }else if (strcmp(barco->nombre, "submarino1") == 0 || strcmp(barco->nombre, "submarino2") == 0 || strcmp(barco->nombre, "submarino3") == 0)
    {
        barco->longitud = 3;
    }else if (strcmp(barco->nombre, "crucero1") == 0 ||strcmp(barco->nombre, "crucero2") == 0 || strcmp(barco->nombre, "crucero3") == 0 || strcmp(barco->nombre, "crucero4") == 0)
    {
        barco->longitud = 2;
    }  
    getchar();
    if (!validarPosicion(barco, tablero))
    {
        printf("Error: Posicion invalida. Vuelve a intentarlo.\n");
        colocarBarcosUsuario(barco, tablero); // Volver a solicitar las coordenadas
        return;
    }
    colocarBarcoEnTablero(barco, tablero);
}   


    

void colocarBarcosMaquina(char tablero[FILAS][COLUMNAS]) {
    // Implementar lógica para que la máquina coloque los barcos aleatoriamente
    srand(time(NULL));

    struct Barco portaaviones, buque1, buque2, submarino1, submarino2, submarino3, crucero1, crucero2, crucero3, crucero4;

    // Colocar portaaviones
    portaaviones.longitud = 5;
    portaaviones.pos_X = rand() % FILAS + 1;
    portaaviones.pos_Y = rand() % COLUMNAS + 1;
    portaaviones.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&portaaviones, tablero))
    {
        portaaviones.pos_X = rand() % FILAS + 1;
        portaaviones.pos_Y = rand() % COLUMNAS + 1;
        portaaviones.sentido = rand() % 2 == 0 ? 'h' : 'v';
    }

    colocarBarcoEnTablero(&portaaviones, tablero);

    // Colocar buque1
    buque1.longitud = 4;
    buque1.pos_X = rand() % FILAS + 1;
    buque1.pos_Y = rand() % COLUMNAS + 1;
    buque1.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&buque1, tablero))
    {
        buque1.pos_X = rand() % FILAS + 1;
        buque1.pos_Y = rand() % COLUMNAS + 1;
        buque1.sentido = rand() % 2 == 0 ? 'h' : 'v';
    }

    colocarBarcoEnTablero(&buque1, tablero);
    
    // Colocar buque2
    buque2.longitud = 4;
    buque2.pos_X = rand() % FILAS + 1;
    buque2.pos_Y = rand() % COLUMNAS + 1;
    buque2.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&buque2, tablero))
    {
        buque2.pos_X = rand() % FILAS + 1;
        buque2.pos_Y = rand() % COLUMNAS + 1;
        buque2.sentido = rand() % 2 == 0 ? 'h' : 'v';
    }

    colocarBarcoEnTablero(&buque2, tablero);

    // Colocar submarino 1
    submarino1.longitud = 3;
    submarino1.pos_X = rand() % FILAS + 1;
    submarino1.pos_Y = rand() % COLUMNAS + 1;
    submarino1.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&submarino1, tablero)) {
        submarino1.pos_X = rand() % FILAS + 1;
        submarino1.pos_Y = rand() % COLUMNAS + 1;
        submarino1.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&submarino1, tablero);

    // Colocar submarino 2
    submarino2.longitud = 3;
    submarino2.pos_X = rand() % FILAS + 1;
    submarino2.pos_Y = rand() % COLUMNAS + 1;
    submarino2.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&submarino2, tablero)) {
        submarino2.pos_X = rand() % FILAS + 1;
        submarino2.pos_Y = rand() % COLUMNAS + 1;
        submarino2.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&submarino2, tablero);

    // Colocar submarino 3
    submarino3.longitud = 3;
    submarino3.pos_X = rand() % FILAS + 1;
    submarino3.pos_Y = rand() % COLUMNAS + 1;
    submarino3.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&submarino3, tablero)) {
        submarino3.pos_X = rand() % FILAS + 1;
        submarino3.pos_Y = rand() % COLUMNAS + 1;
        submarino3.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&submarino3, tablero);

    // Colocar crucero 1
    crucero1.longitud = 2;
    crucero1.pos_X = rand() % FILAS + 1;
    crucero1.pos_Y = rand() % COLUMNAS + 1;
    crucero1.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&crucero1, tablero)) {
        crucero1.pos_X = rand() % FILAS + 1;
        crucero1.pos_Y = rand() % COLUMNAS + 1;
        crucero1.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&crucero1, tablero);

    // Colocar crucero 2
    crucero2.longitud = 2;
    crucero2.pos_X = rand() % FILAS + 1;
    crucero2.pos_Y = rand() % COLUMNAS + 1;
    crucero2.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&crucero2, tablero)) {
        crucero2.pos_X = rand() % FILAS + 1;
        crucero2.pos_Y = rand() % COLUMNAS + 1;
        crucero2.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&crucero2, tablero);

    // Colocar crucero 3
    crucero3.longitud = 2;
    crucero3.pos_X = rand() % FILAS + 1;
    crucero3.pos_Y = rand() % COLUMNAS + 1;
    crucero3.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&crucero3, tablero)) {
        crucero3.pos_X = rand() % FILAS + 1;
        crucero3.pos_Y = rand() % COLUMNAS + 1;
        crucero3.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&crucero3, tablero);

    // Colocar crucero 4
    crucero4.longitud = 2;
    crucero4.pos_X = rand() % FILAS + 1;
    crucero4.pos_Y = rand() % COLUMNAS + 1;
    crucero4.sentido = rand() % 2 == 0 ? 'H' : 'V';

    while (!validarPosicion(&crucero4, tablero)) {
        crucero4.pos_X = rand() % FILAS + 1;
        crucero4.pos_Y = rand() % COLUMNAS + 1;
        crucero4.sentido = rand() % 2 == 0 ? 'H' : 'V';
    }

    colocarBarcoEnTablero(&crucero4, tablero);
    // Implementa lógica similar para los cruceros, el buque y el portaaviones.
}


void colocarBarcoEnTablero(struct Barco *barco, char tablero[FILAS][COLUMNAS]) {
    // Verificar si el barco está en posición horizontal o vertical
    if (barco->sentido == 'H') {
        for (int i = 0; i < barco->longitud; ++i) {
            if (i == 0)
            {
                tablero[barco->pos_X - 1][barco->pos_Y - 1] = 'B'; // 'B' para barcos
            }else
            {
                tablero[barco->pos_X - 1][barco->pos_Y + i - 1] = 'B'; // 'B' para barcos
            }
            
            
        }
    } else if (barco->sentido == 'V') {
        for (int i = 0; i < barco->longitud; ++i) {
            if (i == 0)
            {
                tablero[barco->pos_X - 1][barco->pos_Y - 1] = 'B'; // 'B' para barcos
            }
            
            tablero[barco->pos_X + i - 1][barco->pos_Y - 1] = 'B'; // 'B' para barcos
        }
    }
}

#include "../inc/main.h"

int main()
{
    while(1)
    {
        // limpiamos la pantalla
        printf("\033[H\033[J");

        // imprimimos el semaforo
        printSemaforo(0);
        sleep(1);

        // limpiamos pantalla
        printf("\033[H\033[J");

        // imprimimos el semaforo
        printSemaforo(1);
        sleep(1);

        // limpiamos pantalla
        printf("\033[H\033[J");

        // imprimimos el semaforo
        printSemaforo(2);
        sleep(1);
    }

    return 0;
}
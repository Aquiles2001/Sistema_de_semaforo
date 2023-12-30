#include "../inc/semaforo.h"

void printSemaforo(int color) {
    switch (color) {
        case 0:
            // Rojo
            printf("---\n|");
            printf("\033[0;31m");
            printf("█");
            printf("\033[0m");
            printf("|\n");
            printf("| |\n");
            printf("| |\n");
            printf("---\n");
            printf(" | \n");
            printf(" | \n");
            printf(" | \n");
            printf("---\n");
            break;

        case 1:
            // Amarillo
            printf("---\n");
            printf("| |\n|");
            printf("\033[0;33m");
            printf("█");
            printf("\033[0m");
            printf("|\n");
            printf("| |\n");
            printf("---\n");
            printf(" | \n");
            printf(" | \n");
            printf(" | \n");
            printf("---\n");
            break;

        case 2:
            // Verde
            printf("---\n");
            printf("| |\n");
            printf("| |\n");
            printf("|");
            printf("\033[0;32m");
            printf("█");
            printf("\033[0m");
            printf("|\n");
            printf("---\n");
            printf(" | \n");
            printf(" | \n");
            printf(" | \n");
            printf("---\n");
            break;

        default:
            printf(" ");
            break;
    }
}
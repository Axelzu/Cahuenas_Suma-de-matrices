#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];
    srand(time(NULL));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz1[i][j] = rand() % 101;
            matriz2[i][j] = rand() % 101;
        }
    }

    return 0;
}
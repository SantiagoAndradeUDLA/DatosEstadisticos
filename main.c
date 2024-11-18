#include <stdio.h>
#include "funciones.h"


int main() {
    const int tamano = 10;
    float numeros[tamano];
    float numordenados[tamano];
    float min, max, mediana, media, moda;

    printf("Ingrese 10 nums:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Num %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // funciones
    ordenarArreglo(numeros, numordenados, &min, &max, &mediana, tamano);
    mediaymoda(numeros, tamano, &media, &moda);

    // Resultados
    printf("\nResultados:\n");
    printf("Minimo: %.2f\n", min);
    printf("Maximo: %.2f\n", max);
    printf("Mediana: %.2f\n", mediana);
    printf("Media: %.2f\n", media);
    printf("Moda: %.2f\n", moda);

 

    return 0;
}


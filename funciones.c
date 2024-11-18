#include <stdio.h>

void ordenarArreglo(float numeros[], float numordenados[], 
                    float *min, float *max, float *mediana, 
                    int tamano) {
    // Copiar nums array original
    for (int i = 0; i < tamano; i++) {
        numordenados[i] = numeros[i];
    }

    // BUBBLE SORT
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (numordenados[j] > numordenados[j + 1]) {
                // Intercambiamos en orden
                float temp = numordenados[j];
                numordenados[j] = numordenados[j + 1];
                numordenados[j + 1] = temp;
            }
        }
    }

    *min = numordenados[0];
    *max = numordenados[tamano - 1];

    // Calculamos la mediana
    if (tamano % 2 == 0) {
        *mediana = (numordenados[tamano / 2 - 1] + numordenados[tamano / 2]) / 2;
    } else {
        *mediana = numordenados[tamano / 2];
    }
}


void mediaymoda(float numeros[], int tamano, float *media, float *moda) {
    float suma = 0;
    int maxFrecuencia = 0;
    float modaActual = 0;

    for (int i = 0; i < tamano; i++) {
        suma += numeros[i];
        int frecuencia = 0;

        for (int j = 0; j < tamano; j++) {
            if (numeros[i] == numeros[j]) {
                frecuencia++;
            }
        }

        if (frecuencia > maxFrecuencia) {
            maxFrecuencia = frecuencia;
            modaActual = numeros[i];
        }
    }

    *media = suma / tamano;
    *moda = modaActual;
}

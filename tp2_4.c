#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"}; 

typedef struct { 
    int velocidad;  // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio;    // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu;     // Tipo de procesador (apuntador a cadena de caracteres) 
} compu; 

void cargarStruct (compu arre[], int num);
void mostrar(compu arre[], int num);

int main(){
    srand(time(NULL));
    compu arre[M];
    cargarStruct(arre, M);
    mostrar(arre, M);

    return 0;
}

void cargarStruct (compu arre[], int num){
    for (int i = 0; i < num; i++)
    {
        arre[i].velocidad = rand() % 3 + 1;
        arre[i].anio = rand() % 10 + 2015;
        arre[i].cantidad_nucleos = rand() % 8 +1;
        arre[i].tipo_cpu = tipos[rand() % 6];
    }
}


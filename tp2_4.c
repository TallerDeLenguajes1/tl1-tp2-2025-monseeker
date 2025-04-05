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
void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);

int main(){
    srand(time(NULL));
    compu arre[M];
    cargarStruct(arre, M);
    listarPCs(arre, M);
    mostrarMasVieja(arre, M);

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

void listarPCs(compu pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("Velocidad: %d \n", pcs[i].velocidad);
        printf("Anio: %d \n", pcs[i].anio);
        printf("Nucleos: %d \n", pcs[i].cantidad_nucleos);
        printf("Tipo: %s \n", pcs[i].tipo_cpu);
        printf("\n\n");
    }
}

void mostrarMasVieja(compu pcs[], int cantidad){
    int j=0, aux = 2024;

    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < aux)
        {
            aux = pcs[i].anio;
            j=i;
        }
    }
    
    printf("Auto mas viejo:\n");
    printf("Velocidad: %d \n", pcs[j].velocidad);
    printf("Anio: %d \n", pcs[j].anio);
    printf("Nucleos: %d \n", pcs[j].cantidad_nucleos);
    printf("Tipo: %s \n", pcs[j].tipo_cpu);
    printf("\n\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
} typedef compu;

void cargarArregloPC(compu *p);
void mostrarArregloPC(compu *p);
void mostrarPCMasVieja(compu *p);
void mostrarPCMayorVelocidad(compu *p);

int main(){

    //DEFINICION DEL ARREGLO DE ESTRUCTURA
    compu arregloPC[MAX], *puntero;
    puntero = arregloPC;


    cargarArregloPC(puntero);
    mostrarArregloPC(puntero);
    mostrarPCMasVieja(puntero);
    mostrarPCMayorVelocidad(puntero);


    return 0;

}

void cargarArregloPC(compu *p) {
    srand (time(NULL));
    char *tipos[6] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < MAX; i++) {
        p->velocidad = rand() % 3 + 1;
        p->anio = rand() % 9 + 2015 ;
        p->cantidad = rand() % 8 + 1;
        p->tipo_cpu = tipos[rand() % 6];

        p++;
    }
}

// Función que presente la lista de las PC, cada una con sus características.
void mostrarArregloPC(compu *p){

    printf("\nLISTA DE LAS PC:");
    for (int i = 0; i < MAX; i++) {

        printf("\n\nCARACTERISTICAS PC [%d]", i + 1);
        printf("\nVelocidad de procesamiento en GHz: %d", p->velocidad);
        printf("\nAnio de fabricacion: %d", p->anio );
        printf("\nTipo de procesador: %s", p->tipo_cpu );
        printf("\nCantidad de nucleos: %d", p->cantidad);

        p++;
    }
}

void mostrarPCMasVieja(compu *p){ 
    int indiceMasViejo, auxAnio;
    indiceMasViejo = 0;
    auxAnio = p->anio;

    for (int i = 0; i < MAX; i++) { 

        if ( p[i].anio < auxAnio ) {

            indiceMasViejo = i;
            auxAnio = p[i].anio;

        }
    }

    printf("\n\nPC MAS VIEJA [%d]", indiceMasViejo + 1);
    printf("\nVelocidad de procesamiento en GHz: %d", p[indiceMasViejo].velocidad);
    printf("\nAnio de fabricacion: %d", p[indiceMasViejo].anio );
    printf("\nTipo de procesador: %s", p[indiceMasViejo].tipo_cpu );
    printf("\nCantidad de nucleos: %d", p[indiceMasViejo].cantidad);
}


void mostrarPCMayorVelocidad(compu *p){ 

    int indice, aux;
    indice = 0;
    aux = p->velocidad;

    for (int i = 0; i < MAX; i++) { 

        if ( p[i].velocidad > aux ){

            indice = i;
            aux = p[i].velocidad;

        }   
    }

    printf("\n\nPC MAYOR VELOCIDAD [%d]", indice + 1);
    printf("\nVelocidad de procesamiento en GHz: %d", p[indice].velocidad);
    printf("\nAnio de fabricacion: %d", p[indice].anio );
    printf("\nTipo de procesador: %s", p[indice].tipo_cpu );
    printf("\nCantidad de nucleos: %d", p[indice].cantidad);
}


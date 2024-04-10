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

void cargarArregloPC(compu *p,int cant);


int main(){

    //DEFINICION DEL ARREGLO DE ESTRUCTURA
    compu arregloPC[MAX], *puntero;
    puntero = arregloPC;

    cargarArregloPC(puntero,MAX);

    return 0;

}

void cargarArregloPC(compu *p,int cant)
{
    srand (time(NULL));
    char *tipos[6] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < cant; i++)
    {
        p->velocidad = rand() % 3 + 1;
        p->anio = rand() % 9 + 2015 ;
        p->cantidad = rand() % 8 + 1;
        p->tipo_cpu = tipos[rand() % 6];

        p++;
    }
}
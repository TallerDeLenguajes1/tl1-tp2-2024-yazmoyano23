#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){

    int i;
    double vt[N];
    double *p;
    p = vt;
    

    for(i = 0; i < N; i++)
    {
        *(p + i) = 1 + rand()%100;
        printf(" %.2f ", *(p + i));
    }
    return 0;
}

//Buff[1] //equivale a *(Buff + 1) 
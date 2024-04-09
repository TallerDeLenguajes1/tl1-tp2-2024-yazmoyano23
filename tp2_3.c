#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){

    int mt[N][M];
    int *puntero;
    puntero = &mt[0][0] ;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)  
        {
            *(puntero + (i * M + j)) = 1 + rand()%100; // num[i][j] = *(ptr + (i * no_of_cols + j)) 
            printf("%4d ", *(puntero + (i * M + j)));
        }
        printf("\n");
        
    }

    return 0;
}

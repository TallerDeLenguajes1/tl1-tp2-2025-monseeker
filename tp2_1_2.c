#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double vt[N];
    for(i = 0;i<N; i++){
        *(vt + i)=1+rand()%100;

        //recorro el arreglo con notacion indexada
        printf("%f \n", *(vt+i));
    }

    return 0;
}
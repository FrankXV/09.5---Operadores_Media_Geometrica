/* Media Geometrica de 3 numeros */


#include <iostream>
#include <stdio.h>
#include "math.h"

int main() {
    double n1, n2, n3, multi, raiz = (1.0/3.0), media_geometrica; // que raiz sea 1.0/3.0, denota que es una raiz cbica, si fuera otra potencia como por ejemplo raiz a la 4 seria 1.0/4.0

    printf("digite los 3 numeros a los cuales les sacara la media geometrica: \n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);


    multi = n1 * n2 * n3;
    media_geometrica = pow(multi,raiz);

    printf("La Media geometrica de los 3 numeros correspondienmtes es: %lf", media_geometrica);

    return 0;



}

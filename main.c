#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "index.h"

int main( int argc, char ** argv)
{
    printf("Bienvenue sur la calculatrice de fonction.\n");

    int preValeur = 0;//prend en valeur le xcube
    int secValeur = 0;//prend en valeur le xcarre
    int troiValeur = 0; //prend la valeur de x
    int quaValeur = 0;//prend en valeur le reste   

    entrerFonction(&preValeur, &secValeur, &troiValeur, &quaValeur);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "index.h"


void entrerFonction(int *preValeur, int *secValeur, int *troiValeur, int *quaValeur)
{ 
    printf("f(x)= ...*x^3 + ...*x^2 + ...*x + ... \n");

    scanf("%d", preValeur);//recupere la valeur au cube entre par l'utilisateur
    printf("f(x)= %d*x^3 + ...*x^2 + ...*x + ... \n", *preValeur);

    scanf("%d", secValeur);//recupere la valeur au carre entre par l'utilisateur
    printf("f(x)= %d*x^3 + %d*x^2 + ...*x + ... \n", *preValeur, *secValeur);


    scanf("%d", troiValeur);//recupere la valeur par x entre par l'utilisateur
    printf("f(x)= %d*x^3 + %d*x^2 + %d*x + ... \n", *preValeur, *secValeur, *troiValeur);

    
    scanf("%d", quaValeur);//recupere la valeur derniere entre par l'utilisateur
    printf("f(x)= %d*x^3 + %d*x^2 + %d*x + %d \n", *preValeur, *secValeur, *troiValeur, *quaValeur);//affiche la fonction.
}

int afficherAxes();

int calcul();

int fonction();
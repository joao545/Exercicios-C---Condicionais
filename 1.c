#include <stdio.h>
#include <stdlib.h>

/*
1. Faca um programa que receba dois numeros e mostre qual deles e o maior
*/

int main(){

    int a, b;

    //Lê e escreve os números.
    printf("Escreva os numeros: \n");
    scanf("%d %d", &a, &b);
    printf("Numeros: %d e %d \n", a, b);

    //condicao
    if(a > b){
        printf("Numero A e maior que B.");
    }
    else if (b > a){
        printf("Numero B e maior que A.");
    }
    else{
        printf("Os dois numeros sao iguais.");
    }

    return 0;
}
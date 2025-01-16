#include <stdio.h>
#include <stdlib.h>

/*
Faca um programa que receba um numero inteiro e veriﬁque se este numero e par oumımpar.
*/

int main(){

    int numero;
    printf("Escreva um numero: \n");
    scanf("%d", &numero);
    printf("Numero: %d \n", numero);


    if(numero %  2 == 0){
        printf("O numero e par.");
    }
    else{
        printf("O numero e impar.");
    }


    return 0;
}
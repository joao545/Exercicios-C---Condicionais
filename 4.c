#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
4. Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
--> O numero digitado ao quadrado
--> A raiz quadrada do numero digitado
*/

int main(){

    float numero;
    printf("Escreva um numero: \n");
    scanf("%f", &numero);
    printf("Numero: %f \n", numero);


    if(numero > 0){
        float quadrado = pow(numero, 2);
        float raiz = sqrt(numero);
        printf("Numero %f ao quadrado: %f \n", numero, quadrado);
        printf("Raiz quadrada do numero %f: %f", numero, raiz);
    }
    else{
        printf("Numero invalido!");
    }

    return 0;
}
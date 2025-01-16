#include <stdio.h>
#include <stdlib.h>

/*
19. Faca um programa para verificar se um determinado numero inteiro e divisıvel por 3 ou
5, mas nao simultaneamente pelos dois
*/

int main(){

    //Ler e escrever o numero inteiro
    int numero;
    printf("Escreva um numero: ");
    scanf("%d", &numero);
    printf("Numero inteiro: %d \n", numero);

    //Verificar se o numero e divisivel por 3 ou 5 
    if(numero % 3 == 0){
        printf("Numero e divisivel por 3.");
    }
    else if(numero % 5 == 0){
        printf("Numero e divisivel por 5.");
    }
    else{
        printf("Numero invalido");
    }

    return 0;
}
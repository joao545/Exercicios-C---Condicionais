#include <stdio.h>
#include <stdlib.h>

/*
7. Faca um programa que receba dois numeros e mostre o maior.Se por acaso, os dois numeros forem iguais, imprima a mensagem Numeros  iguais.
*/

int main(){

    //Lendo e escrevendo as variáveis
    int a, b;
    printf("Escreva dois numeros: \n");
    scanf("%d %d", &a, &b);
    printf("Numeros A = %d e B = %d \n", a, b);

    //Condicionais
    if(a >b){   //Mostra se A for maior que B.
        printf("Numero A = %d e maior que B = %d", a, b);
    }
    else if(b >a){  //Mostra se B for maior que A.
        printf("Numero B = %d e maior que A = %d", b, a);
    }
    else{   //Mostra se A e B são números iguais.
        printf("Numero A = %d e numero B = %d sao iguais.", a, b);
    }

    return 0;
}
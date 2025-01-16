#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
12. Ler um numero inteiro. Se o numero lido for negativo, escreva a mensagem “Numero
invalido”. Se o numero for positivo, calcular o logaritmo deste numero
*/

int main(){

    //Variável do inteiro x e y para calcular o logaritmo.
    double x = 1000;
    double y;


    if(x < 0){      //Se x for menor que 0, o número é inválido.
        printf("Numero invalido!");
    }
    else if(x > 0){     //Se x for maior que 0 calcular calcular logaritmo de base normal do número.
        y = log(x);
        printf("log(%.2f) = %.2f \n", x, y);
    }

    return 0;
}
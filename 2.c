#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2. Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz quadrada do numero. 
Se o numero for negativo, mostre uma mensagem dizendo que o numero e invalido.
*/

int main(){

    //Lendo e imprimindo o número.
    float numero;
    printf("Escreva um numero: \n");
    scanf("%f", &numero);
    printf("Numero: %f \n", numero);


    //Se for positivo calcular a raiz quadrada.
    if(numero > 0){
        float raiz = round(sqrt(numero));
        printf("Raiz quadrada do numero %f: %f", numero, raiz);
    }
    else //Se for negativo imprimir "Número inválido!"
    {
        printf("Numero invalido!");
    }


    return 0;
}
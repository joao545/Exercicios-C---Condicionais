#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
3. Leia um numero real. 
Se o numero for positivo imprima a raiz quadrada. 
Do contrario, imprima o numero ao quadrado.
*/

int main(){

    //Lendo e imprimindo o numero.
    float numero;
    printf("Escreva um numero: \n");
    scanf("%f", &numero);
    printf("Numero: %f \n", numero);

    //Condicional
    if(numero > 0){ 
        float raiz = sqrt(numero);  //Se o número for positivo calcular a raiz quadrada do mesmo.
        printf("Raiz quadrada do numero %f: %f", numero, raiz);
    }
    else{
        float quadrado = pow(numero, 2);  //Se o número for negativo pegar o quadrado do número.
        printf("Numero %f ao quadrado: %f", numero, quadrado);
    }

    return 0;
}
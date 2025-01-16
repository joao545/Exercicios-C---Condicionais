#include <stdio.h>
#include <stdlib.h>

/*
6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, assim como a diferenca existente entre ambos.
*/

int main(){

    //Lendo e escrevendo os numeros.
    int a, b;
    printf("Escreva dois numeros: \n");
    scanf("%d %d", &a, &b);
    printf("Numeros: %d e %d \n", a, b);

    int subtracao = a - b;

    //Condicao
    if(a > b){  //Se A for maior que B mostrar "A" e mostrar diferença entre A e B.
        printf("Numero maior e A: %d \n", a);
        printf("Diferenca entre A e B: %d", subtracao);
    }
    else if (b > a) //Se B for maior que A mostrar "B" e mostrar diferença entre A e B.     
    {
        printf("Numero maior e B: %d \n", b);
        printf("Diferenca entre A e B: %d", subtracao);
    }
    

    return 0;
}
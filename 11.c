#include <stdio.h>
#include <stdlib.h>

/*11. Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos.
 Por exemplo, ao numero 251 corresponder ao valor 8 (2 + 5 + 1). 
 Se o numero lido nao for maior do que zero, o programa terminar a com a mensagem “Numero invalido”.*/

int main(){

    //Variável número e soma = 0 para definir o loop
    int numero, soma = 0;
    
    //Escreve e imprime o inteiro.
    printf("Escreva um inteiro: \n");
    scanf("%d", &numero);
    printf("Numero: %d \n", numero);

    //Se numero > 0 executa o loop e mostra a soma dos algarismos.
    if(numero > 0){
        while(numero > 0){
        soma = soma + numero%10;
        numero = numero / 10;
    }
    printf("A soma dos algarismos e: %d", soma);
    }
    else{   //Caso contrário imprime na tela que o número é inválido.
        printf("Numero invalido.");
    }


    return 0;
}
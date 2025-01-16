#include <stdio.h>
#include <stdlib.h>

/*
21. Escreva o menu de opcoes abaixo. Leia a opcao do usuario e execute a operacao esco-
lhida. Escreva uma mensagem de erro se a opcao for invalida.
Escolha a opcao:
1- Soma de 2 numeros.
2- Diferenca entre 2 numeros (maior pelo menor).
3- Produto entre 2 numeros.
4- Divisao entre 2 numeros (o denominador nao pode ser zero).
Opcao
*/

int main(){

    //Menu de opcoes.
    printf("Escolha a opcao: \n");
    printf("1- Soma de 2 numeros. \n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor). \n");
    printf("3- Produto entre 2 numeros. \n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero) \n.");

    //Ler e escrever a opcao.
    printf("Escolha uma opcao \n");
    int opcao;
    scanf("%d", &opcao);
    printf("Opcao escolhida: %d \n", opcao);

    //Condicao escolhida para cada condicao.
    if(opcao == 1){     //1- Soma de 2 numeros.
        printf("Digite os numeros: \n");
        int numero1, numero2;
        scanf("%d %d", &numero1, &numero2);
        int adicao = numero1 + numero2;
        printf("Soma da adicao = %d", adicao);
    }
    else if(opcao == 2){    //2- Diferenca entre 2 numeros (maior pelo menor).
        printf("Digite os numeros: \n");
        int numero1, numero2;
        scanf("%d %d", &numero1, &numero2);
        if(numero1 > numero2){
        printf("Valor 'x': %d e maior que valor 'y': %d \n", numero1, numero2);
        printf("soma da diferenca: %d - %d = %d", numero1, numero2, numero1 - numero2);
        }
        else if (numero2 > numero1){
        printf("Valor 'y': %d e maior que valor 'x': %d \n", numero2, numero1);
        printf("soma da diferenca: %d - %d = %d", numero2, numero1, numero2 - numero1);
        }
    }
    else if(opcao == 3){    //3- Produto entre 2 numeros.
        printf("Digite os numeros: \n");
        int numero1, numero2;
        scanf("%d %d", &numero1, &numero2);
        int produto = numero1 * numero2;
        printf("soma do produto: %d", produto);
    }
    else if(opcao == 4){    //4- Divisao entre 2 numeros (o denominador nao pode ser zero)
        printf("Digite os numeros: \n");
        float numerador, denominador;
        scanf("%d %d", &numerador, &denominador);
        if(denominador == 0){
            printf("Nao pode ser zero!");
        }
        else if(denominador != 0){
            printf("soma da divisao: %.2f / %.2f = %.2f", numerador, denominador, numerador / denominador);
        }
    }
    else{
        printf("Opcao Invalida.");
    }

    return 0;
}
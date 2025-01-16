#include <stdio.h>
#include <stdlib.h>

/*
18. Faca um programa que mostre ao usuario um menu com 4 opcoes de operacoes matematicas
(as basicas, por exemplo). O usuario escolhe uma das opcoes e o seu programa
entao pede dois valores numericos e realiza a operacao, mostrando o resultado e
saindo.
*/


int main(){

    //Lista das operações matemáticas;
    printf("    Operacoes Matematicas:    \n");
    printf("    1 => Adicao    \n");
    printf("    2 => Subtracao   \n");
    printf("    3 => Multiplicacao    \n");
    printf("    4 => Divisao    \n");

    //Ler e escrever o número de uma das operações matemáticas.
    printf("Escolha um numero: ");
    int numero;
    scanf("%d", &numero);
    
    //Condições
    if(numero == 1){  //Se numero for igual a 1, o programa vai fazer uma soma.
        printf("Escreva os numeros: ");
        int x, y;
        scanf("%d %d", &x, &y);
        int adicao = x + y;
        printf("Soma da adicao: %d", adicao);
    }
    else if(numero == 2){   //Se numero for igual a 2, o programa vai fazer uma subtração.
        printf("Escreva os numeros: ");
        int x, y;
        scanf("%d %d", &x, &y);
        int subtracao = x - y;
        printf("Soma da subtracao: %d", subtracao);
    }
    else if(numero == 3){   //Se numero for igual a 3, o programa vai fazer uma multiplicação.
        printf("Escreva os numeros: ");
        int x, y;
        scanf("%d %d", &x, &y);
        int multiplicacao = x * y;
        printf("Soma da multiplicacao: %d", multiplicacao);
    }
    else if(numero == 4){   //Se numero for igual a 4, o programa vai fazer uma divisão.
        printf("Escreva os numeros: ");
        float x, y;
        scanf("%f %f", &x, &y);
        float divisao = x / y;
        printf("Soma da divisao: %.2f", divisao);
    }
    else{   //Caso seja um número que não esteja na lista de operações, o programa vai retornar com a mensagem: "Numero invalido!
    
        printf("Numero invalido!");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto  ́e, domingo se 1, segunda-feira se 2, e
assim por diante.
*/


int main(){

    //Lista mostrando os dias da semana.
    printf("    Dias da Semana:    \n");
    printf("    1 => Domingo    \n");
    printf("    2 => Segunda - Feira   \n");
    printf("    3 => Terca - Feira    \n");
    printf("    4 => Quarta - Feira    \n");
    printf("    5 => Quinta - Feira    \n");
    printf("    6 => Sexta - Feira    \n");
    printf("    7 => Sabado    \n");

    //Escreve e imprime um inteiro.
    printf("Escolha um numero: \n");
    int numero;
    scanf("%d", &numero);
    printf("Numero: %d\n", numero);

    //Switch case, dependendo do número escrito vai retornar um dia da semana.
    switch(numero){
        case 1:
        printf("Domingo");
        break;
        
        case 2:
        printf("Segunda - Feira");
        break;
        
        case 3:
        printf("Terca - Feira");
        break; 

        case 4:
        printf("Quarta - Feira");
        break; 

        case 5:
        printf("Quinta - Feira");
        break; 

        case 6:
        printf("Sexta - Feira");
        break;

        case 7:
        printf("Sabado");
        break;
    }

    return 0;
}
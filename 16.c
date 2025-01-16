#include <stdio.h>
#include <stdlib.h>

/*
16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mes
correspondente a este numero. Isto e, janeiro se 1, fevereiro se 2, e assim por diante.
*/

int main(){

//Lista mostrando os meses do ano.
    printf("    Meses do Ano:    \n");
    printf("    1 => Janeiro    \n");
    printf("    2 => Fevereiro   \n");
    printf("    3 => Marco    \n");
    printf("    4 => Abril    \n");
    printf("    5 => Maio    \n");
    printf("    6 => Junho    \n");
    printf("    7 => Julho    \n");
    printf("    8 => Agosto    \n");
    printf("    9 => Setembro    \n");
    printf("    10 => Outubro    \n");
    printf("    11 => Novembro    \n");
    printf("    12 => Dezembro    \n");

    //Escreve e imprime um inteiro.
    printf("Escolha um numero: \n");
    int numero;
    scanf("%d", &numero);
    printf("Numero: %d\n", numero);

    //Switch case, dependendo do número escrito vai retornar um mês do ano.
    switch(numero){
        case 1:
        printf("Janeiro");
        break;
        
        case 2:
        printf("Fevereiro");
        break;
        
        case 3:
        printf("Marco");
        break; 

        case 4:
        printf("Abril");
        break; 

        case 5:
        printf("Maio");
        break; 

        case 6:
        printf("Junho");
        break;

        case 7:
        printf("Julho");
        break;

        case 8:
        printf("Agosto");
        break;

        case 9:
        printf("Setembro");
        break;

        case 10:
        printf("Outubro");
        break;

        case 11:
        printf("Novembro");
        break;

        case 12:
        printf("Dezembro");
        break;
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
    _____________________________
   |Categoria Idade             |   
    -----------------------------
    |Infantil A 5 a 7           |
    |Infantil B 8 a 10          |
    |Juvenil A 11 a 13          |
    |Juvenil B 14 a 17          |
    |Senior maiores de 18 anos  |
    -----------------------------

*/

int main(){

    //Ler e escrever a idade do nadador.
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    printf("Idade do nadador: %d \n\n", idade);

    //Classificao por idade do nadador.
    if(idade >= 5 && idade <= 7){
        printf("Nadador esta na Categoria Infantil A!");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Nadador esta na Categoria Infantil B!");
    }
    else if(idade >= 11 && idade <= 13){
        printf("Nadador esta na Categoria Juvenil A!");
    }
    else if(idade >= 14 && idade <= 17){
        printf("Nadador esta na Categoria Juvenil B!");
    }
    else if(idade > 18){
        printf("Nadador esta na Categoria Senior!");
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Faca um programa em que o usuario entre com o valor e o estado destino do
produto e o programa retorne o preco final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado nao for valido, mostrar uma mensagem
de erro.
*/

int main(){

    //Escrever e ler o valor e o destino destino.
    int valor;
    char estado_destino[50];  //Escolher entre MG, SP, RJ e MS.
    printf("Digite o valor e o estado destino: ");
    
    scanf("%d", &valor);
    printf("Valor: %d \n", valor);

    fflush(stdin);
    gets(estado_destino);
    printf("Estado destino: %s \n", estado_destino);

    //Condicao preco final dependendo do estado em que sera vendido.
    if(strcmp(estado_destino, "MG") == 0 || strcmp(estado_destino, "Minas Gerais") == 0){
        int imposto = valor * 7 / 100;
        printf("Preco final do produto: %d", imposto);
    }
    else if(strcmp(estado_destino, "SP") == 0 || strcmp(estado_destino, "Sao Paulo") == 0){
        int imposto = valor * 12 / 100;
        printf("Preco final do produto: %d", imposto);
    }
    else if(strcmp(estado_destino, "RJ") == 0 || strcmp(estado_destino, "Rio de Janeiro") == 0){
        int imposto = (valor * 15) /100;
        printf("Preco final do produto: %d", imposto);
    }
    else if(strcmp(estado_destino, "MS") == 0 || strcmp(estado_destino, "Mato Grosso do Sul") == 0){
        int imposto = (valor * 8) / 100;
        printf("Preco final do produto: %d", imposto);
    }
    else{
        printf("Estado nao disponivel!");
    }

    return 0;
}
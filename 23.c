#include <stdio.h>
#include <stdlib.h>

/*
23. Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se
for divisıvel por 400 ou se for divisıvel por 4 e nao for divisıvel por 100. Por exemplo:
1988, 1992, 1996
*/

int main(){
    //Ler e escrever o ano
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Ano: %d \n", ano);

    //Condicao se o ano é bissexto
    if(ano % 400 == 0 || ano % 4 == 0){
        printf("Ano bissexto!");
    } 
    else{
        printf("Ano nao bissexto.");
    }


    return 0;
}
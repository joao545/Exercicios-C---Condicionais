#include <stdio.h>
#include <stdlib.h>

/*
26. Leia a distancia em Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:

________________________________
||CONSUMO (Km/l) MENSAGEM     ||
||menor que 8 Venda o carro!  ||
||entre 8 e 14 Economico!     ||
||maior que 12 Super economico||
--------------------------------
*/

int main(){

    //Escrever e ler a distancia em km e a quantidade de litros de gasolina consumidos por um carro em um percurso.
    int km, quantidade_litros;
    printf("Digite a distancia em km e a quantidade de litros consumidos pelo carro: ");
    scanf("%d %d", &km, &quantidade_litros);
    printf("Distancia percorrida: %d \n", km);
    printf("Litros de gasolina consumidos: %d \n\n", quantidade_litros);

    //Calculo consumo do carro em KM/l
    int consumo = km / quantidade_litros;
    printf("Consumo do carro em km/l: %d \n\n", consumo);

    //Condicoes do que fazer com o carro dependendo do consumo.
    if(consumo < 8){
        printf("Venda o carro!");
    }
    else if(consumo >= 8 && consumo <=14){
        printf("Economico!");
    }
    else if(consumo > 12){
        printf("Super economico!");
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
17. Faca um programa que calcule e mostre a  ́area de um trapezio. Sabe-se que:
Área do trapézio = (basemaior + basemenor) * altura / 2
Lembre-se a base maior e a base menor devem ser numeros maiores que zero
*/

int main(){

    //Variáveis definindo: base maior, menor e a altura do trapézio.
    float base_maior, base_menor, altura;

    //Escrever e imprimir as bases e a altura do trapézio.
    printf("Escreva as bases e a altura: \n");
    scanf("%f %f %f", &base_maior, &base_menor, &altura);
    printf("Base maior: %.2f, base menor: %.2f, altura: %.2f \n", base_maior, base_menor, altura);

    //Calculando a área do trapézio.
    float area_trapezio = (base_maior + base_menor) * altura / 2;

    //Se as bases do trapézio não forem maior que 0, não calcular a área do trapézio.
    if(area_trapezio > 0){
        printf("Area do trapezio: %.2f", area_trapezio);
    }
    else{   //Caso contrário as bases devem ser maiores que 0.
        printf("As bases devem ser maior que 0!");
    }


    return 0;
}
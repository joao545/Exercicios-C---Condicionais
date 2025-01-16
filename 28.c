#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
28. Faca um programa que leia tres numeros inteiros positivos e efetue o calculo de uma das
seguintes medias de acordo com um valor numerico digitado pelo usuario

(a) Geometrica: 3√ x ∗ y ∗ z
(b) Ponderada: x + 2∗y + 3∗z / 6
(c) Harmonica: 1 / 1/x + 1/y + 1/z
(d) Aritmetica: x + y + z / 3
*/

int main(){
    //Numeros inteiros.
    float x, y, z;

    //Lista de medias
    printf("    Selecione uma media!    \n");
    printf("        1 - Geometrica    \n");
    printf("        2 - Ponderada    \n");
    printf("        3 - Harmonica    \n");
    printf("        4 - Aritmetica    \n\n");

    //Escolha um número de acordo com a lista de médias
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);


    //Ler e escrever os numeros inteiros
    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("x = %.2f, y = %.2f, z = %.2f \n\n", x, y, z);


    //Calculos de cada media
    //Média Geométrica - Obs: a Média Geométrica é a raiz cúbica do produto dos coeficientes: x, y e z.
    float produto_coeficientes = x * y * z;
    float raiz_cubica = cbrt(x * y * z);

    //Média Ponderada
    float media_ponderada = (x + 2) * (y + 3) * z / 6;

    //Média Harmônica
    float media_harmonica = 1 / (1 / x + 1 / y + 1 / z);

    //Média Aritmética
    float media_aritmetica = (x + y + z) / 3;

    //Média a ser calculada dependendo do número escolhido da lista.
    switch(numero){
        case 1:
        printf("Produto dos coeficientes: %.2f \n", produto_coeficientes);
        printf("Media geometrica(raiz cubica): %.2f \n\n", raiz_cubica);
        break; 
        
        case 2:
        printf("Media Ponderada: %.2f \n\n", media_ponderada);
        break;

        case 3:
        printf("Media Harmonica: %.2f \n\n", media_harmonica);
        break;

        case 4:
        printf("Media Aritmetica: %.2f", media_aritmetica);
        break;
    }

    return 0;
}
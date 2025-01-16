#include <stdio.h>
#include <stdlib.h>

/*
10. Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes formulas (onde h corresponde a altura):
*/

int main(){

    //variáveis para definir altura e sexo do fulano(a)
    float altura;
    const char sexo;
    
    //Escreve e imprime a altura e o sexo do fulano.
    printf("Escreva a altura e o sexo do fulano(a): \n");
    fflush(stdin);
    scanf("%f %c", &altura, &sexo);
    printf("Altura do fulano(a): %.2f, sexo do fulano(a): %c \n", altura, sexo);

    //variáveis contendo a fórmula que calcula o peso ideal, tanto mulher quanto homem.
    float PesoIdeal_homens = (72.7 * altura) - 58;
    float PesoIdeal_mulheres = (62.1 * altura) - 44.7;


    if(sexo == 'M'){    //Se for do sexo masculino usar primeira fórmula.
        printf("Peso ideal do fulano seria: %.2f", PesoIdeal_homens);
    }
    else if(sexo == 'F'){   //Se for do sexo feminino usar segunda fórmula.
        printf("Peso ideal da fulana seria: %.2f", PesoIdeal_mulheres);
    }
    else{   //Se não for masculino e nem feminino definir como gênero não encontrado.
        printf("Genero nao encontrado.");
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
13. Faca um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e
a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a media do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovacao deve ser igual ou
superior a 60 pontos.
*/

int main(){


    float nota1, nota2, nota3;      //Nota de cada prova, sendo 3.
    float peso1 = 1, peso2 = 1, peso3 = 2;      //Peso de cada nota, usado pra calcular a média ponderada.

    //Escreve e imprime a nota.
    printf("Digite a nota: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Notas: %.2f, %.2f, %.2f \n", nota1, nota2, nota3);

    //Executa o cálculo da média ponderada com a seguinte fórmula: Mp = ((X1 * P1) + (X2 * P2) + (X3 * P3))... / (P1 + P2 + P3)..
    float media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    //Se media ponderada for maior que 8.0 o aluno é aprovado.
    if(media_ponderada > 8.0){
        printf("Media do aluno: %f", media_ponderada);
        printf("Aprovado!");
    }
    else if(media_ponderada < 8.0){  //Se media ponderada for menor que 8.0 o aluno é reprovado.
        printf("Media do aluno: %f", media_ponderada);
        printf("Nao aprovado!");
    }


    return 0;
}
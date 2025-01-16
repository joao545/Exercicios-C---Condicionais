#include <stdio.h>
#include <stdlib.h>

/*
14. A nota final de um estudante e calculada a partir de tres notas atribuidas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliacao semestral
e a um exame final. A media das tr ˆes notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratorio: 2; Avaliacao Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno esta reprovado (media entre 0 e 2,9), de
recuperacao (entre 3 e 4,9) ou se foi aprovado. Faca todas as verificacoes necessarias
*/

int main(){
    
    float nota1, nota2, nota3; //Variáveis definindo as notas das 3 provas.
    float peso1 = 2, peso2 = 3, peso3 = 5;  //Variáveis definindo o peso de cada avaliação, sendo 3.

    //Escreve e imprime as notas.
    printf("Escreva as notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Notas: %.2f, %.2f, %.2f \n", nota1, nota2, nota3);

    //Variável que calcula média ponderada ao aluno usando a fórmula:  Mp = ((X1 * P1) + (X2 * P2) + (X3 * P3))... / (P1 + P2 + P3)..
    float media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    //Se a média estiver entre 0 e 2.9, o aluno está reprovado.
    if(media_ponderada >= 0 && media_ponderada <= 2.9){
        printf("Media do aluno: %.2f \n", media_ponderada);
        printf("Aluno esta reprovado!");
    }
    else if(media_ponderada >= 3 && media_ponderada <= 4.9){ //Se a média estiver entre 3 e 4.9, o aluno vai estar de recuperação.
        printf("Media do aluno: %.2f \n", media_ponderada);
        printf("Aluno esta de recuperacao!");
    }
    else{   //Se média do aluno estiver acima de 5.0, ele vai estar aprovado.
        printf("Media do aluno: %.2f \n", media_ponderada);
        printf("Aluno esta aprovado!");
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
8. Faca um programa que leia 2 notas de um aluno, veriﬁque se as notas sao validas e exiba na tela a media destas notas.
Uma nota valida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser informado ao usuario e o programa termina.
*/

int main(){

    //Lendo e escrevendo as variáveis.
    float nota1, nota2;
    printf("Escreva as notas: \n");
    scanf("%f %f", &nota1, &nota2);
    printf("Notas: %f e %f \n", nota1, nota2);

    //Variável que calcula a média das notas.
    float media = (nota1 + nota2) / 2; 

    //Condição.
    if((nota1 >=0 && nota1 <=10) && (nota2 >=0 && nota2 <=10)){ //Verifica se as duas notas estão entre 0 e 10 e calcula a média delas. 
        printf("As notas sao validas \n");
        printf("Media das notas: %f", media);
    }
    else{   //Caso as notas não tiverem valor entre 0.0 e 10.0, elas vão ser inválidas.
        printf("Notas invalidas.");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
9. Leia o salario de um trabalhador e o valor da prestacao de um emprestimo.
Se o valor da prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso contrario imprima: Emprestimo concedido.
*/

int main(){

    //Lê os valores do salário e do empréstimo e imprime os dois.
    float salario, emprestimo;
    printf("Escreva o salario e o valor do emprestimo: \n");
    scanf("%f %f", &salario, &emprestimo);
    printf("Valor do salario: %f, valor do emprestimo: %f \n", salario, emprestimo);

    //Se o valor do empréstimo for maior que vinte por cento do salário, imprime: Empréstimo não concedido.
    if(emprestimo > (salario * 20) / 100){
        printf("Emprestimo nao concedido.");
    }
    else{   //Caso contrário vai imprimir: "Empréstimo concedido."
        printf("Emprestimo concedido.");
    }

    return 0;
}
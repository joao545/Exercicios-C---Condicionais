#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
29. Faca uma prova de matematica para criancas que estao aprendendo a somar numeros
inteiros menores do que 100. Escolha numeros aleatorios entre 1 e 100, e mostre na
tela a pergunta: qual e a soma de a + b, onde a e b sao os numeros aleatorios. Peca a
resposta. Faca cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
corretas, alem de quantas vezes o aluno acertou
*/

int main(){

    //Função dos números aleatórios
    int maximo = 100;
    int minimo = 1;

    int aleatorio_a = (rand() % (maximo - minimo + 1) + minimo);
    int aleatorio_b = (rand() % (maximo - minimo + 1) + minimo);
    printf("Numero aleatorio entre 1 e 100: %d \n", aleatorio_a);
    printf("Numero aleatorio entre 1 e 100: %d \n\n", aleatorio_b);

    //Perguntas
    float soma;
    printf("Qual e a soma de a + b?");
    float resposta = scanf("%f", &soma);

    if(soma == resposta){
        printf("Resposta: %.2f, correto!", aleatorio_a + aleatorio_b);
    }
    else if(soma != resposta){
        printf("Incorreto!");
    }


    return 0;
}
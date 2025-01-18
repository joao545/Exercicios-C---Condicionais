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

    srand(time(NULL));

    int i, acertos = 0;
    float a, b, soma, resposta;

    for(i = 0; i < 5; i++){
     a = rand() % 101;
     b = rand() % 101;

    soma = a + b;

    resposta = soma;

    printf("qual e a soma de %.2f + %.2f? \n", a, b);
    scanf("%f", &resposta);

    if(resposta != soma){
        printf("Resposta errada, a resposta e: %f", soma);
    }
    else{
        acertos++;
    }
    
    }
    printf("Voce acertou %d vezes.\n", acertos);


    return 0;
}
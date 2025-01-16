#include <stdio.h>
#include <stdlib.h>

/*
20. Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo
e, se forem, se ́e um triangulo escaleno, equilatero ou isoscele, considerando os seguin-
tes conceitos:
• O comprimento de cada lado de um triangulo e menor do que a soma dos outros
dois lados.
• Chama-se equilatero o triangulo que tem tres lados iguais.
• Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triangulo que tem os tres lados diferente
*/

int main(){

    //Ler e escrever o valor de cada lado do triangulo, sendo A, B e C.
    float A, B, C;
    printf("Escreva o valor de cada triangulo: \n");
    scanf("%f %f %f", &A, &B, &C);
    printf("Lado A: %.2f \n", A);
    printf("Lado B: %.2f \n", B);
    printf("Lado C: %.2f \n", C);

    //Condicao, se o triangulo e equilatero, isosceles ou escaleno
    if(A == B && B == C){ //Se os tres lados sao iguais, o triangulo e equilatero.
        printf("O triangulo e equilatero.");
    }
    else if(A == B || A == C || B == A || B == C || C == A || C == B){ // Se dois lados sao iguais, o triangulo e isosceles.
        printf("O triangulo e isosceles.");
    }
    else if(A != B && B != C){ //Se todos os lados sao diferentes, o triangulo e escaleno.
        printf("O triangulo e escaleno.");
    }
    else{
        printf("Nenhuma das opcoes.");
    }

    return 0;
}
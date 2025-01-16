#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
25. Calcule as raızes da equacao de 2o grau.

Lembrando que:
x = −b ±√∆ / 2a

Onde

∆ = B2 −4ac E ax2 + bx + c = 0 representa uma equacao de 2o grau.
A variavel a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Nao
 ́e equacao de segundo grau”.
• Se ∆ < 0, nao existe real. Imprima a mensagem Nao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz unica.
• Se ∆ ≥ 0, imprima as duas raızes reais
*/

int main(){

    //Ler e escrever os 3 coeficientes da equacao de segundo grau.

    
    float a, b, c;

    printf("Digite o valor de cada coeficiente: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Coeficiente a: %.2f \n", a);
    printf("Coeficiente b: %.2f \n", b);
    printf("Coeficiente c: %.2f \n\n", c);

    //Encontrar o delta usando os coeficientes encontrados.
    float delta = pow(b, 2) - 4 * a * c;
    
    printf("Valor de delta: %.2f \n\n", delta);

    //Preparando fórmula para encontrar as duas raízes da equação.
    //(x = −b ±√∆ / 2a) onde item1 é -b, item_delta é delta e item3 é 2a
    float item1 = -1 * b;
    float item_delta = delta;
    float item3 = 2 * a;
    printf("formula: -b(%.2f) +/ raiz de delta(%.2f) / 2.a(%.2f) \n\n", item1, delta, item3);

    //Encontrar as duas raizes da equação, xlinha (x1) e xduas linhas (x2)
    float x1 = (item1 + sqrt(delta)) / (2 * a);
    //printf("Primeira raiz (x - linha): %.2f \n", x1);

    float x2 = (item1 - sqrt(delta)) / (2 * a);
    //printf("Segunda raiz (x - duas linhas): %.2f \n", x2);

    //Condicoes
    if(delta < 0){
        printf("Nao existe raiz.");
    }
    else if(delta == 0){
        printf("Se o delta for igual a zero, a equacao tera somente um valor real(raiz unica) ou dois resultados iguais \n");
        printf("Primeira raiz (x - linha): %.2f \n", x1);
        printf("Segunda raiz (x - duas linhas): %.2f \n", x2);
    }
    else if(delta >= 0){
        printf("imprima as duas raızes reais");
        printf("Primeira raiz (x - linha): %.2f \n", x1);
        printf("Segunda raiz (x - duas linhas): %.2f \n", x2);
    }

    return 0;
}
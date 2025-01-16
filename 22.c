#include <stdio.h>
#include <stdlib.h>

/*
22. Leia a idade e o tempo de servico de um trabalhador e escreva se ele pode ou nao se
aposentar. As condicoes para aposentadoria sao
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main(){

    //Ler e escrever a idade e tempo de serviço do trabalhador.
    int idade, tempo_servico;
    printf("Digite idade e tempo de servico do fulano: \n");
    scanf("%d %d", &idade, &tempo_servico);
    printf("Fulano tem %d anos e trabalhou por %d. \n", idade, tempo_servico);

    //Condicoes para aposentadoria
    if(idade >= 65){    //Ter pelo menos 65 anos
        printf("Fulano aposentado!");
    }
    else if(tempo_servico >= 30){   //Ou ter trabalhado pelo menos 30 anos
        printf("Fulano aposentado!");
    }
    else if(idade >= 60 && tempo_servico >= 25){    //Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
        printf("Fulano aposentado!");
    }
    

    return 0;
}
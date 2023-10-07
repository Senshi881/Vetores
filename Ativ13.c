/*
Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon- tram o maior e o menor valor.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    float V[5], maiorV, menorV, maiorE, menorE;

    printf("Insira 5 vetores;\n");
    for(int i = 0; i < 5; i++){
        printf("Vetor %d: ", i);
        scanf("%f", &V[i]);
        while(getchar() != '\n');

        if(i == 0){
            maiorV = menorV = V[i];
        }
        if(V[i] > maiorV){
            maiorV = V[i];
            maiorE = i;
        }else if(V[i] < menorV){
            menorV = V[i];
            menorE = i;
        }
    }

    printf("\nO maior elemento e %.0f e se encontra na posicao %.0f dos vetores;",maiorV, maiorE);
    printf("\nO menor elemento e %.0f e se encontra na posicao %.0f dos vetores;",menorV, menorE);

    return 0;
}
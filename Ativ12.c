/*
Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, 
o menor e a média dos valores.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    float mediaQ = 0, V[5], maiorV = 0, menorV;

    printf("Insira 5 vetores;\n");
    for(int i = 0; i < 5; i++){
        printf("Vetor %d: ", i);
        scanf("%f", &V[i]);
        while(getchar() != '\n');

        if (i == 0) {
            maiorV = menorV = V[i];
        } else {
            if (V[i] < menorV) {
                menorV = V[i];
            }
            if (V[i] > maiorV) {
                maiorV = V[i];
            }
        }
        mediaQ += V[i];
    }
    float mediaT = mediaQ / 5;
    for(int i = 0; i < 5; i++){
        if(V[i] == maiorV){
            printf("Maior ");}
        if(V[i] == menorV){
            printf("Menor ");}
        printf("Vetor %d = %.0f;\n", i, V[i]);
        if(i == 4){printf("Media de todos os vetores: %.0f;", mediaT);}
    }

    return 0;
}
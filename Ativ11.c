/*
Faça um programa que preencha um vetor com 10 números reais, 
calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    float somaT = 0, negativosQ = 0, V[10];

    printf("Insira 10 vetores reais para mostrarmos a quantidade de numeros negativos e a soma dos numeros positivos desse vetor;\n");
    for(int i = 1; i < 11; i++){
        printf("Vetor %d: ", i);
        scanf("%f", &V[i - 1]);
        while(getchar() != '\n');

        if(V[i - 1] < 0){negativosQ++;}
        if(V[i - 1] > 0){somaT += V[i - 1];}
    }

    printf("A quantidade de elementos negativos e de %.0f e a soma de todos os positivos e de %.2f;", negativosQ, somaT);

    return 0;
}
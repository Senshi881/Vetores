/*
6. Faça um programa que receba do usuário um vetor com 10 posições. 
Em seguida deverá ser impresso o maior e o menor elemento do vetor.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int V[10], maiorV, menorV;

    printf("Insira 10 vetores para verificarmos qual e o menor e o maior numero;\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor %d: ", i);
        scanf("%d", &V[i]);
        while(getchar() != '\n');
        if(V[i] >= 0 && i == 0){
            maiorV = V[i];
        }else if(i == 0){
            menorV = V[i];
        }
        if(V[i] >= maiorV){
            maiorV = V[i];
        }else if(V[i] <= menorV){
            menorV = V[i];
        }
    }

    printf("\nO maior numero e %d enquanto o menor numero e %d respectivamente;", maiorV, menorV);

    return 0;
}
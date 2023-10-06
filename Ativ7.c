/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Imprima o vetor, o maior elemento e a posição que ele se encontra.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int V[10], maiorV, vetorP;

    printf("Insira 10 vetores para verificarmos qual e o maior elemento;\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor %d: ", i);
        scanf("%d", &V[i]);
        while(getchar() != '\n');
        if(V[i] >= 0 && i == 0){
            maiorV = V[i];
            vetorP = i;
        }
        if(V[i] >= maiorV){
            maiorV = V[i];
            vetorP = i;
        }
    }

    printf("\nO maior numero e %d e se encontra no vetor %d respectivamente;", maiorV, vetorP);

    return 0;
}
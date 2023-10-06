/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int V[6];

    printf("Insira 6 vetores para invertermos a ordem dos elementos;\n");
    for(int i = 0; i < 6; i++){
        printf("Vetor %d: ", i);
        scanf("%d", &V[i]);
        while(getchar() != '\n');
    }

    for(int i = 5; i > -1; i--){
        printf("\nVetor %d = %d", i, V[i]);
    }

    return 0;
}
/*
Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int V[10], pr,  v = -1;

    printf("Insira 10 vetores inteiros pares para invertermos a ordem dos vetores;\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor %d: ", i);
        scanf("%d", &pr);
        while(getchar() != '\n');
        if(pr % 2 == 0){
            v++;
            V[v] = pr;
        }else{
            printf("\nInsira apenas numeros pares;\n");
            i--;
        }
    }

    for(int i = 9; i > -1; i--){
        printf("\nVetor %d = %d", i, V[i]);
    }

    return 0;
}
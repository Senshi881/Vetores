/*
4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va- lores X e Y quaisquer correspondentes a 
duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>

int main(){
    int V[8], x, y;

    for(int i = 0; i < 8; i++){
        printf("Insira a posicao do Vetor %d: ", i);
        scanf("%d", &V[i]);
        while(getchar() != '\n');
    }

    printf("\nInsira a posicao X: ", x);
    scanf("%d", &x);
    while(getchar() != '\n');
    printf("\nInsira a posicao Y: ", y);
    scanf("%d", &y);
    while(getchar() != '\n');

    int soma = x + y;
    printf("X + Y = %d", soma);

    return 0;
}
/*
2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
#include <stdio.h>

int main(){
    int A[6];
    printf("Insira 6 Vetores;\nVetor 1 = ");
    scanf("%d", &A[0]);
    while(getchar() != '\n');
    printf("Insira 6 Vetores;\nVetor 2 = ");
    scanf("%d", &A[1]);
    while(getchar() != '\n');
    printf("Insira 6 Vetores;\nVetor 3 = ");
    scanf("%d", &A[2]);
    while(getchar() != '\n');
    printf("Insira 6 Vetores;\nVetor 4 = ");
    scanf("%d", &A[3]);
    while(getchar() != '\n');
    printf("Insira 6 Vetores;\nVetor 5 = ");
    scanf("%d", &A[4]);
    while(getchar() != '\n');
    printf("Insira 6 Vetores;\nVetor 6 = ");
    scanf("%d", &A[5]);
    while(getchar() != '\n');

    printf("Os vetores informados foram: \nA[1] = %d;\nA[2] = %d;\nA[3] = %d;\nA[4] = %d;\nA[5] = %d;\nA[6] = %d;", A[0], A[1], A[2], A[3], A[4], A[5]);

    return 0;
}
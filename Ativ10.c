/*
Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
*/
#include <stdio.h>
#include <string.h>

int main(){
    float mediaN, mediaT, V[15];

    printf("Insira 10 vetores inteiros pares para invertermos a ordem dos vetores;\n");
    for(int i = 1; i < 16; i++){
        printf("Vetor %d: ", i);
        scanf("%f", &V[i - 1]);
        while(getchar() != '\n');

        if(i > 1){mediaN += V[i - 1];} else{mediaN = 0;}
        printf("\nmediaN %f\n", mediaN);
        mediaT++;
    }
    float mediaF = (float)mediaN / (float)mediaT;

    printf("A media da nota de %f alunos e de: %.1f", mediaT, mediaF);

    return 0;
}
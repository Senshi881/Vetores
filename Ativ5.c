/*
5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int V[10], pr,  v = -1;

    printf("Insira 10 vetores para separarmos numeros pares;\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor %d: ", i);
        scanf("%d", &pr);
        while(getchar() != '\n');
        if(pr % 2 == 0){
            v++;
            V[v] = pr;
        }
    }

    printf("\nSao %d valores pares;\n", v);
    for(int i = 1; i < (v + 1); i++){
        printf("\nPar %d equivalente ao numero %d;", i, V[i]);
    }

    return 0;
}
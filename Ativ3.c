/*
3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, 
armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/
#include <stdio.h>
#include <math.h>

int main(){
    float R[10];
    for(int i = 0; i < 10; i++){
        printf("Insira o Vetor %d: ", i);
        scanf("%f", &R[i]);
        while(getchar() != '\n');
    }
    for(int i = 0; i < 10; i++){
        float quadrado;
        quadrado = sqrt(R[i]);
        printf("O quadrado do Vetor %d e %.3f;\n", i, quadrado);
    }

    return 0;
}
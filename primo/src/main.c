#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehPrimo(int num){
    for(int i=2; i<num; i++){
       if(num % i == 0){
            return 0;
       }
    }
    return 1;
}

void listarGemeos(int inicio, int fim){
    for(int i = inicio; i<=fim; i++){
        if(ehPrimo(i) == 1 && ehPrimo(i+2) == 0){
            printf("---> %d e %d\n", i, i+2);
        }
    }
}

int main() {
    int num;
    int res;

    int inicio;
    int fim;
    
    /*
    printf("Informe um número para verificar se ele é primo!\n");
    scanf("%d", &num);
    
    res = ehPrimo(num);

    if(res == 1){
        printf("O número é primo");
    } else {
        printf("O número não é primo");
    } */

    printf("Informe dois números para verificar se eles são primo genitos!\n");
    scanf("%d", &inicio);
    scanf("");
    scanf("%d", &fim);

    listarGemeos(inicio, fim);
    printf("\n");
}

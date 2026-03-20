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
    int decisao;
    
    do{
        printf("\nEscolha uma opção:\n");
        printf("1 - Verificar se um número é primo\n");
        printf("2 - Listar os números primos gêmeos em um intervalo\n");
        printf("0 - Sair\n");
        scanf("%d", &decisao);

        switch(decisao){
            case 1:
                int num;
                int res;

                printf("\nInforme um número para verificar se ele é primo!\n");
                scanf("%d", &num);
                
                res = ehPrimo(num);

                if(res == 1){
                    printf("\nO número %d é primo\n", num);
                } else {
                    printf("\nO número %d não é primo\n", num);
                }
                break;
            case 2:
                int inicio;
                int fim;

                printf("\nInforme um intervalo de números para verificar os primogenitos entre eles!\n");
                scanf(" %d", &inicio);
                scanf(" %d", &fim);

                listarGemeos(inicio, fim);
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (decisao != 0);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAMANHO 10

int main() {
   setlocale(LC_ALL, "portuguese");
   float numeros[TAMANHO];
   int i, quantidadeNegativos = 0, somaPositivos = 0;

   printf("=== Solicitando dados === \n");
   for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %i� numero: ", i+1);
        scanf("%f",&numeros[i]); 

    if (numeros[i] < 0) {
        quantidadeNegativos++;
    } else if (numeros[i] > 0) {
        somaPositivos += numeros[i];
    }
}

    printf("\n=== Exibindo dados === \n");
    for (i = 0; i < TAMANHO; i++) {
       printf("%i� numero: %.1f \n", i+1, numeros[i]);
}

   printf("\nQuantidade de numeros negativos: %i \n", quantidadeNegativos);
   printf("Soma de numeros positivos: %.1f \n", somaPositivos);

   return 0;
   
}

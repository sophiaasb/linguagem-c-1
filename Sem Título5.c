#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	
	char resultado[200];
    float nota, media, soma = 0;
    int i;
	
	for (i = 1; i <= 3; i++) {
        do {	
		printf("Digite a %i� nota: ", i);
		scanf("%f",&nota);
	} while (nota < 0 || nota > 10);
	
    soma += nota;
    
}

    media = soma / 2;
    
    if (media >= 7) {
    strcpy(resultado, "Aprovado.");
   } else if (media >= 5) {
    strcpy(resultado, "Recupera��o.");
   } else {
    strcpy(resultado, "Reprovado.");
   }
    
    printf("\n === Exibindo resultado === \n");
    printf("M�dia: %.1f \n", media);
    printf("Resultado: %s \n", resultado);

	return 0;
	
}

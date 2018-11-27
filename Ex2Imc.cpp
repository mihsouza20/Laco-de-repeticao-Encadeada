#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float alt, peso, imc, altu;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altu);
	
	alt = altu * altu;
	imc = (peso/alt);
	
	printf ("\nSeu IMC e de: %f", imc);
	
	if (imc < 18) {
		printf("Voce esta em nivel de magreza.");
	}
	
	else {
		if (imc >= 18 && imc < 24.9) {
			printf("Voce esta saudavel.");
		}
			else {
				if (imc >= 25 && imc < 29.9) {
					printf("Voce esta com sobrepeso.");
			}	
			else {
				if (imc > 30) {
					printf("Voce esta obeso.");
				}
			}
		}
}
	return 0;
}

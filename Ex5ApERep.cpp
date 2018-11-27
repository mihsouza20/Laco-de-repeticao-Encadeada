#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, soma, med;
	
	printf ("1 Bimestre: \n");
	scanf ("%f", &n1);
	
	printf ("2 Bimestre: \n");
	scanf ("%f", &n2);
	
	printf ("3 Bimestre: \n");
	scanf ("%f", &n3);
	
	printf ("4 Bimestre: \n");
	scanf ("%f", &n4);
	
	soma = n1+n2+n3+n4;
	med = soma/4;
	
	printf ("Sua nota final foi de: %f", med);
	
	if (med >= 9) {
	printf("Aprovado \n");
	}
	
	else
	if (med >= 7 && med < 9){
		printf ("Aprovado \n");
	}
	
	else
	if (med >= 5 && med < 7){
		printf ("Aprovado \n");
	}
	
	else
	if (med >= 2.5 && med < 5){
		printf ("Reprovado \n");
	}
	
	else
	if (med <= 2.5){
		printf ("Reprovado \n");
	}
	
	system ("PAUSE");
	return 0;
}

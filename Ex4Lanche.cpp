#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf ("Escolha um numero de 1 a 12: \n1 - Janeiro \n2 - Fevereiro \n3 - Marco \n4 - Abril \n5 - Maio \n6 - Junho \n7 - Julho \n8 - Agosto \n9 - Setembro \n10 - Outubro \n11 - Novembro \n12 - Dezembro \n");
	scanf ("%d", &n);
	
	switch (n) {
		case 1:
			printf("Janeiro \n");
			break;
	
	
			case 2:
			printf("Fevereiro \n");
			break;
	
	
			case 3:
			printf("Marco \n");
			break;
	
	
			case 4:
			printf("Abril \n");
			break;
	
	
			case 5:
			printf("Maio \n");
			break;
	
	
			case 6:
			printf("Junho \n");
			break;
	
	
			case 7:
			printf("Julho \n");
			break;
	
	
			case 8:
			printf("Agosto \n");
			break;
	
	
			case 9:
			printf("Setembro \n");
			break;
	
	
			case 10:
			printf("Outubro \n");
			break;
	
	
			case 11:
			printf("Novembro \n");
			break;
	
	
			case 12:
			printf("Dezembro \n");
			break;
	

			default:
			printf("Valor invalido");
			break;
	}
	system("PAUSE");
	return 0;
}

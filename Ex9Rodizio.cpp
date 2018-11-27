#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
 	
	printf ("Digite o ultimo numero da placa do veiculo: ");
	scanf("%d", &n);
	
	switch(n) {
		case 1:
			printf ("O veiculo nao pode transitar nas segundas-feiras!");
		break;

		case 2 :
			printf ("O veiculo nao pode transitar nas segundas-feiras!");
		break;
	
		case 3 :
			printf ("O veiculo nao pode transitar nas tercas-feiras!");
		break;
	
		case 4 :
			printf ("O veiculo nao pode transitar nas tercas-feiras!");
		break;

		case 5 :
			printf ("O veiculo nao pode transitar nas quartas-feiras!");
		break;
	
		case 6 :
			printf ("O veiculo nao pode transitar nas quartas-feiras!");
		break;
	
		case 7 :
			printf ("O veiculo nao pode transitar nas quintas-feiras!");
		break;
	
		case 8 :
			printf ("O veiculo nao pode transitar nas quintas-feiras!");
		break;
	
		case 9 :
			printf ("O veiculo nao pode transitar nas sextas-feiras!");
		break;
	
		case 0 :
			printf ("O veiculo nao pode transitar nas sextas-feiras!");
		break;
	
		default : 
			printf("Numero incorreto. Digite um final de placa de 0 a 9!");
	}
	
	return 0;
}

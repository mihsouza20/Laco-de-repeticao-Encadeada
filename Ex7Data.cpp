#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d1, d2, m1, m2, a1, a2;

	printf("Digite a data, iniciando pelo dia: ");
	scanf("%d", &d1);

	printf("Mes: ");
	scanf("%d", &m1);

	printf("Ano: ");
	scanf("%d", &a1);

	printf("Digite outra data, iniciando pelo dia: ");
	scanf("%d", &d2);

	printf("Mes: ");
	scanf("%d", &m2);

	printf("Ano: ");
	scanf("%d", &a2);

	printf("Primeira data: %d/%d/%d \n", d1, m1, a1);
	printf("Segunda data: %d/%d/%d \n", d2, m2, a2);

	if(a1 > a2) {
		printf("Ordem crescente: %d/%d/%d, %d/%d/%d", d2, m2, a2, d1, m1, a1);
	}

	else if (a2 > a1) {
		printf("Ordem crescente: %d/%d/%d, %d/%d/%d", d1, m1, a1, d2, m2, a2);
	}

	else if (a1 == a2) {
		if (m1 > m2) {
			printf("Ordem crescente: %d/%d/%d, %d/%d/%d", d2, m2, a2, d1, m1, a1);
		}

		else if (m2 > m1) {
			printf("Ordem crescente: %d/%d/%d, %d/%d/%d", d1, m1, a1, d2, m2, a2);
		}
		
		else if (m1 == m2) {
			if (d1 > d2) {
				printf("Ordem crescente: %d/%d/%d, %d/%d/%d", d1, m2, a2, d1, m1, a1);
			}
			
			else if (d2 > d1) {
				printf("Ordem crescente: %d/%d/%d, %d/%d/%d", d1, m1, a1, d2, m2, a2);
			}
		
			else if (d1 == d2) {
				printf("Datas iguais.");
			}
		}
	}
	
	return 0;
}

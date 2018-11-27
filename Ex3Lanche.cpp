#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf ("Digite o lanche de sua preferencia: \n1: BigMc \n2: Quarteirao \n3: McChicken \n4: Cheddar McMelt \n5: McMax \n");
	scanf ("%d", &n);
	
	switch (n) {
	case 1:
		printf ("BigMc; \n");
		break;
	
	case 2:
		printf ("Quarteirao; \n");
		break;
		
	case 3:
		printf ("McChicken; \n");
		break;
		
	case 4:
		printf ("Cheddar McMelt; \n");
		break;
		
	case 5:
		printf ("McMax. \n");
		break;
	
	default:
		printf ("Valor invalido. \n");
	}
	system("PAUSE");
	return 0;
}

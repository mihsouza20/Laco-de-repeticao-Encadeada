#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c;
	
	/* Tri�ngulo Equil�tero: � todo tri�ngulo que apresenta os tr�s lados com a mesma medida. Nesse caso dizemos que os tr�s lados s�o congruentes. */

	/* Tri�ngulo Is�sceles: � todo tri�ngulo que apresenta dois lados com a mesma medida, ou seja, dois lados de tamanhos iguais. */

	/* Tri�ngulo Escaleno: � todo tri�ngulo que apresenta os tr�s lados com medidas diferentes, ou seja, tr�s lados de tamanhos diferentes. */
	
	printf ("Digite o valor do lado A: ");
	scanf ("%f",&a);
	
	printf ("Digite o valor do lado B: ");
	scanf ("%f",&b);
	
	printf ("Digite o valor do lado C: ");
	scanf ("%f",&c);

	if (a + b >= c && a + c >= b && b + c >= a) {
	
		if (a == b && b == c && c == a) {
			printf ("Triangulo equilatero");
		}
		
		else if (a == b || b == c || c == a) {
			printf ("Triangulo isosceles");
		}
		
		else if (a != b && b != c && c != a){
			printf ("Triangulo escaleno");
		}
	}
	
	else {
		printf ("Valores invalidos, impossivel calcular um triangulo.");
	}
	
  system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float hr, man, tar, noi;
	
	printf("Digite a hora de sua chegada: ");
	scanf("%f",&hr);
	 
if (hr >= 5 && hr < 12.59) {
		printf("Seu turno e matutino.");
	}
	
	else 
		if (hr >= 13 && hr < 20.59) {
			printf("Seu turno e vespertino.");
	}
		else 
			if (hr >= 21 || hr <= 4.59) {
				printf("Seu turno e noturno.");
	}	
	return 0;
}

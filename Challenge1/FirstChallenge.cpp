#include <stdio.h>
#include <stdlib.h>



int main() {
	int Num;
	printf("Veuillez saisir un nombre ? \n");
	scanf("%d", &Num);
	if (Num % 2 == 0)
	printf ("Votre nombre est paire \n");
	else 
	printf("Votre nombre est impaire \n");
	return 0;
}

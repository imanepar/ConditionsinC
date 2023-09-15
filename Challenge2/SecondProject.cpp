#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main() {
	char alphabet;
	alphabet = toupper(alphabet);
	printf("Veuillez saisir un caractere ? \n");
	scanf ("%c", &alphabet);
	switch(alphabet)
	{
		case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : case 'y' :
		printf("Votre caractere est voyelle \n");
		break;
		default : printf("votre caractere est consonnant \n");
		break;
	}
	return 0;
}

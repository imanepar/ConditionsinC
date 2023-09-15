#include <stdio.h>
#include <stdlib.h>



int main() {
	char Car;
	printf("Veuillez saisir un caractere ?\n");
	scanf("%c", &Car);
	if (Car >= 65 && Car <= 90)
	{
		printf("C'est un alphabet majuscule");
	}
	else 
	{
		printf("C'est pas un alphabet majuscule");
	}
	
	
	return 0;
}

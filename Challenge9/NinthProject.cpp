#include <stdio.h>
#include <stdlib.h>



int main() {
	char Car;
	printf("Veuillez saisir un caractere ? \n");
	scanf("%c", &Car);
	if (Car >= 65 && Car <= 90)
	{
		printf("C'est un alphabet en majuscule \n");
	}
	
	else if (Car >= 97 && Car <=122 )
	{
		printf("C'est un alphabet en miniscule \n");
	}
	else 
	{
		printf("ce n'est pas un alphabet \n");
	}
	return 0;
}
